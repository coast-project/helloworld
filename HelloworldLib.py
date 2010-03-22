import os, pdb
import SConsider
from stat import *

packagename = SConsider.getPackageName(__name__)

def setUp(target, source, env):
    logpath = env['BASEOUTDIR'].Dir(os.path.join('tests', packagename, 'logs', 'rotate'))
    path = env['BASEOUTDIR'].Dir(os.path.join('tests', packagename)).Dir('config')
    if not os.path.isdir(logpath.abspath):
        os.makedirs(logpath.abspath)

def tearDown(target, source, env):
    pass

buildSettings = {
    packagename : {
        'includeSubdir'    : 'helloworld_src',
        'linkDependencies' : ['CoastActions'],
        'sourceFiles'      : SConsider.listFiles(['helloworld_src/*.cpp']),
        'targetType'       : 'LibraryShared',
        'appendUnique'     : { 'CPPDEFINES' : [packagename.upper() + '_IMPL'] },
        'public' : {
            'includeSubdir': 'helloworld_src',
            'includes'     : SConsider.listFiles(['helloworld_src/*.h']),
        }
    },
    'Runner' : {
        'targetType'       : 'AppTest',
        'requires'         : [packagename + '.' + packagename, 'CoastRenderers', 'CoastStdDataAccess', 'CoastAppLog'],
        'usedTarget'       : 'wdapp.wdapp',
        'copyFiles'        : [(SConsider.findFiles(['config'],['.txt', '.html', '.any', '.pem', '.png', '.jpg']), S_IRUSR|S_IRGRP|S_IROTH)],
        'runConfig'        : {
            'setUp': setUp,
            'tearDown': tearDown,
        },
    },
}

SConsider.createTargets(packagename, buildSettings)
