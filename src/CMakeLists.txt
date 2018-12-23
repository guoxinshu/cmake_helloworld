cmake_minimum_required(VERSION 2.6)
set (PRODUCT_NAME main)

PROJECT(${PRODUCT_NAME})


ADD_SUBDIRECTORY(lib)


LINK_DIRECTORIES(/usr/local/lib)

ADD_DEFINITIONS( -g -Wall )

#set .h dir
include_directories("${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/lib/xslib"
    
    )

aux_source_directory(src SOURCES)

ADD_EXECUTABLE(${PRODUCT_NAME} ${SOURCES})

# link library
#TARGET_LINK_LIBRARIES(${PRODUCT_NAME} pthread)
TARGET_LINK_LIBRARIES(${PRODUCT_NAME} xslib)

INSTALL(TARGETS ${PRODUCT_NAME} RUNTIME DESTINATION bin)
