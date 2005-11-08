###########################################################################
# Copyright (c) 1999-2000 itopia
# All Rights Reserved
#
# $Id$
#
# project specific copying and setting of permissions for directories
# loaded from within cpall.sh
#
# check the file config.sh to have an overview of the predefined variables
# you can use for defined directories etc
#
############################################################################

# NOTE: $TMPDIR/bin already created and generic parts copied (wdserver, wdapp)
# NOTE: $TMPDIR/config already created and generic parts copied (any, sh)
# NOTE: $TMPDIR/lib already created and generic parts copied (so)
# NOTE: $TMPDIR/scripts already created and generic parts copied (sh, awk)

# NOTE: try not to use recursive copying because of possible CVS directories

# NOTE: please adjust permissions of directories for security reason

# you can modify the following parts, these are here as example

mkdir -p $TMPDIR/${CONFIGDIR:-config}/HTMLTemplates/static/images
# copy everything now
cp $CONFIGDIRABS/HTMLTemplates/static/images/*gif  $TMPDIR/${CONFIGDIR:-config}/HTMLTemplates/static/images
cp $CONFIGDIRABS/HTMLTemplates/*.html $TMPDIR/${CONFIGDIR:-config}/HTMLTemplates
cp $CONFIGDIR/recipes_cert.pem $TMPDIR/config
cp $CONFIGDIR/recipes_key.pem $TMPDIR/config
chmod 540 $TMPDIR/config/*.pem
chmod 664 $TMPDIR/${CONFIGDIR:-config}/HTMLTemplates/*.html
chmod 444 $TMPDIR/${CONFIGDIR:-config}/HTMLTemplates/static/images/*gif

