cmake_minimum_required(VERSION 3.0)
project(PCDConversion)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 寻找 PCL（点云库）
find_package(PCL 1.8 REQUIRED)

# 添加可执行文件
add_executable(PCDConversion pcd.cpp)

# 链接到 PCL 库
target_link_libraries(PCDConversion ${PCL_LIBRARIES})

# 设置包含目录
target_include_directories(PCDConversion PRIVATE ${PCL_INCLUDE_DIRS})

# 添加可执行文件
add_executable(pcd_print pcd_print.cpp)

# 链接到 PCL 可视化模块
target_link_libraries(pcd_print ${PCL_LIBRARIES} ${PCL_VISUALIZATION_LIBRARIES})

# 设置包含目录，包括 PCL 可视化模块的头文件
target_include_directories(pcd_print PRIVATE ${PCL_INCLUDE_DIRS})
