#include<iostream>
#include<string>
using namespace std;


    //结构体数组
    //1.定义结构体
    struct Student 
    {
        string name;
        int age;
        int score;
    };


int main()
{
    //2.创建结构体数组
    struct Student arr[3]=
    {
        {"张三",18,100},
        {"李四",19,50},
        {"王五",20,50},
    };
    // 3.给结构体数组中的元素赋值
    arr[1].age=30;
    // 4.遍历结构体数组
    for(int i=0;i<3;i++)
    {
        cout << arr[i].name << arr[i].age << " " << arr[i].score << endl;
    }



    //结构体指针
    //利用操作符"->"可以通过结构体指针访问结构体属性
    
    //通过指针指向结构体变量
    Student *w=&arr[1];
    cout << w->name << w->age << " " << w->score << endl;



    //结构体嵌套结构体
    struct Teacher
    {
        string name;
        int id;
        int age;
        Student stu;
    };
    Teacher t;
    t.name="2a";
    t.id=10086;
    t.age=50;
    t.stu=arr[2];
    cout << t.name << endl;
    cout << t.id << endl;
    cout << t.age << endl;
    cout << t.stu.name << endl;
    cout << t.stu.age<< endl;
    cout << t.stu.score << endl;


    //结构体中const使用场景
    //防止误操作
    //在数据量较大时，将传入函数的形参修改为指针，可以减少内存空间，而且不会复制新的副本
    void printarr(const Student *s);
    //可以避免在函数中误操作
    return 0;
}