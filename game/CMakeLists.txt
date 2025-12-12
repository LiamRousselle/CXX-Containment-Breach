#-------------------------------------------------------------------
# Project Licensed under MIT License [2025]
#-------------------------------------------------------------------

file(GLOB_RECURSE GAME_SOURCES "./src/**.cpp")
file(GLOB_RECURSE GAME_HEADERS "./src/**.h")

if (NO_CONSOLE)
    add_executable(CbGame WIN32 ${GAME_SOURCES} ${GAME_HEADERS})
else()
    add_executable(CbGame ${GAME_SOURCES} ${GAME_HEADERS})
endif()

#-------------------------------------------------------------------
# Libraries
#-------------------------------------------------------------------
find_package(OpenGL REQUIRED)
target_link_libraries(CbGame PRIVATE glfw OpenGL::GL)