cmake_minimum_required(VERSION 3.14)

project(Core-Qt-Modules-2_1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.7.0/mingw_64")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "C:/Qt/6.7.0/mingw_64/lib/cmake")

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Network Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network Sql)

add_executable(Core-Qt-Modules-2_1
  main.cpp
)

target_link_libraries(Core-Qt-Modules-2_1 PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Network Qt${QT_VERSION_MAJOR}::Sql)

include(GNUInstallDirs)
install(TARGETS Core-Qt-Modules-2_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
