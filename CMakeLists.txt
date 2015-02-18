cmake_minimum_required (VERSION 2.6)


project (app)

set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_definitions (-D_BUILDING)


include_directories ("bar")

add_executable (app "app/app.c")

target_link_libraries (app bar)


add_subdirectory ("foo")

add_subdirectory ("bar")
