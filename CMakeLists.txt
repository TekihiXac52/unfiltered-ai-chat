cmake_minimum_required(VERSION 3.16)
project(unfiltered-ai-chat CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(unfilteredaichat
    src/main.cpp
    src/server.cpp
    src/models.cpp
    src/characters.cpp
)

target_include_directories(unfilteredaichat PRIVATE include)

if(WIN32)
    target_link_libraries(unfilteredaichat PRIVATE userenv)
endif()
