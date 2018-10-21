cmake_minimum_required(VERSION 3.12)
project(testQt)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(SOURCE_FILES main.cpp)

find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core 5.3 REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Sql REQUIRED)
find_package(Qt5Xml REQUIRED)
find_package(Qt5PrintSupport REQUIRED)
find_package(Qt5LinguistTools REQUIRED)

add_executable(testQt ${SOURCE_FILES})
target_link_libraries(testQt Qt5::Widgets Qt5::Core Qt5::Network Qt5::Sql ${Boost_LIBRARIES})

