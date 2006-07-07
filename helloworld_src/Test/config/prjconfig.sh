###########################################################################
# Copyright (c) 1999-2000 itopia
# All Rights Reserved
#
# $Id$
#
# project specific variables and directories, loaded from within config.sh
#
############################################################################

############################################################################
#
# In this ection you should only adjust but NOT remove any of the given variables
# because these are used from within other scripts
#

# overwrite this one ONLY if the LOGDIR variable points to the wrong place
LOGDIR=.

#SERVERNAME="ftp-fd"
#PRJ_DESCRIPTION="Telekurs FTP-Frontdoor"
#PID_FILE=$PROJECTDIR/$LOGDIR/$SERVERNAME.PID

# name of the tared and gzipped distribution file, caution: try to use short names
# because some CD burning software do only store 8.3 names
#TARGZNAME=$SERVERNAME.tgz

# specify ALL of your filterable configurations, to build for a specific configuration
# you have to specify ONE one the command line on case of a doall.sh execution
# or use setConfig.sh to set a specific config
ALL_CONFIGS="TestCases itopia foolabs tkf"

# use setConfig.sh to set this default config
DEF_CONF="TestCases itopia"

# overwrite this one ONLY if the WD_PATH variable points to the wrong place
#WD_PATH=config

############################################################################
#
# from here on you can add your own variables which you can use in the
# project specific prjcopy.sh file for example
