cmake_minimum_required(VERSION 2.6)
PROJECT(gateway)

# The version number.
set (Tutorial_VERSION_MAJOR 2)
set (Tutorial_VERSION_MINOR 0)

set (SOURCES_DIR src)
set (INCLUDE_DIR include)
set (INCLUDE_IN_DIR mould)

set(CMAKE_EXE_LINKER_FLAGS "-pthread  -lzmq")

configure_file (
"${PROJECT_SOURCE_DIR}/${INCLUDE_IN_DIR}/TutorialConfig.h.in"
"${PROJECT_SOURCE_DIR}/${INCLUDE_DIR}/TutorialConfig.h"
)

#set .h dir
include_directories("${PROJECT_SOURCE_DIR}/${INCLUDE_DIR}")

SET(SOURCES	${SOURCES_DIR}/main.c)

ADD_EXECUTABLE(gateway ${SOURCES})

INSTALL(TARGETS gateway RUNTIME DESTINATION bin)
