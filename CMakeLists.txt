cmake_minimum_required(VERSION 3.14)

project(SoftRasterRenderer)

add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

file(GLOB SRC_MAIN src/main.cpp)
file(GLOB SRC_RASTERIZER src/Rasterizer/*)
file(GLOB SRC_MATH src/Math/*)

source_group("Rasterizer" FILES ${SRC_RASTERIZER})
source_group("Math" FILES ${SRC_MATH})

include_directories("src")

include_directories("3rdparty/opencv/include")
link_directories("3rdparty/opencv/lib/")
link_libraries(opencv_world470.lib)

add_executable(SoftRasterRenderer ${SRC_MAIN} ${SRC_RASTERIZER} ${SRC_MATH})

file(GLOB ALL_OPENCV_BIN "3rdparty/opencv/bin/*")
file(COPY ${ALL_OPENCV_BIN} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Debug)
file(COPY ${ALL_OPENCV_BIN} DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Release)





