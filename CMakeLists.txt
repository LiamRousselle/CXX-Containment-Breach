#-------------------------------------------------------------------
# Project Licensed under MIT License [2025]
#-------------------------------------------------------------------
cmake_minimum_required(VERSION 3.20)
project(CXXContainmentBreach VERSION 1.0.0)

#-------------------------------------------------------------------
# Options
#-------------------------------------------------------------------
option(NO_CONSOLE "Disables the Win32 console when the project is built" OFF)

#-------------------------------------------------------------------
# Definitions
#-------------------------------------------------------------------
if (NO_CONSOLE)
    add_definitions(-DNCONSOLE)
else()
    add_definitions(-DCONSOLE)
endif()

#-------------------------------------------------------------------
# Subdirectories
#-------------------------------------------------------------------
add_subdirectory("./submodules")
add_subdirectory("./game")