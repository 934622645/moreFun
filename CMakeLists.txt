cmake_minimum_required(VERSION 3.0.0)
project(cc_test VERSION 0.1.0)
aux_source_directory(. DIR_TOOT_SRCS)
# debug 模式
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

add_subdirectory(src)			# 添加math子目录
add_executable(cc_test ${DIR_TOOT_SRCS})
target_link_libraries(cc_test power)

