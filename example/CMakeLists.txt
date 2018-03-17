cmake_minimum_required (VERSION 2.6 FATAL_ERROR)

include_directories (../dmidecode-lib)
add_executable (dmidecode dmidecode.cpp)
target_link_libraries (dmidecode dmidecode-lib)
