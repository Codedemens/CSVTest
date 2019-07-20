

cmake_minimum_required(VERSION 2.8)
project(Excel)

add_compile_options(-std=c++14)
add_compile_options(-O2)

if(CMAKE_BUILD_TYPE STREQUAL "Build")
    add_compile_options(-g)
endif()

add_subdirectory(${PROJECT_SOURCE_DIR}/src)

add_executable(exceltest
    ${SOURCE}
    ${HEADERS}
)

set_target_properties(exceltest PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(exceltest
  PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)   


