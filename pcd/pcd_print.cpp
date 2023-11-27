#include <iostream>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/visualization/cloud_viewer.h>

int main(int argc, char** argv)
{
    pcl::PointCloud<pcl::PointXYZI>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZI>);
    
    // Load PCD file
    if (pcl::io::loadPCDFile<pcl::PointXYZI>("output.pcd", *cloud) == -1)
    {
        PCL_ERROR("Couldn't read file your_labeled_pointcloud.pcd\n");
        return (-1);
    }

    pcl::visualization::CloudViewer viewer("PCD Viewer");
    viewer.showCloud(cloud);

    while (!viewer.wasStopped())
    {
    }

    return 0;
}
