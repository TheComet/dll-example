add_definitions (-D_BUILDING)
include_directories ("${CMAKE_SOURCE_DIR}/foo")

add_library (bar SHARED "bar.h" "bar.c")

target_link_libraries (bar foo)
