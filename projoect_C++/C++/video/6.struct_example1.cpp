#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>
using namespace std;


struct student 
{
    string name;
    int score;
};
struct teacher
{
    string name;
    student stu[5];
};
int main()
{
    srand((unsigned)time(NULL));
    teacher arr_teacher[3];
    string nameseed ="ABCDE";
    for(int i=0;i<3;i++)
    {
        arr_teacher[i].name="Teacher_";
        arr_teacher[i].name+=nameseed[i];//给老师命名
        //C++字符串直接相加
        for(int j=0;j<5;j++)
        {
            arr_teacher[i].stu[j].name="student_";
            arr_teacher[i].stu[j].name+=nameseed[j];
            arr_teacher[i].stu[j].score=rand()%101;
        }
    }
    for(int i=0;i<3;i++)
    {
        cout << arr_teacher[i].name << endl;
        for(int j=0;j<5;j++)
        {
            cout << "\t" << arr_teacher[i].stu[j].name <<" "<<arr_teacher[i].stu[j].score<<endl;
        }
    }

    return 0;
}
