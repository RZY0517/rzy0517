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
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int a = 100, b = 200,c=3,d=4,e=5;
//	int *P1 = &a, *P2 = &b,*P3,*P4,*P5=&b;
//	P3 = &c;
//	P4 = &d;
//	*P5 = e;//上面的*P5只是初始化他而已，不影响后面操作。
//	//P1 = &a;
//	//P2 = &b;
//	//printf("%o", P1);//输出指针变量P1的值，因为P1指向了a,就是输出了a的地址，即&a；
//	//*P1!=&a;因为a的地址是赋给指针变量P1,而不是赋给*P1（即变量a）；
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b,c,d);
//	printf("*P1=%d,*P2=%d\n", *P1, *P2);
//	printf("*P3=%d,*P4=%d\n", *P3, *P4);
//	*P1 = 9;//这时将整数9赋给P1当前所指向的变量（a），因上面P1指向a,所以相当于把9赋值给a，即a=1；
//	printf("*P1=%d,a=%d\n", *P1,a);
//	printf("*P5=%d\n", *P5);
//	
//	//printf("P1=%d,P2=%d\n", P1, P2);//输出P1（a地址）P2（b地址）的地址信息。
//
//	system("pause");
//	return 0;
//}


//#include<stdio.h>           //交换两个值，使得P1是最大值，P2是最小数
//#include<Windows.h>
//int main() {
//	int  a, b;
//	int *p1, *p2, *p;
//	printf("Please enter two interger numbers:\n");
//	scanf_s("%d %d", &a, &b);
//	p1 = &a;
//	p2 = &b;
//	if (a < b)
//	{
//		p = p1;
//		p1 = p2;
//		p2 = p;
//	}
//	printf("a=%d,b=%d\n", a, b);
//	printf("max=%d,min=%d\n", *p1, *p2);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<Windows.h>            
//int main() {
//	int  a, b;
//	int *p1=&a, *p2=&b, *p;
//	printf("Please enter two interger numbers:\n");
//	scanf_s("%d %d", &a, &b);
//	
//	if (a < b)
//	{
//		p1 = &b;
//		p2 = &a;
//	}
//	printf("a=%d,b=%d\n", a, b);
//	printf("max=%d,min=%d\n", *p1, *p2);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<Windows.h>
//#include<Fli.h>
//int main() {
//	int a, b;
//	int *P1=&a, *P2=&b;
//	printf("Please enter two numbers\n");
//	scanf_s("%d %d", &a, &b);
//	if (a < b)
//	{
//		swap(P1, P2);//不明白swap(int *a, int *b)里面是指针型*a，*b，而这里为什么不能填写*P1，*P2
//	}
//	printf("max=%d,min=%d\n", a, b);
//	//printf("*P1=%d,P1=%d", *P1, P1);//P1只是指门牌号，*P1则是指门牌号里的人
//	system("pause");
//	return 0;
//}

//#include<stdio.h>          //同上
//#include<Windows.h> 
//int main()
//{
//	void swap(int *P1, int *P2);
//	int a, b;
//	int *P_1 = &a, *P_2 = &b;
//	printf("Please enter two numbers:\n");
//	scanf_s("%d %d", &a, &b);
//	if (a < b)
//	{
//		swap(P_1, P_2);//P_1指向a的地址和P_2指向b的地址进行对调；
//					   //对调完成之后就是P_1指向b的内容，P_1指向a的内容 
//	}
//	printf("max=%d,min=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//void swap(int *P1, int *P2)//为了改变a和b的值，要求保留a和b最后变化的结果
//{
//	int temp;
//	temp = *P1;
//	*P1 = *P2;
//	*P2 = temp;
//}

//第二遍
//例8.1  通过指针变量访问整型变量
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a = 100, b = 10;
//	int *p1, *p2;                            //p1,p2还是门牌号，*p1，*p2是房间里的旅客
//                                           //*，表示指向，*p1表示“指针变量p1所指向的变量”，也就是变量a
//	p1 = &a;                                 //把变量a的地址，赋给指针变量p1
//	p2 = &b;                                 //把变量b的地址，赋给指针变量p2
//	printf("a=%d,b=%d\n", a, b);             //输出变量a,b的值
//	printf("*p1=%d,*p2=%d\n", *p1, *p2);     //输出变量a,b的值，这是*p1，*p2代表的a，b的值（*p1，*p2是指针变量，代表的ab的值）
//	printf("p1=%d,p2=%d\n", p1, p2);       //输出a，b的地址，没有带*，所以这是代表的指针（地址），而不是指针变量。
//
//	system("pause");
//	return 0;
//}


//例8.2   输入a,b两个整数，按先后大小的顺序，输出a和b
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int *p1, *p2, *p, a, b;
//	printf("Please enter two numbers:\n");
//	scanf_s("%d%d", &a, &b);
//	p1 = &a;
//	p2 = &b;
//	if (a < b)
//	{
//		//p = p1;
//		//p1 = p2;        //把所指向的地址进行交换
//		//p2 = p;
//		p1 = &b;
//		p2 = &a;
//	}
//	printf("a=%d,b=%d\n", a, b);
//	printf("max=%d,min=%d\n", *p1, *p2);//所指向的地址变了，也就所指向的值变了。
//
//	system("pause");
//	return 0;
//}


//例8.3  输入a,b两个整数，按先后大小的顺序，输出a和b，（实现方式：用指针变量作为函数参数）   To 丹
#include<stdio.h>
#include<Windows.h>
#include<Fli.h>   //自己写的头文件（自己定义的函数都在这个头文件里，不用声明，直接用即可）
int main() {
	int a, b;
	int *point1, *point2;    //有变量a,b，所以定义两个指针变量来存放a和b
	printf("Please enter two numbers:\n");
	scanf_s("%d%d", &a, &b);
	point1 = &a;            //point1指向a（指针存放a的地址）
	point2 = &b;            //point2指向b（指针存放b的地址）
	if (a < b)
		swap(point1, point2);    //如果a<b，就执行swap函数
	printf("max=%d,min=%d\n", a, b);

	system("pause");
	return 0;
}


////例8.5 输入三个数，按顺序由大到小输出，用函数实现。
//#include<stdio.h>
//#include<Windows.h>
//#include<Fli.h>
//int main() {
//	int a, b, c, *p1, *p2, *p3;
//	printf("Please enter three numbers:\n");
//	scanf_s("%d%d%d", &a, &b, &c);
//
//	p1 = &a;p2 = &b; p3 = &c;	
//	exchange(p1, p2, p3);
//	printf("The order is:%d,%d,%d\n", a, b, c);
//
//	system("pause");
//	return 0;
//
//}
















