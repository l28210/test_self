// 44
// 题目描述
// 根据主函数与头文件格式编写子函数：avg和avg_i，分别用来计算全班同学总平均成绩与某位同学的平均成绩；

// 输入输出
// 输入输出格式
// 以两位同学，各三科成绩为例，输入两行三列数据

// avg函数输出全班同学的平均成绩；
// avg_i输出某位同学（函数参数）的平均成绩。
// 数据范围：[0,100]内正实数；

// 输出输出样例
// 输入1：

// 70 80 90
// 50 60 70
// ​
// 输出1：

// 70.00
// 80.00
// 60.00
// ​
// 输入2：

// 85 90 96
// 75 64 82
// ​
// 输出2：

// 82.00
// 90.33
// 73.67
// ​
// 提示
// 浮点数操作建议使用double完成；


// #include <stdio.h>

// // 计算全班同学的平均成绩
// double avg(double grades[][3], int numStudents) {
//     double total = 0.0;

//     for (int i = 0; i < numStudents; i++) {
//         for (int j = 0; j < 3; j++) {
//             total += grades[i][j];
//         }
//     }

//     return total / (numStudents * 3);
// }

// // 计算某位同学的平均成绩
// double avg_i(double grades[][3], int numStudents, int studentIndex) {
//     double total = 0.0;

//     if (studentIndex < 0 || studentIndex >= numStudents) {
//         return 0.0; // 防止索引越界
//     }

//     for (int j = 0; j < 3; j++) {
//         total += grades[studentIndex][j];
//     }

//     return total / 3;
// }

// int main() {
//     double grades[2][3];
//     int numStudents = 2;

//     for (int i = 0; i < numStudents; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%lf", &grades[i][j]);
//         }
//     }

//     double classAvg = avg(grades, numStudents);
//     printf("%.2lf\n", classAvg);

//     for (int i = 0; i < numStudents; i++) {
//         double studentAvg = avg_i(grades, numStudents, i);
//         printf("%.2lf\n", studentAvg);
//     }

//     return 0;
// }



#include <stdio.h>
#define N_stu 2
#define N_sub 3

void avg(double *p);
void avg_i(double (*p)[N_sub], int ID);

int main() {
    int i, j;
    double score[N_stu][N_sub];

    for (i = 0; i < N_stu; i++) {
        for (j = 0; j < N_sub; j++) {
            scanf("%lf", &score[i][j]);
        }
    }

    double *p = score[0];
    double (*p_i)[N_sub] = score;

    avg(p);
    avg_i(p_i, 0);
    avg_i(p_i, 1);

    return 0;
}

void avg(double *p) {
    double total_score = 0.0;

    for (int i = 0; i < N_stu * N_sub; i++) {
        total_score += p[i];
    }
    
    double class_avg = total_score / (N_stu * N_sub);
    printf("%.2lf\n", class_avg);
}

void avg_i(double (*p)[N_sub], int ID) {
    double student_score = 0.0;

    for (int j = 0; j < N_sub; j++) {
        student_score += p[ID][j];
    }

    double student_avg = student_score / N_sub;
    printf("%.2lf\n", student_avg);
}
