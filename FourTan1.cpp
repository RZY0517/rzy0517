//一、

//#include<Windows.h>
//#include<stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//	system("pause");
//	return 0;
//}

//二、

//   比较大小
//#include<Windows.h>
//#include<stdio.h>
//#include<math.h>
//
//int mx(int a, int b);                          /*函数说明*/
//int main()                                     /*主函数*/
//{
//	int x, y, z;                               /*变量说明*/
//	int mx(int a, int b);                      /*函数说明*/
//	
//	printf("Input two numbers:\n");
//	scanf_s("%d%d", &x, &y);                   /*输入 x,y 值*/
//	z = mx(x, y);                              /*调用 max 函数*/
//	printf("maxmum=%d\n", z);                  /*输出*/
//	system("pause");
//	return 0;
//}
//
//int mx(int a, int b)                           /*定义 max 函数*/
//{
//	if (a > b) 
//		return a; 
//	else 
//		return b;                             /*把结果返回主调函数*/
//}
//int mm(int a, int b)
//{
//
//	if (a > b) return a; else return b;
//}
//int main()
//{
//	int x, y, z;
//	int mm(int a, int b);
//	printf("input two numbers:\n");
//	scanf_s("%d%d", &x, &y);
//	z = mm(x, y);
//	printf("maxnum=%d\n", z);
//	system("pause");
//	return 0;
//}


//三、

//#include<Windows.h>
//#include<stdio.h>
//#include<math.h>
//::max(int a, int b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//main()
//{
//	int x, y, z;
//	::max(int a, int b);
//	printf("input two numbers:\n");
//	scanf_s("%d%d", &x, &y);
//	z = ::max(x, y);
//	printf("maxnum=%d\n", z);
//	system("pause");
//	return 0;
//}

//四、

//求1-½+⅓-¼+···+1/99-1/100。

/*#include<stdio.h>
#include<Windows.h>
int main()
{
	int  sigh=1, sum=1, deno=2;
	int  term;
	printf("Please enter the sum of the numbers \n");
	scanf_s("%d", &deno);
	sigh = (-1)*sigh;
	term = sigh * (1 / deno);
	term = sum + term;
	deno = deno + 1;
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}*/


//五、

/*
#include<Windows.h>
#include<stdio.h>
int main()
{
	float sum, hao, sec;
	sum = 1;
	hao = 1;
	sec = 2;
	hao = (-1)*hao;
	sec = hao * (1 / sec);
	sum = sum + sec;
	printf("1-1/2+1/3=%f\n", sum);
	system("pause");
	return 0;
}
*/

//六、

/*                     //2021年12月21日
//求1*2*3*4*5的结果
#include<Windows.h>
#include<stdio.h>
int main()
{
	int t = 1;
	int i = 2;
	{
	int s = 0;
	for (i = 1; i<6; i++)
		t = t * i;
	}
	s = t * i;
	printf("s=%d\n", s);
	system("pause");
	return 0;
}

*/

//七、

////求1*3*5*7*9*11的结果
//#include<Windows.h>
//#include<stdio.h>
//int main()
//{
//	int t = 1;
//	int i = 3;
//	int s = 0;
//	for (i = 1; i < 11; i += 2)
//	{
//		t = t * i;
//		
//	}
//	s = t * i;
//	printf("s=%d\n", s);
//	system("pause");
//	return 0;
//}

//八、

////判定 2000 — 2500 年中的每一年是否闰年，将结果输出。
////1) 能被 4 整除，但不能被 100 整除的年份；
////2) 能被 100 整除，又能被 400 整除的年份；
//#include<Windows.h>
//#include<stdio.h>
//int main() 
//{
//	int y = 2000;
//	for (y = 2000; y <= 2050; y++)
//	{
//		if ((y % 100 == 0 && y % 400 == 0)|| (y % 4 == 0 && y % 100 != 0))
//			printf("%d是闰年\n", y);
//		else
//			printf("%d不是闰年\n", y);
//		
//	}
//	system("pause");
//	return 0;
//
//
//}

//九、

//#include<Windows.h>
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int m;//输入的整数
//	int i;//循环次数
//	int k;//m的平方根
//
//	printf("输入一个整数：\n");
//	scanf_s("%d", &m);
//
//	//求平方根，注意sqrt（）的参数为double类型，
//	//这里要强制转换m的类型
//	k = (int)sqrt((double)m);
//	for (i = 2; i <= k; i++)
//		if (m%i == 0)
//			break;
//	
//	//如果完成所有循环，那么m为素数
//	//注意最后一次循环，会执行i++,此时i=k+1,所以有i>k
//	if (i > k)
//		printf("%d是素数\n", m);
//	else
//		printf("%d不是素数\n", m);
//
//	system("pause");
//	return 0;
//
//}

//十

//#include<Windows.h>
//#include<stdio.h>             
//#include<math.h>
//int main()
//{
//	int a = 0;//素数的个数
//	int num = 0;//输入的整数
//
//	printf("输入一个整数：");
//	scanf_s("%d", &num);
//
//	for (int i = 2; i < num; i++)
//	{
//		if (num%i == 0) {
//			a++;   //素数个数加1
//		}
//	}
//
//	if (a == 0) 
//	{
//		printf("%d是素数。\n", num);
//	}
//	else
//	{
//		printf("%d不是素数。\n",num);
//	}
//	system("pause");
//	return 0;
//}




//十一


//#include<Windows.h>
//#include<stdio.h>
//#define PAI 3.14
//int main()
//{
//	double R;       //半径
//	double S;       //面积
//	printf("请输入圆的半径\n");
//	scanf_s("%lf", &R);
//	S = PAI * R*R;
//	printf("圆的面积为：%.2lf\n", S);
//	system("pause");
//	return 0;
//}


//十二

//#include<Windows.h>
//#include<stdio.h>
//int main()
//{
//	char Char1;
//	char Char2;
//	int Int1;
//	int Int2;
//
//	Char1 = 'a';
//	Char2 = 97;
//	Int1 = 'a';
//	Int2 = 97;
//
//	printf("%c\n", Char1);
//	printf("%d\n", Char2);
//	printf("%c\n", Int1);
//	printf("%d\n", Int2);
//	system("pause");
//	return 0;
//}


//十三   Auto变量（省略） Static静态变量

//#include<Windows.h>
//#include<stdio.h>
//void AddOne()
//{
//	static int Int = 1;
//	Int = Int + 1;
//	printf("%d\n", Int);
//}
//int main()
//{
//	printf("第一次调用：\n");
//	AddOne();
//	printf("第二次调用：\n");//因静态变量Int，保持了上一次的结果，所以再运行AddOne函数时，即2+1
//	AddOne();
//	system("pause");
//
//	return 0;
//}


//十四  使用register变量修饰整型变量

//#include<Windows.h>
//#include<stdio.h>
//int main()
//{
//	register int Int;
//	Int = 100;
//	printf("%d\n", Int);
//	system("pause");
//	return 0;
//}


//十五  extern变量

//#include<Windows.h>
//#include<stdio.h>
//int main()
//{ 
//	extern int iExtern;
//	printf("%d\n", iExtern);    //依赖于Second_back.cpp文件的iExtern变量
//	system("pause");
//	return 0;
//}

//十六  混合运算

//#include<Windows.h>
//#include<stdio.h>
//int main()
//{
//	int Int = 1;
//	char Char = 'A';
//	float Float = 2.2f;
//
//	double result = Int + Char + Float;
//	printf("%.3f\n", result);
//	system("pause");
//	return 0;
//}


//十七   练习题

//字符变量输出Fine Day
//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	char Fine[] = {"Fine Day!"};
//	printf("%s", Fine);
//	system("pause");
//	return 0;
//}

//在自定义函数中，使用static静态局部整型变量，计算3的立方值。
//#include<Windows.h>
//#include<stdio.h>
//#include<math.h>
//int main() {
//	void aaa();
//	for (int i = 0; i < 3; i++) {
//		aaa();
//	}
//	system("pause");
//	return 0;
//}
//void aaa() {
//	static int a = 1;
//	static int x = 1;
//	a = a * 3;
//	
//	if(x==3){
//		printf("3的%d次方等于%d\n",x,a);
//	}
//	x++;
//}


//Static的作用

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int i = 0;
//	void fun();                        //声明fun()函数
//	for (i = 0; i < 3; i++) {       //for循环，循环3次
//		fun();
//	}//执行3次fun()函数
//	system("pause");
//	return 0;
//}
//void fun() 
//{
//	 int x = 0;            //定义x=0;
//	static int static_i = 0;             //定义static_i=0;
//	printf("x=%d\n", x);                 //打印输出x
//	printf("static_i=%d\n", static_i);   //打印输出static_i;
//	x++;                                 //x=x++;
//	static_i++;                          //static_i=static_i++;
//	printf("********x=%d\n", x);
//}



//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	extern char SS[];
//	printf("%s\n", SS);
//	system("pause");
//	return 0;
//}



//十八、表达式的作用

//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	int num1, num2, num3;
//	num1 = 3;
//	num2 = 7;
//	printf("the first number is:%d\n", num1);
//	printf("the second number is:%d\n", num2);
//
//	num3 = num1 + 10;
//	printf("the first add 10 is:%d\n", num3);
//	num3 = num2 + 10;
//	printf("the second numadd 10 is:%d\n", num3);
//
//	num3 = num1 + num2;
//	printf("the result number of first add second is:%d\n", num3);
//
//	system("pause");
//	return 0;
//}


//#include<Windows.h>
//#include<stdio.h>
//#define constaon 5
//int main() {
//	int a = 1 + 2;
//	int b = constaon + 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	system("pause");
//	return 0;
//}

//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	char Char;
//	short int Short;
//	int Int;
//	float Float = 70000;
//
//	Char = (char)Float;
//	Short = (short)Float;
//	Int = (int)Float;
//	printf("the char is %c\n", Char);
//	printf("the Short is %hu\n", Short);    //？？？
//	printf("the Int is %d\n", Int);
//	printf("the float is %f\n", Float);
//
//	system("pause");
//	return 0;
//}


//十九、算术表达式

//华氏温度转化为摄氏温度
//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	double C, F;
//	printf("Please input temperature:\n");
//	scanf_s("%lf", &F);
//	C = 5 * (F - 32) / 9;
//	printf("Temperature is :\n");
//	printf("%.2lf", C);
//	printf("(degress Celsius)\n");
//	system("pause");
//	return 0;
//}

//二十、自增运算符和自减运算符

//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	int num1 = 3;
//	int num2 = 3;
//	int preA = 0;
//	int lastA = 0;
//	int preD = 0;
//	int lastD = 0;
//	int temp;
//	preA = ++num1;
//	lastA = num2++;
//	temp = num2;
//	printf("preA=%d\n", preA);
//	printf("lastA=%d\n", lastA);
//	printf("temp=%d\n", temp);
//	printf("lastA=%d\n", num2++);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int preD, lastD, num1 = 3, num2 = 3;
//	int temp = 0;
//	preD = --num1;
//	lastD = num2--;
//	temp = num2;
//	printf("preD=%d\n", preD);
//	printf("lastD=%d\n", lastD);
//	printf("temp=%d\n", temp);
//	system("pause");
//	return 0;
//
//}

//二十一   优先级与结合性

//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	int iChinese, iEnglish;
//	printf("Enter Chinese score:");
//	scanf_s("%d", &iChinese);
//	printf("\nEnter English score:");
//	scanf_s("%d", &iEnglish);
//
//	if (iChinese > iEnglish)
//	{
//		printf("Chinese is better than English\n");
//	}
//	if (iChinese < iEnglish)
//	{
//		printf("English is better than Chinese\n");
//	}
//	if (iChinese == iEnglish)
//	{
//		printf("Chinese equal English\n");
//	}
//	system("pause");
//	return 0;
//}


//二十二、逗号运算符分隔的表达式

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int V1, V2, V3, result;
//	V1 = 10;
//	V2 = 43;
//	V3 = 26;
//	result = 0;
//	
//	result = V1++, --V2, V3 + 4;
//	printf("the result is:%d\n", result);
//	result = (V1++, --V2, V3 + 4);
//	printf("the result is:%d\n", result);
//	//优先级问题：由于赋值运算符的优先级比逗号运算符的优先级高，因此先执行赋值的运算。
//	//如果要先执行逗号运算，则可以使用括号运算符。
//	system("pause");
//	return 0;
//}

////二十三 使用复合赋值运算符简化赋值运算
//
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int Total, Value, Detail;
//	Total = 100;
//	Value = 50;
//	Detail = 5;
//
//	Value *= Detail;
//	Total += Value;
//	printf("Value=%d\n", Value);
//	printf("Total=%d\n", Total);
//
//	system("pause");
//	return 0;
//}

//二十四 输出函数
//#include<stdio.h>
//#include<Windows.h>      //   %m.n(m表示整数位，n表示小数位）
//int main() {
//	long Long = 100000;
//	printf("the Long is%d\n", Long);
//
//	printf("the string is:%s\n", "LOVE");
//	
//	printf("the string is:%10s\n", "LOVE");
//	//%ms,表示输出字符串占m列，如果字符串本身长度大于m,则突破m的
//	//限制，将字符串全部输出；若字符串长度小于m,则用空格进行左补齐。
//	//如在LOVE之前有6个空格。
//	printf("the string is:%-10s\n", "LOVE");
//	//%-ms，表示如果字符串长度小于m，则在m列范围内，字符串向左靠，右补空格
//
//	printf("the string is:%10.3s\n", "LOVE");
//	//%m.ns,表示输出占m列，但只取字符串左端n个字符，这n个字符输出在m列的右侧，左补齐空格。
//	//结：靠右侧，输出n个字符，左补齐空格
//	printf("the string is:%-10.3s\n", "LOVE");
//	//%-m.ns，其中m、n含义同上，n个字符输出在m列范围内的左侧，右补齐空格，如果n>m,则m
//	//会自动取n值，即保证n个字符正常输出。
//	//结：靠左侧，输出n个字符，右空格。
//	system("pause");
//	return 0;
//}


////二十五   输入函数
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int num1 = 1;
//	int num2 = 2;
//	scanf_s("%d*%d", &num1, &num2);
//	//格式字符*，表示指定的输入项在读入后不赋给相应的变量，
//	//即输入33，但有*的存在，所以num2不被赋予3，而保持原值，只有num1=3；
//	//若想都被赋予3，则可以按照格式（X*X)（3*3）来输入即可。
//	printf("num1=%d\n", num1);
//	printf("num2=%d\n", num2);
//
//	system("pause");
//	return 0;
//}


////二十六   大写字符转换成小写字符
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char Big;
//	char ssmall;
//	puts("Please enter capital character:");
//	scanf_s("%c", &Big);//Big = getchar();
//	puts("Minuscule character is:");
//	ssmall = Big + 32;            //小写转大写，即（-32）；
//	printf("%c\n", ssmall);
//	printf("ASCII=%d\n", Big);
//	system("pause");
//	return 0;
//}



////二十七   工资计算器
//#include<Windows.h>
//#include<stdio.h>
//#define   Base 5000
//int main() {
//	float num1, wage;
//	puts("请输入一个月内你的商品数量：\n");
//	scanf_s("%f", &num1);
//	wage = Base + num1 * 1.5;
//	printf("Your wage=%.2f\n", wage);
//	system("pause");
//	return 0;
//}   //test01



//二十八   if else

//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	int Signal;
//	printf("the Red Light is 0,the Green Light is 1,the Yellow Light is other number\n");
//	scanf_s("%d", &Signal);
//	if (Signal == 0)
//	{
//		printf("the Light is Red,car can't run\n");
//	}
//	else if (Signal == 1)
//	{
//		printf("the Light is Green,car can run\n");
//	}
//	else {
//		printf("the Light is Yellow,car can wait!\n");
//	}
//	system("pause");
//	return 0;
//}



//二十九   if的嵌套

//#include<Windows.h>
//#include<stdio.h>
//int main() {
//	int Day = 0;
//	int Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fir = 5, Sat = 6, Sun = 7;
//	printf("enter a day of week to get course:\n");
//	scanf_s("%d", &Day);
//	if (Day > Fir)
//	{
//		if (Day == Sat) {
//			printf("Go shopping with friends\n");
//		}
//		else
//		{
//			printf("At home with families\n");
//		}
//	}
//	else
//	{
//		if (Day == Mon)
//		{
//			printf("Have a meeting in the company\n");
//		}
//		else
//		{
//			printf("Working with partner\n");
//		}
//	}
//
//	system("pause");
//	return 0;
//}


//三十  使用条件运算符，计算欠款金额

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	float Dues;
//	float Amount;
//	int Ontime;
//	char ss=0;
//	printf("Enter dues amount\n");
//	scanf_s(" %f", &Dues);
//	
//	printf("On Time?(y/n)\n");
//	//getchar();
//	//ss = getchar();
//	scanf_s("%c", &ss);
//	Ontime = (ss == 'y') ? 1 : 0;
//	Amount = Ontime ? Dues : (Dues*1.1);
//	printf("the Amount is:%.2f\n", Amount);
//	system("pause");
//	return 0;
//}
/*
原因是这样的:在C语言中，如果使用字符型变量（就是char型）时在有连续输入的情况下，很容易因为出现
垃圾字符而导致程序的流程非法。也就是c2存储了c1中没有存储的一个回车符号.c1没有接受回车符,这个符号
存储在输入缓存中,当执行到第二个scanf的时候这个回车符就赋给了c2.所有程序没有提示你输入字符.
方法：
1、在scanf的%c之前加一个空格
2、在scanf语句之前加getchar（）；
在第一个scanf 后添加下面的语句fflush (stdin);
*/
//原文链接：https ://blog.csdn.net/beiguodexueCSDN/article/details/109655869


//三十一  使用switch语句

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char grade;
//	int g;
//	printf("Please enter your grade:\n");
//	//scanf_s("%c", &grade);
//	scanf_s("%d", &g);
//	printf("Your grade is about：");
//	if (g >= 90 && g <= 100)
//	{
//		printf("Your grade is about A\n");
//	}
//	else if (g >= 80 && g < 90)
//	{
//		printf("Your grade is about B\n");
//	}
//	else if (g >= 70 && g < 80)
//	{
//		printf("Your grade is about C\n");
//	}
//	else if (g >= 60 && g < 70)
//	{
//		printf("Your grade is about D\n");
//	}
//	else 
//	{
//		printf("Your grade is about E\n");
//	}
//	/*switch (grade)
//	{
//	case 'A':
//		printf("90~100\n"); break;
//	case 'B':
//		printf("80~89\n"); break;
//	case 'C':
//		printf("70~79\n"); break;
//	case 'D':
//		printf("60~69\n"); break;
//	case 'E':
//		printf("<60\n"); break;
//	default:
//		printf("You enter the char is wrong!\n");
//		break;
//	}*/
//
//	system("pause");
//	return 0;
//}


//三十二    if...else与switch的综合应用

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int Month = 0, Day = 0;
//	printf("enter the month you want to know the day\n");
//	scanf_s("%d", &Month);
//	switch (Month) {
//		//多路开关模式switch语句进行检验
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		Day = 31; break;
//	case 2:
//		Day = 28; break;
//	case 6:
//	case 4:
//	case 9:
//	case 11:
//		Day = 30; break;
//	default:
//		Day = -1;
//		break;
//	}
//	if (Day == -1)
//		printf("there is a error with you enter\n");
//	else
//		printf("2021年%d月有%d天\n", Month, Day);
//
//	system("pause");
//	return 0;
//}


//三十三  条件表达式（附加条件，利用选择结构写出函数），当输入x值时，输出y值。
//y=x,(x<1);   y=2x-1(1<=x<10);   y=3x-11(x>=10)

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int x = 0;
//	int y = 0;
//	printf("enter your x\n");
//	scanf_s("%d", &x);
//	if (x < 1) {
//		y = x;
//		
//	}
//	else if (x >= 1 && x < 10)
//	{
//		y = 2*x - 1;
//		
//	}
//	else
//	{
//		y = 3*x - 11;
//		
//	}
//	printf("y=%d\n",y);
//	system("pause");
//	return 0;
//}


//三十四  比较3个数中，最大的那个数

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int temp = 0, a, b, c;
//	printf("Please enter three numbers\n");
//	scanf_s("%d", &a);
//	scanf_s("%d", &b);
//	scanf_s("%d", &c);
//	printf("你输入的3个数分别是：%2d %2d %2d\n", a, b, c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("他们从大到小排序为：%d %d %d\n",a,b,c);
//	system("pause");
//	return 0;
//}



//三十五   累计1到100的总和
//F1:
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int sum=0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("sum=%d\n", sum);
//
//	system("pause");
//	return 0;
//}


//F2:
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int sum = 0;
//	int num = 1;
//	while (num <= 100)
//	{
//		sum += num;
//		num++;
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

//F3:
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int num = 1;
//	int sum = 0;
//	do {
//		sum += num;
//		num++;
//	} while (num <= 100);
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}



//三十六   for循环，产生10个随机数    ※
//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//#include <time.h>
//int main() {
//	int counter,i;
//	puts("每输入一次回车，将获得一个新的随机数（回车间隔时间要 >1s）\n");
//	for (i = 0; i < 10; i++)
//	{
//		srand((unsigned)time(NULL));/* 初始化随机数发生器   void srand(unsigned seed);*/
//		counter = rand()%50;//%50是0~50以内的随机数，% 51 + 13;产生13~63的随机数
////分析：取模即取余，rand()%51+13我们可以看成两部分：rand()%51是产生 0~50 的随机数，后面+13保证 a 
////最小只能是 13，最大就是 50+13=63

//		//因为，for 循环运行速度非常快，在一秒之内就运行完成了，而 time() 函数得到的时间只能
//		//精确到秒，所以每次循环得到的时间都是一样的，这样一来，种子也就是一样的，随机数也就一样了。
//		
//		printf("Random number %d is : %d\n", i,counter);
//		getchar();//因这时还未学会使用时间控制函数，则先使用getchar（），来手动控制时间。
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include<Windows.h>
//#include <stdlib.h>
//int main() {
//	int a = rand();
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//仅供参考
//#include <stdio.h>      /* printf */
//#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
//#include<Windows.h>
//int main()
//{
//	time_t timer;
//	struct tm y2k = { 0 };
//	double seconds;
//
//	y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
//	y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;
//
//	time(&timer);  /* get current time; same as: timer = time(NULL)  */
//
//	seconds = difftime(timer, mktime(&y2k));
//
//	printf("%.f seconds since January 1, 2000 in the current timezone", seconds);
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5 - i; j++)
//			printf(" ");
//		for (k = 1; k <= 2 * i - 1; k++)
//			printf("*");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//三十七   HD  求数组下标
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//  = 40/4-1 = 10-1 =9;
//	printf("right=%d\n", right);
//
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		printf("\nleft=%2d,,right=%2d\n", left, right);
//		mid = (left + right) / 2;//=4
//		printf("mid=%d\n", mid);
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//			printf("> right=%d  ", right);
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//			printf("< left=%d  ", left);
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了,下标是%d，right=%d\n", mid, right);
//	else
//		printf("找不到\n");
//
//	system("pause");
//	return 0;
//}


//三十八   打印三角形※
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * i - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	system("pause");
//	return 0;
//}


//三十八  打印乘法口诀

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int row, col;
//	for (row = 1; row <= 6; row++)
//	{
//		for (col = 1; col <= row; col++)
//		{
//			printf("%2d*%d=%2d ", row, col, row*col);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//三十九   goto语句

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	goto Show;
//	printf("456\n");
//Show:
//	printf("123\n");
//
//	system("pause");
//	return 0;
//}

//四十   goto在循环内使用

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int step, select;
//	for (step = 1; step < 10; step++)
//	{
//		printf("The Step is:%d\n", step);
//		do {
//			printf("enter a number to select\n");
//			printf("0 is quit,99 for the next step\n");
//			scanf_s("%d", &select);
//			if (select == 0)
//			{
//				goto exit;
//			}
//		} while (select != 99);
//	}
//exit:
//	printf("Exit the program!\n");
//
//	system("pause");
//	return 0;
//}


//四十一   break和continue的用法

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int count;
//	for (count = 0; count < 10; count++)
//	{
//		if (count == 5) {
//			//printf("Continue here\n");
//			//continue;
//			/*printf("Break here\n");
//			break;*/
//		}
//		printf("the counter is:%d\n", count);
//	}
//	system("pause");
//	return 0;
//}


//四十二   for循环打印出大写字母的ASCII码对照表

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i = 0;
//	int Char='A';
//
//	//printf("%d\n", Char);
//	for (i = 0; i <= 25; i++)
//	{
//		printf("%c is:%d\n", Char,Char);
//		Char++;
//	}
//	system("pause");
//	return 0;
//
//}


//四十三   for打印出0~100内不能被3整除的数

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int num = 1;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//
//}

//同  三十八   打印三角形

//#include<stdio.h>
//#include<Windows.h>     //正三角形
//#define row 5
//int main() {
//	int i, j, k;
//	for (int i = 1; i <= row; i++) {           //控制输出多少行
//		for (int j = 0; j < row - i; j++)      //控制这一行先输出几个空格
//		{
//		 printf("1");
//		}
//		for (int k = 0; k < 2 * i - 1; k++) //等待这一行空格输完以后，在控制输出几个*
//		{
//		  printf("*");	
//		}
//		 printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//倒三角形
//#include<stdio.h> 
//#include<Windows.h>
//#define row 5
//int main()
//{
//	int i, j, k;
//	for (i = 0; i < row; i++)
//	{
//		for (j = row; j > row - i; j--)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < (2 * row - 1) - 2 * i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>         
//#include<Windows.h>                   //左靠正直角形
//#define row 5
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>              //右靠正直角形
//#define row 5
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 0; j <= (2 * row - 1) - 2 * i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= 2 * i - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>           //左靠倒直角 
//#include<Windows.h> 
//#define row 5
//int main()
//{
//	int i, j, k;
//	for (i = 0; i <= row; i++)
//	{
//		for (j = 0; j < (2 * row - 1) - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h> 
//#include<Windows.h>        //右靠倒直角 
//#define row 5
//int main()
//{
//	int i, j, k;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j <= 2 * i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < (2 * row - 1) - 2 * i; k++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h> 
//#include<Windows.h>        //右靠倒直角 
//#define tmp 5
//int main()
//{
//	int i, j, k;
//	for (int i = 1; i <= tmp; i++) {
//		for (int j = 0; j < i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h> 
//#include<Windows.h>        //菱形雏形 
//#define row1 9
//#define row2 8
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= row1; i++)
//	{
//		for (j = 1; j <= row1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < row2; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < (2 * row2 - 1) - 2 * i; k++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}



//#include<stdio.h> 
//#include<Windows.h>        //菱形 
//int main()
//{
//
//	int i, j, k, n,ss;
//	printf("Enter you printf row:(odd number)\n");
//	scanf_s("%d", &n);
//	ss = (n+1) / 2 ;
//	for (i = 1; i <= ss; i++)
//	{
//		for (j = 1; j <= ss - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < ss - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < (2 * (ss - 1) - 1) - 2 * i; k++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//四十四    8.1数组   使用数组保存输入的数据，逆向输出输入的数据。

//#include<stdio.h>
//#include<Windows.h>
//#define num 5               //自定义一维数组数组大小
//int main() {
//	
//		int arr[num], index;
//		printf("Please enter a Array:\n");
//
//		for (index = 0; index < num; index++) {
//			scanf_s("%d", &arr[index]);
//
//		}
//		printf("Original Arr is:\n");
//		for (index = 0; index < 5; index++)
//		{
//			printf("%2d", arr[index]);
//		}
//		printf("\nNow arr is:\n");
//		for (index = num-1; index >= 0; index--)
//		{
//			printf("%2d", arr[index]);
//		}
//
//		system("pause");
//		return 0;
//}


//四十五   初始化一维数组      隔位输出及赋值数组中部分元素

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int index;
//	int arr[] = {1,2,3,4,5 };
//	for (index = 0; index < 5; index ++)
//	{
//		printf("%d\n", arr[index]);
//	}
//
//	system("pause");
//	return 0;
//}

//一维数组的应用   数组   指针   保存学生姓名

//#include<stdio.h>
//#include<Windows.h>
//#define num1 5
//
//int main()
//{
//	char*  arr[num1];
//	int dex;
//	arr[0] = "R";
//	arr[1] = "Z";
//	arr[2] = "Y";
//	arr[3] = "H";
//	arr[4] = "D";
//	for (dex = 0; dex < num1; dex++)
//	{
//		printf("%s\n", arr[dex]);
//	}
//
//	system("pause");
//	return 0;
//}


//四十六  二维数组保存数据   键盘键入，printf max，min,转换格式输出
            //只需要自定义输入的行数和列数即可，其他无需改动
//#include<stdio.h>
//#include<Windows.h>
//#define row1 4
//#define col1 2
//#define row2 col1
//#define col2 row1
//int main()
//{
//	int a[row1][col1], b[row2][col2];
//	int max, min;
//	int h, l, i, j;
//	for (i = 0; i < row1; i++)
//	{
//		for (j = 0; j < col1; j++)
//		{
//			printf("a[%d][%d]=", i, j);
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	printf("输出二维数组：\n");
//	for (i = 0; i < row1; i++)
//	{
//		for (j = 0; j < col1; j++)
//		{
//			printf("%d\t", a[i][j]);
//		}
//		printf("\n");
//	}
//	/*求数组中的最大元素及其下标*/
//	max = a[0][0];
//	h = 0;
//	l = 0;
//	for (i = 0; i < row1; i++)
//	{
//		for (j = 0; j < col1; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				h = i;
//				l = j;
//			}
//		}
//	}
//
//	printf("数组中最大的元素是：\n");
//	printf("max:a[%d][%d]=%d\n", h, l, max);
//
//	/*求数组中的最大元素及其下标*/
//	min = a[0][0];
//	h = 0;
//	l = 0;
//	for (i = 0; i < row1; i++)
//	{
//		for (j = 0; j < col1; j++)
//		{
//			if (min > a[i][j])
//			{
//				min = a[i][j];
//				h = i;
//				l = j;
//			}
//		}
//	}
//	printf("数组中最小的元素是：\n");
//	printf("min:a[%d][%d]=%d\n", h, l, min);
//
//	/*将数组a转换后存入数组b中*/
//	for (i = 0; i < row1; i++)
//	{
//		for (j = 0; j < col1; j++)
//		{
//			b[j][i] = a[i][j];       //a数组和b数组的i,j进行对调
//		}
//	}
//	printf("输出转换后的二维数组\n");
//	for (i = 0; i < row2; i++)
//	{
//		for (j = 0; j < col2; j++)
//		{
//			printf("%d\t", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//四十七
//输入一个3*3的二维数组，printf对角元素之和
//#include<stdio.h>
//#include<Windows.h>
//#include <math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2~i-1的数去试除 i ,是否能整除
//		//若一直不能整除，j++,直到 i=j跳出来
//
//		//2~sqrt(101)之间的数字去试除
//
//		//m=a*b
//		//a和b中一定至少有一个数字是<=开平方m的
//		// 16 = 2*8 4*4
//
//		//sqrt - 是开平方的函数 - 头文件math.h
//		int j = 0;
//		int flag = 1;//假设i就是素数
//
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		//跳出来在这里
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//素数
//		}
//	}
//	printf("\n count:%d\n", count);
//	system("pause");
//	return 0;
//}




















