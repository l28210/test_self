# 代码移植与编译

## 利用FileZilla传输代码

- FileZilla连接树梅派

![Alt text](<img_md/2023-08-28 14-35-46 的屏幕截图.png>)
无法直接连接到树梅派

在“文件”中新建站点，协议选择“SFTP”，输入主机和用户密码即可连接成功

- 代码传输

将代码打包后发送给树梅派

传输失败

原因：pi中的文件夹权限不够

在终端输入

```
cd ..
sudo chmod -R 777 pi/
```

即可正常传输

![Alt text](<img_md/2023-08-28 15-00-02 的屏幕截图.png>)


- 解压

![Alt text](<img_md/2023-08-28 15-11-38 的屏幕截图.png>)

## 编译

直接编译

![Alt text](<img_md/2023-08-29 14-05-07 的屏幕截图.png>)

原本在tx2中编译后的文件仍然存在

删除build与devel目录后再次编译

![Alt text](<img_md/2023-08-29 14-05-34 的屏幕截图.png>)



![Alt text](<img_md/2023-08-29 14-10-33 的屏幕截图.png>)


缺少serial包

![Alt text](<img_md/2023-08-29 14-11-34 的屏幕截图.png>)

安装后再次编译

缺少消息包

![Alt text](<img_md/2023-08-29 14-19-09 的屏幕截图.png>)

```
sudo apt-get install ros-melodic-navigation
```

再次编译

![Alt text](<img_md/2023-08-29 14-52-51 的屏幕截图.png>)

无法辨认.so文件

经过验证文件存在且完好

![Alt text](<img_md/2023-08-29 15-03-14 的屏幕截图.png>)

可能为文件兼容问题

![Alt text](<img_md/2023-08-29 16-22-20 的屏幕截图.png>)

树梅派系统架构为arm7l

即arm32位架构系统

源代码兼容的为arm64位系统

![Alt text](<img_md/2023-08-29 16-22-45 的屏幕截图.png>)

```
vim CMakeLists.txt
```
将64改为32

删除build与devel目录后重新编译

编译成功

![Alt text](<img_md/2023-08-29 17-02-39 的屏幕截图.png>)