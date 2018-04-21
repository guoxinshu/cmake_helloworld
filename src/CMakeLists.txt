cmake_minimum_required(VERSION 2.6)
set (PRODUCT_NAME mytest)

PROJECT(${PRODUCT_NAME})

set (SOURCES_DIR src)
set (INCLUDE_DIR include)
set (INCLUDE_IN_DIR mould)

LINK_DIRECTORIES(/usr/local/lib)

ADD_DEFINITIONS( -g -Wall )

#set .h dir
include_directories("${PROJECT_SOURCE_DIR}/${INCLUDE_DIR}")

SET(SOURCES	${SOURCES_DIR}/main.c)

ADD_EXECUTABLE(${PRODUCT_NAME} ${SOURCES})

# link library
TARGET_LINK_LIBRARIES(${PRODUCT_NAME} pthread)

INSTALL(TARGETS ${PRODUCT_NAME} RUNTIME DESTINATION bin)
