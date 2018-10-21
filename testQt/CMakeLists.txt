cmake_minimum_required(VERSION 3.9)
project(testQt)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Sources/main.cpp Sources/mainwindow.cpp)
set(UI_HEADERS Headers/mainwindow.h)
set(UI Forms/mainwindow.ui)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS Forms)

find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core 5.3 REQUIRED)
find_package(Qt5Network REQUIRED)
find_package(Qt5Sql REQUIRED)
find_package(Qt5Xml REQUIRED)
find_package(Qt5PrintSupport REQUIRED)
find_package(Qt5LinguistTools REQUIRED)

qt5_wrap_cpp(testQt_SRC ${UI_HEADERS})
qt5_wrap_ui(${UI_HEADERS} ${UI})

add_executable(testQt ${SOURCE_FILES} ${testQt_UI} ${testQt_SRC})
target_link_libraries(testQt Qt5::Widgets Qt5::Core Qt5::Network Qt5::Sql ${Boost_LIBRARIES})

