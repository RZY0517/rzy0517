//依附于Fli.h(Function Library).

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


//#include<stdio.h>//例7.7 用递归方法求n!。若所求>13的阶乘结果，可以修改为float或double类型。
//#include<Windows.h>
//#include<Fli.h>
//int main() {
//	int t,s;
//	printf("Input an integer number:\n");
//	scanf_s("%d", &t);
//	s = fac(t);
//	printf("%d!=%d\n", t, s);
//	system("pause");
//	return 0;
//}

//例7.7.1求1到的和，用函数递归方法。
//#include<stdio.h>
//#include<Windows.h>
//#include<Fli.h>
//int main()
//{
//	int n, F;
//	printf("Please one number:\n");
//	scanf_s("%d", &n);
//	F = addn(n);
//	printf("1-%d之和为：%d\n", n, F);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<Windows.h>                         //Hanoi塔算法     盘子挪动问题
//void hanoi(int i, char A, char B, char C);
//void move(char x, char y);
//int main(void)
// {
//	int n;
//	printf("请输入n的值：");
//	scanf_s("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	system("pause");
//	return 0;
// }
// void hanoi(int i, char A, char B, char C)
// {
//	 void move(char x, char y);
//	 if (i == 1)
//		 move(A, C);
//	 else
//		 {
//		         hanoi(i - 1, A, C, B);   //函数递归调用
//		         move(A, C);
//		         hanoi(i - 1, B, A, C);
//		 }
//	 }
// void move(char x, char y)
// {
//	     printf("%c ——> %c \n",x, y);
// }


//指针※※※

//1.通过指针变量访问整型变量
#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 100, b = 200,c=3,d=4,e=5;
	int *P1 = &a, *P2 = &b,*P3,*P4,*P5=&b;
	P3 = &c;
	P4 = &d;
	*P5 = e;//上面的*P5只是初始化他而已，不影响后面操作。
	//P1 = &a;
	//P2 = &b;
	//printf("%o", P1);//输出指针变量P1的值，因为P1指向了a,就是输出了a的地址，即&a；
	//*P1!=&a;因为a的地址是赋给指针变量P1,而不是赋给*P1（即变量a）；
	printf("a=%d,b=%d,c=%d,d=%d\n", a, b,c,d);
	printf("*P1=%d,*P2=%d\n", *P1, *P2);
	printf("*P3=%d,*P4=%d\n", *P3, *P4);
	*P1 = 9;//这时将整数9赋给P1当前所指向的变量（a），因上面P1指向a,所以相当于把9赋值给a，即a=1；
	printf("*P1=%d,a=%d\n", *P1,a);
	printf("*P5=%d\n", *P5);
	
	//printf("P1=%d,P2=%d\n", P1, P2);//输出P1（a地址）P2（b地址）的地址信息。

	system("pause");
	return 0;


}






