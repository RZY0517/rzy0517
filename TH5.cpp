//7.2----------------输入两个整数，要求输出其中值较大者。要求用函数来找到大数。
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int MAX(int x, int y);
//	int a,b,z;
//	printf("Please enter two numbers\n");
//	scanf_s("%d %d", &a, &b);
//	z= MAX(a, b);
//	printf("max=%d\n", z);
//	system("pause");
//	return 0;
//}
//int MAX(int x, int y)
//{
//	int c;
//	c = x > y ? x : y;
//	return c;
//}



//#include<stdio.h>
//#include<Windows.h>
//#include<test1.h>    //test1头文件中包含了MAX函数和ppp函数
//int main() {
//	//int MAX(int x, int y);
//	int a, b, z;
//	printf("Please enter two numbers:\n");
//	scanf_s("%d %d", &a, &b);
//	z = MAX(a, b);
//	printf("MAX=%d\n", z);
//	ppp();
//	system("pause");
//	return 0;
//}



//例7.4----------------输入两个实数，用一个函数求出他们之和。

//#include<stdio.h>
//#include<Windows.h>
//#include<test1.h>
//int main() {
//	float ad = 0;
//	float a, b;
//	printf("Please enter two numbers\n");
//	scanf_s("%f %f", &a, &b);
//	ad = add(a, b);
//	printf("%.2f+%.2f=%.2f", a, b, ad);
//	 
//	system("pause");
//	return 0;
//}


//例7.5----------------输入四个数，找出最大的数。利用函数的嵌套来实现。
//#include<stdio.h>
//#include<Windows.h>
//#include<test1.h>
//int main()
//{
//	int a, b, c, d, e, MAX;
//	printf("Please enter five numbers\n");
//	scanf_s("%d %d %d %d %d", &a, &b, &c, &d,&e);
//	MAX = MAX5(a, b, c, d,e);
//	printf("max=%d\n", MAX);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>//例7.6函数的递归调用
//#include<Windows.h>//第5个学生比第4个学生大2岁，第4个学生比第3个学生大2岁……第2个学生比第1个学生大2对，第1个学生10岁。
//#include<test1.h>//若要知道第5个学生多少岁，需要先回溯到第1个学生，然后由第1个学生递推到第5个学生。
//
//int main()
//{
//	int n,s;
//	printf("你想知道第几个学生的年龄？(1-5)\n");
//	scanf_s("%d", &n);
//	s = age(n);
//	printf("第%d个学生的年龄为%d\n", n, s);
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<Windows.h>
#include<test1.h>
int main() {
	int t,s;
	printf("Input an integer number:\n");
	scanf_s("%d", &t);
	s = fac(t);
	printf("%d!=%d\n", t, s);
	system("pause");
	return 0;
}















