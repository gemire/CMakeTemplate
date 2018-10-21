project(kb)

set(CMAKE_CXX_STANDARD 14)

add_executable(kb main.cpp)
target_link_libraries(kb
        jsonutils
        absl::strings
        )