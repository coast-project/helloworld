#--------------------------------------------------------------------
# Copyright (c) 2010, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
# All rights reserved.
#
# This library/application is free software; you can redistribute and/or modify it under the terms of
# the license that is included with this library/application in the file license.txt.
#--------------------------------------------------------------------

# overwrite this one ONLY if the LOGDIR variable points to the wrong place
if [ -n "$ROTATEDIR" ]; then
	test -d $PROJECTDIR/$ROTATEDIR || mkdir -p $PROJECTDIR/$ROTATEDIR
fi
