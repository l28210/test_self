#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) {
    // 加载点云数据
    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZI>());
    pcl::io::loadPCDFile("input.pcd", *cloud);

    // 打开标签数据文件
    std::ifstream labelFile("input.txt");
    if (!labelFile.is_open()) {
        std::cerr << "Failed to open label data file." << std::endl;
        return -1;
    }

    std::string line;
    int pointIndex = 0;

    // 遍历标签数据文件
    while (std::getline(labelFile, line)) {
        // 解析标签数据
        std::istringstream ss(line);
        float x, y, z;
        std::string label;

        ss >> pointIndex >> x >> y >> z >> label;

        // 将标签信息存储到点云数据中的新维度
        cloud->points[pointIndex].intensity = label == "Pedestrian" ? 1.0 : 0.0;
    }

    // 保存带有标签信息的点云数据
    pcl::io::savePCDFile("output.pcd", *cloud);

    return 0;
}
