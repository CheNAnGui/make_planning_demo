cmake_minimum_required(VERSION 3.29.0)
project(planning    
    VERSION 0.0.1
    DESCRIPTION "make_planning_demo"
    HOMEPAGE_URL "https://github.com/CheNAnGui/make_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

#设置变量
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

#添加子目录
add_subdirectory(src)


