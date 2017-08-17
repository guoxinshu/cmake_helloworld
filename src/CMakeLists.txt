cmake_minimum_required(VERSION 2.6)
PROJECT(gateway)

# The version number.
set (Tutorial_VERSION_MAJOR 2)
set (Tutorial_VERSION_MINOR 0)

set (SOURCES_DIR src)
set (INCLUDE_DIR include)
set (INCLUDE_IN_DIR mould)

LINK_DIRECTORIES(/usr/local/lib)

ADD_DEFINITIONS( -g -Wall )

configure_file (
"${PROJECT_SOURCE_DIR}/${INCLUDE_IN_DIR}/TutorialConfig.h.in"
"${PROJECT_SOURCE_DIR}/${INCLUDE_DIR}/TutorialConfig.h"
)

#set .h dir
include_directories("${PROJECT_SOURCE_DIR}/${INCLUDE_DIR}")

SET(SOURCES	${SOURCES_DIR}/main.c)

ADD_EXECUTABLE(gateway ${SOURCES})

# link library
TARGET_LINK_LIBRARIES(gateway pthread)
TARGET_LINK_LIBRARIES(gateway zmq)

INSTALL(TARGETS gateway RUNTIME DESTINATION bin)
