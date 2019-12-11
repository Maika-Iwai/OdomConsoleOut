# OdomConsoleOut CMake config file
#
# This file sets the following variables:
# OdomConsoleOut_FOUND - Always TRUE.
# OdomConsoleOut_INCLUDE_DIRS - Directories containing the OdomConsoleOut include files.
# OdomConsoleOut_IDL_DIRS - Directories containing the OdomConsoleOut IDL files.
# OdomConsoleOut_LIBRARIES - Libraries needed to use OdomConsoleOut.
# OdomConsoleOut_DEFINITIONS - Compiler flags for OdomConsoleOut.
# OdomConsoleOut_VERSION - The version of OdomConsoleOut found.
# OdomConsoleOut_VERSION_MAJOR - The major version of OdomConsoleOut found.
# OdomConsoleOut_VERSION_MINOR - The minor version of OdomConsoleOut found.
# OdomConsoleOut_VERSION_REVISION - The revision version of OdomConsoleOut found.
# OdomConsoleOut_VERSION_CANDIDATE - The candidate version of OdomConsoleOut found.

message(STATUS "Found OdomConsoleOut-1.0.0")
set(OdomConsoleOut_FOUND TRUE)

find_package(<dependency> REQUIRED)

#set(OdomConsoleOut_INCLUDE_DIRS
#    "/usr/local/include/odomconsoleout-1"
#    ${<dependency>_INCLUDE_DIRS}
#    )
#
#set(OdomConsoleOut_IDL_DIRS
#    "/usr/local/include/odomconsoleout-1/idl")
set(OdomConsoleOut_INCLUDE_DIRS
    "/usr/local/include/"
    ${<dependency>_INCLUDE_DIRS}
    )
set(OdomConsoleOut_IDL_DIRS
    "/usr/local/include//idl")


if(WIN32)
    set(OdomConsoleOut_LIBRARIES
        "/usr/local//libodomconsoleout.a"
        ${<dependency>_LIBRARIES}
        )
else(WIN32)
    set(OdomConsoleOut_LIBRARIES
        "/usr/local//libodomconsoleout.so"
        ${<dependency>_LIBRARIES}
        )
endif(WIN32)

set(OdomConsoleOut_DEFINITIONS ${<dependency>_DEFINITIONS})

set(OdomConsoleOut_VERSION 1.0.0)
set(OdomConsoleOut_VERSION_MAJOR 1)
set(OdomConsoleOut_VERSION_MINOR 0)
set(OdomConsoleOut_VERSION_REVISION 0)
set(OdomConsoleOut_VERSION_CANDIDATE )

