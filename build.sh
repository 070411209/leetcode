#*****************************************************************************************************
# Copyright (c) 2019 by Beijing xxx Online Technology Co., Ltd.
# All rights reserved
#
# This file is part of xxx
# @file build.sh
# @brief auto build the xxx project and produce xxx software package
# @author xxx
# @history
#      Date         Author             Comment
#      2009/10/16   xxx         add shell code to build project
#******************************************************************************************************/
#!/bin/bash


help_info()
{
    echo "USAGE:"
    echo "      bash build.sh [option]"
    echo "      option: "
    echo "             all--only build the project"
    echo "             clean--clean the build dir"
    echo "             release--build the project and produce a release software package
}

if [ "$1" == "all" ]
then
    build_project
else
    help_info
fi
