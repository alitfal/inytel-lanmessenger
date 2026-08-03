cmake_minimum_required(VERSION 3.16)
project(LANMessenger VERSION 1.2.39 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt6 tooling: auto-run moc/uic/rcc on demand
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

if(MSVC)
    add_compile_options(/utf-8)
endif()

# lmcapp (single-instance + multilingual helper library) must be built first,
# lmc links against it.
add_subdirectory(lmcapp)
add_subdirectory(lmc)
