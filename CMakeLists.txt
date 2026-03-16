cmake_minimum_required(VERSION 3.28)
project(GameCommonTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Wymuszamy tryb Debug
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# --- Biblioteka ---
add_library(GameCommon
    src/drawable-container.cpp
    src/point2d.cpp
    src/collision.cpp
)

target_include_directories(GameCommon
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# --- Testy ---
add_executable(GameCommonTest
    tests/main.cpp
)

# 🔑 TO BYŁ BRAKUJĄCY ELEMENT
target_link_libraries(GameCommonTest
    PRIVATE GameCommon
)

# Konsola (MinGW / Windows)
target_link_options(GameCommonTest PRIVATE -mconsole)
