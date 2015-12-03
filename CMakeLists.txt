cmake_minimum_required (VERSION 2.6)
project (ACCEL)

#The Version No.
set (ACCEL_VERSION_MAJOR 1)
set (ACCEL_VERSION_MINOR 0)

configure_file (
	"${PROJECT_SOURCE_DIR}/include/Config.h.in"
	"${PROJECT_SOURCE_DIR}/include/Config.h"
)

include_directories("${PROJECT_BINARY_DIR}/include/")

add_subdirectory(connect)
#add_executable(Tutorial tutorial.cpp)
