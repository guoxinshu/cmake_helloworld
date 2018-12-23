
set (PRODUCT_NAME xslib)

include_directories(".")

aux_source_directory(. DIR_LIB_SRCS)

add_library (${PRODUCT_NAME} SHARED ${DIR_LIB_SRCS})




