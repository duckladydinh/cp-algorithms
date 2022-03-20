cmake_minimum_required(VERSION 3.21)
project(cp_algorithms)

### Section: EXAMPLES

### Section: EXAMPLES: Set C++ standard.
set(CMAKE_CXX_STANDARD 20)

### Section: EXAMPLES: Set flags for easy debugging of common problems.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize=undefined -fno-omit-frame-pointer")

### Section: EXAMPLES: Add ac-library to binary.

## To add ac-library to this binary, there are 2 ways.
##   0. Define your executable.
add_executable(ac_twosat_example ac_twosat_example.cpp)

##   1. Since it's a header-only directory, we can simply:
#include_directories(ac-library)

##   2. We can create a library and link it to the binary target:
add_library(ac_library INTERFACE)
target_include_directories(ac_library INTERFACE ac-library)
target_link_libraries(ac_twosat_example ac_library)

## After that, you can use the library using, for example, `#include <atcoder/twosat>`.
##
## Last, but not least, to generate a single-file output for submitting to non-AtCoder platform, use:
##   `./ac-library/expander.py ac_twosat_example.cpp --lib ac-library`.
## Then you can submit the `combined.cpp` output file.

### Section: EXAMPLES (END)

add_executable(cp_algorithms main.cpp)
target_link_libraries(cp_algorithms ac_library)

