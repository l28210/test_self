#include<iostream>
#include<string>

using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};
int main()
{
    hero arr[5]=
    {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"}
    };
    for(int i=0;i<5-1;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j].age>arr[j+1].age)
            {
                hero swap;
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout << arr[i].name << "\t" << arr[i].age << "\t" << arr[i].sex << endl;
    }
    return 0;
}