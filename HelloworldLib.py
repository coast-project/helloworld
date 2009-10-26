import os
import StanfordUtils
from stat import *

packagename = StanfordUtils.getPackageName(__name__)

buildSettings = {
    packagename : {
        'includeSubdir'    : 'helloworld_src',
        'linkDependencies' : ['CoastActions'],
        'sourceFiles'      : StanfordUtils.listFiles(['helloworld_src/*.cpp']),
        'targetType'       : 'LibraryShared',
        'appendUnique'     : { 'CPPDEFINES' : [packagename.upper() + '_IMPL'] },
        'public' : {
            'includeSubdir': 'helloworld_src',
            'includes'     : StanfordUtils.listFiles(['helloworld_src/*.h']),
        }
    },
    'Runner' : {
        'targetType'       : 'AppTest',
        'requires'         : [packagename + '.' + packagename, 'CoastRenderers', 'CoastStdDataAccess', 'CoastAppLog'],
        'usedTarget'       : 'wdapp.wdapp',
        'copyFiles'        : [(StanfordUtils.findFiles(['config'],['.txt', '.html', '.any', '.pem', '.png', '.jpg']), S_IRUSR|S_IRGRP|S_IROTH)],
    },
}

StanfordUtils.createTargets(packagename, buildSettings)
