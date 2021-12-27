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
//	if (a = 0) 
//	{
//		printf("%d是素数。\n", num);
//	}
//	else
//	{
//		printf("%d不是素数。\n",num);
//	}
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


//二十六   大写字符转换成小写字符
#include<stdio.h>
#include<Windows.h>
int main() {
	char Big;
	char ssmall;
	puts("Please enter capital character:");
	scanf_s("%c", &Big);//Big = getchar();
	puts("Minuscule character is:");
	ssmall = Big + 32;            //小写转大写，即（-32）；
	printf("%c\n", ssmall);
	printf("ASCII=%d\n", Big);
	system("pause");
	return 0;
}







































































































































