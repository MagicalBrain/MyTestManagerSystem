cmake_minimum_required (VERSION 3.13)

# 设置项目名字
project(Questions LANGUAGES CXX)

# 如果没有设置cmake安装路径，则设置
if (NOT CMAKE_INSTALL_PREFIX)
    set(CMAKE_INSTALL_PREFIX /usr/local)
endif ()

# set(PROJECT_SOURCE_DIR "./")
set(PROJECT_DIR "./")

# 添加c++11标准
set(CMAKE_CXX_STANDARD 11)
# 显式要求指明支持C++标准
set(CMAKE_CXX_STANDARD_REQUIRED True)

# include头文件
include_directories(${PROJECT_DIR}/include )

# 添加源代码文件
aux_source_directory(${PROJECT_DIR}/src  PROJECT_SOURCE_DIR)

# 生成可执行文件
# add_executable(${PROJECT_NAME}.o  ${PROJECT_SOURCE_DIR})

# 生成动态库.so文件
add_library(${PROJECT_NAME} SHARED  ${PROJECT_SOURCE_DIR})

# target_include_directories(${PROJECT_NAME} 
#    ${PROJECT_SOURCE_DIR})

# install
install(TARGETS ${PROJECT_NAME} 
    DESTINATION lib
)

install(DIRECTORY include/
	DESTINATION include/${PROJECT_NAME}
)