//1汉诺塔
//#include<stdio.h>
//
//int div_2(int x)
//{
//	if (x % 2 == 0)
//		return 1;
//	else
//		return 0;
//}
//int div_3(int x)
//{
//	if (x % 3 == 0)
//		return 2;
//	else
//		return 0;
//}
//int div_5(int x)
//{
//	if (x % 5 == 0)
//		return 4;
//	else
//		return 0;
//}
//
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	int sum = 0;
//	sum = div_2(x) + div_3(x) + div_5(x);
//	switch(sum)
//	{
//	case 0:
//		printf("0");
//		break;
//	case 1:
//		printf("1");
//		break;
//	case 2:
//		printf("2");
//		break;
//	case 4:
//		printf("3");
//		break;
//	case 3:
//		printf("4");
//		break;
//	case 5:
//		printf("5");
//		break;
//	case 6:
//		printf("6");
//		break;
//	case 7:
//		printf("7");
//		break;
//
//
//	}
//	return 0;
//}


//99
//#include<stdio.h>
//int main()
//{
//	int n, s;
//	scanf_s("%d", &n);
//	scanf_s("%d", &s);
//	int a[10000], b[10000];
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//		scanf_s("%d", &b[i]);
//		sum += b[i];
//	}
//	if (s >= sum)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}

//98
//#include<stdio.h>
//
//void shift(int* p, int m, int n)
//{
//	if (n >= m)
//	{
//		n = n % m;
//	}
//	int q[1000];
//	for (int i = 0; i < n; i++)
//	{
//		q[i] = p[m - n + i];
//
//
//	}
//	for (int i = n, j = 0; i < m; i++, j++)
//	{
//		q[i] = p[j];
//
//	}
//	for (int i = 0; i<m;i++)
//	{
//		p[i] = q[i];
//	}
//
//}


//#include<stdio.h>
//void move(int n, int a, int b);
//void hanoi(int n, int a, int b, int c)
//{
//    if (n == 1)
//    {
//        move(n, a, c);
//    }
//    else
//    {
//        hanoi(n - 1, a, c, b);
//        move(n, a, c);
//        hanoi(n - 1, b, a, c);
//    }
//
//}
//void move(int n, int a, int b)
//{
//    char start = 'a' + a;
//    char end = 'a' + b;
//    printf("move %d from %c to %c\n", n, start, end);
//}//��СΪn������a�ƶ���b��Ϣ���
//int main() 
//{
//    int n;
//    scanf_s("%d", &n);
//    hanoi(n, 0, 1, 2);
//
//}



//2合并有序数组
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//
//void merge(int* nums1, int m, int* nums2, int n);
//void merge1(int* nums1, int m, int* nums2, int n);
//
//void arr(int* m,int n)
//{
//	
//	int swap = 0;
//	for (int j=n;j>0;j--)
//	{
//		for (int i = 0; i < j-1; i++)
//		{
//			if (*(m + i) > *(m + i + 1))
//			{
//				swap = *(m + i);
//				*(m + i) = *(m + i + 1);
//				*(m + i + 1) = swap;
//			}
//
//		}
//	}
//}//冒泡排序
//
//void merge(int* nums1, int m, int* nums2, int n) {
//	int* p1 = nums1 + m - 1;
//	int* p2 = nums2 + n - 1;
//	int* q = nums1 + m + n - 1;
//	
//	for (int i = 0; i < n; i++, p2--, q--)
//		*q = *p2;
//	arr(nums1, m + n);
//	
//}
//
////int max(int x, int y)
////{
////	return x > y ? x : y;
////}
//
//void merge1(int* nums1, int m, int* nums2, int n) {
//	int* p1 = nums1, * p1e = nums1 + m;
//	int* p2 = nums2, * p2e = nums2 + n;
//	int new[100];
//	int* q = new;
//	
//	for (int i = 0; i < n; i++)
//	{
//		*(p1e + i) = *(p2 + i);
//	}
//	for (int i = 0; i < m + n; i++)
//	{
//		*(q + i) = *(p1 + i);
//	}
//	arr(nums1,m+n);
//}
//
//int main() {
//	int nums1[6] = { 1,2,3 }, nums2[3] = { 2,5,6 };
//	int expected[6] = { 1,2,2,3,5,6 };
//
//	merge1(nums1, 3, nums2, 3);
//	//for (int i = 0; i < 6; i++)
//	//	printf("%d\n", nums1[i]);
//	for (int i = 0; i < 6; i++)
//		assert(nums1[i] == expected[i]);
//
//	int nums11[6] = { 1,2,3 };
//	merge(nums11, 3, nums2, 3);
//	for (int i = 0; i < 6; i++)
//		assert(nums11[i] == expected[i]);
//
//	return 0;
//}


//3计算星期几

//#include<stdio.h>
//#include<assert.h>
//
//int leap(int year);
//const char* weekday(int year, int month, int day);
//
//const char* weekday(int year, int month, int day) {
//    const char* weekdays[] = { "Sunday",
//        "Monday", "Tuesday", "Wednesday",
//        "Thursday", "Friday", "Saturday", };
//    static int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    m[1] = leap(year) ? 29 : 28;
//    int sum_days = day;
//    //....
//    if (month <= 2)
//        month += 12;
//    sum_days = year % 100 - 2 * (year % 100) + year + year / 4 + 13 * (month + 1) / 5 + day - 1;
//    return weekdays[sum_days % 7];
//}
//
//int leap(int year) {
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//        return 1;
//    return 0;
//}
//
//
//
//
//int main() {
//    int year = 2022, month = 11, day = 29;
//    printf("%s\n", weekday(year, month, day));
//    //������ָ����ȣ������ַ�����ȡ� 
//    assert(weekday(year, month, day) == "Tuesday");
//    return 0;
//}

//4矩阵相加
//
//#include<stdio.h>
//
//int main()
//{
//	int matrix_1[3][3];
//	int matrix_2[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf_s("%d", &matrix_1[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf_s("%d", &matrix_2[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", matrix_1[i][j] + matrix_2[i][j]);
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}

//5平均雨量

	//#include<stdio.h>

	//int main()
	//{
	//	float rain[1000];
	//	int i = -1;
	//	float sum = 0;
	//	do
	//	{
	//		i++;
	//		scanf_s("%f", &rain[i]);
	//	
	//	} while (rain[i] != -1);
	//	int raindays = 0;
	//	for (int j = 0; j < i; j++)
	//	{
	//		sum += rain[j];
	//		if (rain[j] != 0)
	//			raindays++;
	//	}
	//	float ave_rain = sum / raindays;

	//	for (int m = 0; m < i; m++)
	//		printf("%f,", rain[m]);
	//	putchar('\n');

	//	if (sum == 0)
	//		printf("No rain.");
	//	else
	//		printf("Raindays %d, average rainfall %f.", raindays, ave_rain);


	//	return 0;
	//}

//6向量相加

//#include<stdio.h>
//
//int main()
//{
//	int vec_1[5], vec_2[5];
//	for (int i = 0; i < 5; i++)
//		scanf_s("%d", &vec_1[i]);
//	for (int i = 0; i < 5; i++)
//		scanf_s("%d", &vec_2[i]);
//	for (int i = 0; i < 5; i++)
//		printf("%d", vec_1[i] + vec_2[i]);
//	return 0;
//}



//7选择排序
//
//#include<stdio.h>
//#include<assert.h>
//
//void SelectedSortInt(int*, int sz);
//
//void SelectedSortInt(int* nums, int n) {
//	for (int i = 0; i <= n - 2; i++) {
//		//find minimum idx
//		//�������
//
//
//		int min = *(nums + i);
//		int idx=i;
//		for (int j = i; j < n; j++)
//		{
//			if (*(nums + j) < min)
//			{
//				idx = j;
//				min = *(nums + j);
//			}
//
//		}
//		//swap
//		if (i != idx) {
//			int temp = nums[i];
//			nums[i] = nums[idx];
//			nums[idx] = temp;
//		}
//	}
//}
//
//int main() {
//	int a[10] = { 1,3,7,2,6,8,10,15,9,18 };
//	int expected[10] = { 1,2,3,6,7,8,9,10,15,18 };
//
//	int n = sizeof(a) / sizeof(int);
//	SelectedSortInt(a, n);
//
//	for (int i = 0; i < n; i++)
//		assert(a[i] == expected[i]);
//
//	return 0;
//}

//8选择排序_callback

// #include<stdio.h>
// #include<assert.h>

// int cmp_inc(int a, int b);
// void SelectedSortInt(int* nums, int n, int (*fcmp)(int, int)) {
// 	for (int i = 0; i <= n - 2; i++) {
// 		//find minimum idx
// 		//		int min = *(nums + i);
// 		//int idx=i;
// 		//for (int j = i; j < n; j++)
// 		//{
// 		//	if (*(nums + j) < min)		
// 		//	{
// 		//		idx = j;
// 		//		min = *(nums + j);
// 		//	}

// 		//}

// 		int min = *(nums + i);
// 		int idx = i;

// 		for (int j = i; j < n; j++)
// 		{
// 			if (fcmp(min, *(nums + j) )> 0)
// 			{
				
// 				idx = j;
// 				min = *(nums + j);
// 			}
// 		}
	
// 		//swap
// 	if (i != idx)
// 	{
// 			int temp = nums[i];
// 			nums[i] = nums[idx];
// 			nums[idx] = temp;
// 	}
// 	}

// }


// int cmp_inc(int a, int b) {
// 	return a - b;
// }

// int cmp_desc(int a, int b) {
// 	return -(a - b);
// }

// int main() {
// 	int a[10] = { 1,3,7,2,6,8,10,15,9,18 };
// 	int expected[10] = { 1,2,3,6,7,8,9,10,15,18 };

// 	int n = sizeof(a) / sizeof(int);
// 	SelectedSortInt(a, n, cmp_inc);
// 	for (int i = 0; i < n; i++)
// 		//assert(a[i]==expected[i]);
// 		printf("%4d", a[i]);

// 	return 0;
// }

//9最大公约数(greatest common divisor)

// #include <stdio.h>
// #include <stdlib.h>

// //递归
// int res=0;
// int remain=0;
// int gcd_recursive(int a, int b) 
// {
	
// 	printf("call: gcd_recursive(%d,%d)\n", a, b);
// 	if(b!=0)
// 	{
// 		int a_mod=a;
// 		int b_mod=b;//加入两个参量传递原始a，b的值，避免下面printf时有修改
// 		remain=a%b;
// 		a_mod=b;
// 		b_mod=remain;
// 		gcd_recursive(a_mod,b_mod);//递归所起作用类似循环		
// 	}
// 	else
// 	{
// 		res=a;
// 	}
			

// 	printf("gcd_recursive(%d,%d) return:%d\n", a, b, res);




// 	return res;
// }

// //循环
// int gcd_loop(int a, int b) 
// {

	
// 	int remain=0;
// 	while (a%b!=0) 
// 	{
// 		remain=a%b;
// 		a=b;
// 		b=remain;

// 		printf("loop:(%d,%d)\n", a, b);
// 	}
// 	printf("loop:(%d,0)\n", b);
// 	return b;
// }

// int main(int argc, char* argv[]) {
// 	int a, b;
// 	scanf("%d %d", &a, &b);
// 	gcd_loop(a, b);
// 	gcd_recursive(a, b);
// 	return 0;
// }



//10malloc_free


// #include<stdio.h>
// #include<stdlib.h>

// int main() {
//     int m=3,n=4;
// 	int *q = malloc(m * n * sizeof(int)); // 分配动态内存


//     // void *t = NULL; // t未被使用，因此初始化为NULL


//     int (*p)[n] = (int (*)[n])q; // 将q强制转换为二维数组指针
//     int i, j;
//     for (i=0;i<m*n;i++) 
//         q[i] = i+1;
//     for (i=0;i<m;i++) 
// 	{
//         for (j=0;j<n;j++)
//             printf("%4d",p[i][j]);
//         printf("\n");
//     }  
//     free(q);  
// }

//11三阶矩阵计算行列式
// #include<stdio.h>

// int main()
// {
// 	int matrix[3][3];
// 	for(int i=0;i<3;i++)
// 		for(int j=0;j<3;j++)
// 			scanf("%d",&matrix[i][j]);
// 	int sum=matrix[0][0]*matrix[1][1]*matrix[2][2]+
// matrix[1][2]*matrix[0][1]*matrix[2][0]+
// matrix[1][0]*matrix[2][1]*matrix[0][2]-
// matrix[2][0]*matrix[1][1]*matrix[0][2]-
// matrix[1][2]*matrix[2][1]*matrix[0][0]-
// matrix[1][0]*matrix[0][1]*matrix[2][2];
// printf("%d\n",sum);
// 	return 0;
// }


//12价格计算

// #include<stdio.h>

// int main()
// {
// 	float a[3][2];
// 	float sum=0;

// 	for(int i=0;i<3;i++)
// 	{
// 		float pre =0;
// 		for(int j=0;j<2;j++)
// 			{
// 				scanf("%f",&a[i][j]);
				
// 			}
// 		pre=a[i][0]*a[i][1];
// 		sum+=pre;
// 	}
// 	printf("%0.2f",sum);

	

// 	return 0;
// }

//13已知体积求表面积



// #include<stdio.h>
// #include<math.h>

// int main()
// {
// 	printf("%lf",M_PI);
// 	return 0;
// }
//c中用M_PI代表pi值

// #define PI acos(-1)

// int main()
// {
// 	double V;
// 	scanf("%lf",&V);
// 	// printf("%f",PI);


// 	double R=pow((3*V)/(4*PI),1.0 / 3);
// 	// printf("%f",PI);
	
// 	double S=4*PI*R*R;
// 	printf("%.2lf\n",S);


// 	return 0;
// }
//linux编译时直接在终端输入gcc 100.c -lm -o 100
//这题取3.14为pi的值，不准确


// #include <stdio.h>
// #include <math.h>

// #define PI 3.14

// int main() {
//     double V;
//     scanf("%lf", &V);

//     // 计算球的半径 R
//     double R = pow((3 * V) / (4 * PI), 1.0 / 3);

//     // 计算球的表面积 S
//     double S = 4 * PI * R * R;

//     // 输出表面积 S，保留两位小数
//     printf("%.2lf\n", S);

//     return 0;
// }


//二次函数分类讨论

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// 	float a,b,c;
// 	float x=0;
// 	scanf("%f",&a);
// 	scanf("%f",&b);
// 	scanf("%f",&c);

// 	float del=b*b-4*a*c;
// 	if(a==0)
// 	{
// 		x=-c/b;
// 		if(x<=0||x>15)
// 			printf("You are looking for trouble, aren't you?");
// 		else
// 			printf("%.3f",x);
// 	}
// 	else if(del<0)
// 		printf("You are looking for trouble, aren't you?");
// 	else
// 	{
// 		x=(-b+pow(del,1.0/2))/(2*a);
// 		float x2=(-b-pow(del,1.0/2))/(2*a);
// 		if((x<=0||x>15)&&(x2<=0||x2>15))
// 			{
// 				printf("You are looking for trouble, aren't you?");
// 			}
// 		else if((x>0||x<=15)&&(x2<=0||x2>15))
// 			printf("%.3f",x);
// 		else if((x2>0||x2<=15)&&(x<=0||x>15))
// 			printf("%.3f",x2);
		
// 		else
// 			printf("%.3f",x);		
// 	}


// 	return 0;
// }

//16正方形与圆形面积

// #include<stdio.h>
// #include<math.h>

// int main()
// {
// 	double l=0,r=0;
// 	scanf("%lf",&l);
// 	scanf("%lf",&r);
// 	double S1=l*l;
// 	double S2=3.14*r*r;
// 	printf("the area of the square is %.2lf\n",S1);
// 	// printf("the area of the circle is %.5f\n",M_PI*r*r);
// 		printf("the area of the circle is %.5lf\n",S2);
// 	return 0;
// }
//用double保持高精度，避免小数位出错

//16

// #include<stdio.h>
// #include<math.h>

// int main()
// {
// 	double l=0,r=0;
// 	scanf("%lf",&l);
// 	scanf("%lf",&r);
// 	double S1=l*l;
// 	double S2=3.14*r*r;
// 	printf("the area of the square is %014.6lf\n",S1);
// 	// printf("the area of the circle is %.5f\n",M_PI*r*r);
// 	printf("the area of the circle is %014.6lf\n",S2);
// 	return 0;
// }



//17

// #include<stdio.h>
// #include<math.h>

// int main()
// {
// 	double l=0,r=0;
// 	scanf("%lf",&l);
// 	scanf("%lf",&r);
// 	double S1=l*l;
// 	double S2=3.14*r*r;
// 	printf("the area of the square is %014.3lf\n",S1);
// 	// printf("the area of the circle is %.5f\n",M_PI*r*r);
// 		printf("the area of the circle is %014.5lf\n",S2);
// 	return 0;
// }
//%014.3f确保输出字符长度为14,小数点后为3位，前面加入先导0


//18按位亦或

// #include<stdio.h>

// int main()
// {
// 	int a,b;
// 	scanf("%d",&a);
// 	scanf("%d",&b);
// 	printf("%d\n%d\n%d\n%d\n",a+b,a-b,a|b,a&b);
// 	return 0;
// }

//19判断是否为偶数

// #include<stdio.h>
// int main()
// {
// 	int a;
// 	scanf("%d",&a);
// 	if(a%2==0)
// 		printf("0");
// 	else
// 		printf("1");
// 	return 0;
// }


//20鸡兔同笼

// #include<stdio.h>
// int main()
// {
// 	int x,y;
// 	scanf("%d",&y);
// 	scanf("%d",&x);
// 	printf("%d ",(y-2*x)/2);
// 	printf("%d\n",2*x-y/2);
	
// 	return 0;
// }

//21给定函数和x，求y

// #include<stdio.h>
// #include<math.h>

// int main()
// {
// 	double x;
// 	scanf("%lf",&x);
// 	// printf("%.2lf\n",fabs(x));
// 	if(fabs(x)<10)
// 		printf("%.2lf\n",23+6.5*x*x);
// 	else 
// 		printf("%.2lf\n",fabs(x)+0.5);
// 	return 0;
// }
//abs()求绝对值
//abs（int）
//fabs（double）

//22求逆序数

// #include<stdio.h>

// int main()
// {
// 	int num;
// 	scanf("%d",&num);
// 	int num_s[5];
// 	int i=0;
// 	for(i=4;i>=0;i--)
// 	{
// 		num_s[i]=num%10;
// 		num/=10;
// 		if(num==0)
// 			break;
// 	}
// 	int ps=5-i;
// 	printf("%d\n",ps);
// 	for(int j=i;j<5;j++)
// 		printf("%d ",num_s[j]);
// 	putchar('\n');

// 	int j=0;
// 	for(j=4;j>=i;j--)
// 		if(num_s[j]!=0)
// 			break;
// 	//排除前面为0的项

// 	for(;j>=i;j--)
// 		printf("%d",num_s[j]);
// 	//未考虑0在前面


// 	putchar('\n');
// 	return 0;
// }

//23判断该日期是从当年的1月1日算起的第几天

// #include<stdio.h>

// int main()
// {
// 	int year,month,day;
// 	scanf("%d",&year);
// 	scanf("%d",&month);
// 	scanf("%d",&day);
// 	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
// 	if((year%4==0&&year%100!=0)||(year%400==0))
// 		mon[1]=29;

// 	int days=0;
// 	for(int i=0;i<month-1;i++)
// 		days+=mon[i];
// 	days+=day;
// 	printf("%d\n",days);
// 	return 0;
// }

//24给定一个整数x，判断x是否分别能被2，3，5整除

// #include<stdio.h>

// int div_2(int x)
// {
// 	if (x % 2 == 0)
// 		return 1;
// 	else
// 		return 0;
// }
// int div_3(int x)
// {
// 	if (x % 3 == 0)
// 		return 2;
// 	else
// 		return 0;
// }
// int div_5(int x)
// {
// 	if (x % 5 == 0)
// 		return 4;
// 	else
// 		return 0;
// }

// int main()
// {
// 	int x;
// 	scanf("%d", &x);
// 	int sum = 0;
// 	sum = div_2(x) + div_3(x) + div_5(x);
// 	switch(sum)
// 	{
// 	case 0:
// 		printf("0");
// 		break;
// 	case 1:
// 		printf("1");
// 		break;
// 	case 2:
// 		printf("2");
// 		break;
// 	case 4:
// 		printf("3");
// 		break;
// 	case 3:
// 		printf("4");
// 		break;
// 	case 5:
// 		printf("5");
// 		break;
// 	case 6:
// 		printf("6");
// 		break;
// 	case 7:
// 		printf("7");
// 		break;


// 	}
// 	return 0;
// }

//25求方程 ax 2+bx+c=0 的实数解


// #include<stdio.h>
// #include<math.h>
// int main()
// {
// 	float a,b,c;
// 	float x=0;
// 	scanf("%f",&a);
// 	scanf("%f",&b);
// 	scanf("%f",&c);

// 	float del=b*b-4*a*c;
// 	if(a==0)
// 	{
// 		x=-c/b;
// 		printf("%.2f",x);
// 	}
// 	else if(del<0)
// 		printf("None");
// 	else if(del==0)
// 		printf("%.2f",(-b+pow(del,1.0/2))/(2*a));
// 	else
// 	{
// 		x=(-b+pow(del,1.0/2))/(2*a);
// 		float x2=(-b-pow(del,1.0/2))/(2*a);
// 		if(x>x2)
// 		{
// 		printf("%.2f ",x2);
// 		printf("%.2f",x);			
// 		}
// 		else 
// 		{
// 		printf("%.2f ",x);
// 		printf("%.2f",x2);			
// 		}

		
// 		putchar('\n');
					
// 	}


// 	return 0;
// }

//26电费计算

// #include<stdio.h>

// int main()
// {
// 	int mon,ele;
// 	scanf("%d",&mon);
// 	scanf("%d",&ele);
// 	double sum=0;
// 	if(mon<=10&&mon>=5)
// 	{
// 		if(ele<=260)
// 			sum=0.5921*ele;
// 		else if(ele>260&&ele<=600)
// 			sum=260*0.5921+(ele-260)*0.6421;
// 		else
// 		 	sum=260*0.5921+340*0.6421+(ele-600)*0.8921;
// 	}
// 	else
// 	{
// 		if(ele<=200)
// 			sum=0.5921*ele;
// 		else if(ele>200&&ele<=400)
// 			sum=200*0.5921+(ele-200)*0.6421;
// 		else
// 		 	sum=200*0.5921+200*0.6421+(ele-400)*0.8921;
// 	}
// 	printf("%.4lf\n",sum);
// 	return 0;
// }

//27以下三角矩阵的形式输出nn乘法表

// #include<stdio.h>

// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	for(int i=1;i<=n;i++)
// 	{
// 		for(int j=1;j<=i;j++)
// 			printf("%d*%d=%d\t",i,j,i*j);
// 		putchar('\n');
// 	}	
		
// 	return 0;
// }

//28判断三条边是否能构成三角形,并求面积

// #include<stdio.h>
// #include<math.h>

// double triangle(int a, int b, int c)
// {
// 	if(a+b>c&&a+c>b&&b+c>a)
// 	{
// 		double p=(a+b+c)/2.0;
// 		//2.0保证结果为浮点数，用2的话会使结果为整型
// 		double S=pow(p*(p-a)*(p-b)*(p-c),1.0/2);
// 		return S;
// 	}	
// 	else
// 		return 0;
// }

// int main(){
// 	int a,b,c;
// 	scanf("%d %d %d", &a, &b, &c);
// 	double S = triangle(a,b,c);
// 	printf("%.4lf",S);
// 	return 0;
// }
