/*
内容来自课本，课件，及网络
ctrl+K+C 把选中行注释掉；
ctrl+K+U 把注释行解除注释；
tab键可代替→键向右移动（在写代码过程中）；
*/


/*第一周至第五周*/

//+-*/计算器

/*#include<stdio.h>
#include<Windows.h>
int main() {
	int a, b;
	char i;
	printf("请输入一个运算符");
	scanf("%c", &i);
	printf("请输入两个整数");
	scanf("%d%d", &a, &b);
	if (i == '+') {
		printf("结果为：%d", a + b);
	}
	else if (i == '-') {
		if (a > b) {
			printf("结果为：%d", a - b);
		}
		else {
			printf("结果为：%d", b - a);
		}
	}
	else if (i == '*') {
		printf("结果为：%d", a*b);
	}
	else {
		printf("结果为：%d", a / b);
	}
	system("pause");
	return 0;
}*/
/*
pow（）次方
*/

//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//		for (j = i; j < 3; j++)
//			if ((i + j) % 2 == 0) {             
//				printf("%d %d\n", i, j);
//				
//			}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<Windows.h>
//#include<math.h>	
//int main() {
//	int a = 2, b = 3;
//	int c;
//	c = pow(a, b);      //a的b次方
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

/*
% *d跳过（忽略）
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a=0, b=0, c=0;
//	printf("请为a，b，c赋值");
//	scanf_s("%d%*d%d", &a, &b);    //% *d你输入的中间的数值被忽略，跳过
//	printf("%d%d%d", a, b, c);     
//	system("pause");
//	return 0;
//}

/*
交换变量F1，F2
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a = 13, b = 14;
//	/*F1:
//	a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//F2:
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>              // 说明运算符'%'和'/'
//#include<Windows.h>
//int main() {
//	//float f = 1.0f/3*3;      //1.0和1的区别：1.0/2==0.5 正常计算；1/2==0因为1/2是0.5，只取整数位
//	//printf("%f", f);
//	int a = 6, b = 20;
//	printf("%d\n", b%a);      //取余%公式a%b=a-(a/b)*b;a/b取整
//	system("pause");
//	return 0;
//}

/*

算术优先级：%，*和/，+和-，=

*/
/*
自增：①：++x：//x先自增1，然后参与运算‘+’在前就先+1；
	  ②：x++：//x先参与运算，后+1     ‘+’在后就先算；

自减：①：--x://x先自减1，然后参与运算  ‘-’在前就先-1；
	  ②：x--://x先参与运算，后-1
*/

//#include<stdio.h>
//int main() {
//	int a = 1, b = 0;
//	//printf("%d\n", ++a);//a+1后参与运算
//	//printf("%d\n", a++);//a参与运算后+1
//	//b = a++;            //a=2,b=1(等价于：b=a;a=a+1)
//	b = ++a;              //a=2,b=2(等价于：a=a+1;b=a)
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	getchar();
//}


//#include<stdio.h>                     //取个、十、百位
//#include<Windows.h>
//int main() {
//	int a, x, y, z;
//	printf("请输入一个3位的整数\n");
//	scanf_s("%d", &a);
//	x = a / 100;        //x赋值百位；
//	y = a / 10 % 10;    //y赋值十位；
//	z = a % 10;         //z赋值个位
//	printf("%2d%2d%2d", x, y, z);
//	system("pause");
//	return 0;
//}



/*
条件表达式   ？ : //‘?’前是需要判断的条件，若为真，返回‘：’之前的，若为假，返回‘：’之后的
*/
//#include<stdio.h>
//int main() {
//	int a = 9, b = 0;
//	b = (a > 10 ? 888 : 666);//a>10 为假，返回666
//	printf("b=%d\n", b);
//	b = (a > 5 ? 888 : 666); //a>5 为真，返回888
//	printf("b=%d\n", b);
//	getchar();
//	return 0;
//}

/*
逗号运算符和表达式   //格式：表达式1，表达式2，表达式3
*/
//a=3*5,a*4  back 60
//x=(a=10,b=100,c=50) back 50
//y=(i++,j--,k+2) bcak k+2
//b=(a=4,3*4,a*2) back 8

/*
强制转化数据类型：(类型说明符）常量||变量||表达式
（double）a;
(int)(x+y);
(float)(5%3);
*/

/*
容量运算符    sizeof(类型||字面量||变量||表达式）
*/
//#include<stdio.h>       //通过sizeof计算C语言常用数据类型所占字节数
//int main() {
//	printf("sizeof(char)=%d\n", sizeof(char));
//	printf("sizeof(int)=%d\n", sizeof(int));
//	printf("sizeof(float)=%d\n", sizeof(float));
//	printf("sizeof(double)=%d\n", sizeof(double));
//	getchar();
//	return 0;
//}


/*
判断一个数是否能被第二个数整除     //大数能被小数整除
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a, b;
//	printf("请输入两个数");
//	scanf_s("%d %d", &a, &b);
//	if (a%b == 0)
//		printf("%d能被%d整除\n", a, b);
//	else
//		printf("%d不能被%d整除\n", a, b);
//	system("pause");
//	return 0;
//}

/*
找if else配对    从第一个else开始向上寻找预期配对的if语句
*/
//#include<stdio.h>               //判断分数等级
//#include<Windows.h>
//int main() {
//	int s;
//	printf("请输入分数\n");
//	scanf_s("%d", &s);
//	if (s < 80)
//		if (s < 70)
//			if (s < 60)
//				printf("E\n");
//			else
//				printf("D\n");
//		else
//			printf("C\n");
//	else
//		if (s < 90)
//			printf("B\n");
//		else
//			printf("A\n");
//	system("pause");
//	return 0;
//}


/*
值得思考的练习题   ‘加油问题’及‘判断三角形问题’
*/

//#include<stdio.h>                  //第五周 03.31作业     ##可以用switch语句优化！！！
//#include<Windows.h>
//#define h92 5.57
//#define h95 5.95
//#define h97 6.12
//#define mode1 0.02
//#define mode2 0.05
//int main() {
//	int date1, date2;//定义加油类型
//	float L;         //定义加油量
//	printf("请输入加油类型，如92，95,97\n");
//	scanf_s("%d", &date1);
//	printf("请输入加油量\n");
//	scanf_s("%f", &L);
//	printf("请输入加油方式，如1（手动），2（自动）\n");
//	scanf_s("%d", &date2);
//	if (date2 == 1) {
//		if (date1 == 92)
//			printf("\n加油金额为：%.2f", (L*h92*(1 - mode1)));
//		else if (date1 == 95)
//			printf("\n加油金额为：%.2f", (L*h95*(1 - mode1)));
//		else
//			printf("\n加油金额为：%.2f", (L*h97*(1 - mode1)));
//	}
//	else {
//		if(date1==92)
//			printf("\n加油金额为：%.2f", (L*h92*(1 - mode2)));
//		else if (date1 == 95)
//			printf("\n加油金额为：%.2f", (L*h95*(1 - mode2)));
//		else
//			printf("\n加油金额为：%.2f", (L*h97*(1 - mode2)));
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//#include<Windows.h>
//int main() {
//	int a, b, c;    //abc是三条边
//	int temp;       //temp用于交换用的临时变量
//	double p, area = 0; //p用于海伦公式，area用于面积
//	//输入三条边的边长
//	printf("请输入三条边长：\n");
//	scanf_s("%d%d%d", &a, &b, &c);
//	//排序，由小到大
//	if (a > b) { temp = a; a = b; b = temp; }
//	if (a > c) { temp = a; a = c; c = temp; }
//	if (b > c) { temp = b; b = c; c = temp; }
//	printf("%d %d %d\n", a, b, c);      //使得a<b<c;
//	//判断是否构成三角形，输出面积和类型（等边，等腰，直角，一般）
//	if (a + b > c) {
//		//计算面积，海伦公式
//		p = (double)(a + b + c) / 2;
//		area = sqrt(p*(p - a)*(p - b)*(p - c));   //sqrt 求非负实数的平方根
//		printf("面积是：%.2f\n", area);
//		//判断类型
//		if (a == b && a == c) {
//			printf("是等边三角形\n");
//		}
//		else if (a == b || a == c || b == c)
//			printf("是等腰三角形\n");
//		else if (c*c == (a*a + b * b))
//			printf("是直角三角形\n");
//		else
//			printf("是一般三角形\n");
//	}
//	else
//		printf("不构成三角形\n");
//	system("pause");
//	return 0;
//}

/*
switch 语句      所有的switch语句都可以用if else代替，但并不是所有if else可以被switch代替；
*/
//#include<stdio.h>                      //判断奇偶数
//#include<Windows.h>
//int main() {
//	int a;
//	printf("请输入一个整数：\n");
//	scanf_s("%d", &a);
//	switch (abs(a % 2)) {        //abs()取绝对值
//	case 0:printf("偶数\n"); break;
//	case 1:printf("奇数\n"); break;
//	default:printf("error\n");
//	}
//	system("pause");
//	return 0;
//}



/*
第六周----第十周
*/



//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i;
//	int sum = 0;
//	//从1累加到100；
//	/*for (i = 1; i <= 100; i++)
//		sum = sum + i;
//	printf("从1到100所有整数累加，结果是：%d\n", sum);*/
//	//从1到90的奇数和；
//	for (i = 1; i <= 90; i=i+2)
//		sum = sum + i;
//	printf("从1到90所有奇数累加，结果是：%d\n", sum);
//
//	system("pause");
//	return 0;
//}


/*
找车牌号
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j;
//	int k, c;
//	for (i = 1; i <= 9; i++) {
//		for (j = 0; j <= 9; j++) {
//			if (i != j) {
//				k = i * 1000 + i * 100 + j * 10 + j;
//				for (c = 32; c*c < k; c++);
//				if (c*c == k)
//					printf("肇事车辆的车牌号为：%d\n", k);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


/*
一张100元的纸币，要求换1元，2元，5元的零钱，总数不能超过50个
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k, count = 0;//1元的是i，2元的是j，5元的是k；
//	for (i = 0; i <= 50; i++) {
//		for (j = 0; j <= 50; j++) {
//			for (k = 0; k <= 50; k++) {
//				if ((i + j + k) == 50 && (i + 2 * j + 5 * k) == 100) {
//					count++;
//					printf("第%2d种换法是：1元有%2d枚，2元有%2d枚，5元有%2d枚。\n", count, i, j, k);
//				}
//			}
//		}
//	}
//	printf("一共有%d种换法\n", count);
//	system("pause");
//	return 0;
//}

/*
while语句
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i = 1;
//	int sum = 0;
//	while (i <= 100) {
//		sum = sum + i;
//		i++;
//	}
//	printf("从1到100累加之和:%d\n", sum);
//	system("pause");
//	return 0;
//}

/*
蜗牛爬杆
今天剩下的长度：x2
昨天剩下的长度：x1
循环变量day表示天数
昨天剩下的竹竿长度=（今天剩下的长度+1）*2
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int x1, x2, day;
//	x2 = 1; day = 7;
//	while (day > 0) {
//		x1 = (x2 + 1) * 2;
//		x2 = x1;
//		day--;
//	}
//	printf("竹竿的长度为：%d\n", x2);
//	system("pause");
//	return 0;
//}

/*
水仙花数是指一个三位数，其各位数字立方和等于该数本身
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int m = 100, n;
//	int j, i, k;
//	while (m < 1000) {
//		i = m / 100;
//		j = m / 10 % 10;
//		k = m % 10;
//		n = i * i*i + j * j*j + k * k*k;
//		if (m == n) {
//			printf("水仙花数有%2d\n", n);
//		}
//		m++;
//	}
//	system("pause");
//	return 0;
//}


/*
do while
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i = 1;
//	int sum = 0;
//	do {
//		sum = sum + i;
//		i++;	
//	} while (i <= 100);
//	printf("从1到100的累加和：%d\n", sum);
//	system("pause");
//	return 0;
//}

/*
爱因斯坦阶梯问题
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i = 1;
//	do {
//		i++;
//	} while (!((i % 2 == 1) && (i % 3 == 2) && (i % 5 == 4) && (i % 6 == 5) && (i % 7 == 0)));
//	printf("阶梯数为：%d\n", i);
//	system("pause");
//	return 0;
//}

/*
公鸡5元1只，母鸡3元1只，小鸡1元3只
100元买100只鸡
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k;
//	for (k = 0; k <= 100; k=k+3) {
//		for (j = 0; j <= 33; j++) {
//			i = 100 - k - j;
//			if ((i * 5 + j * 3 + k / 3) == 100 && i >= 0) {
//				printf("公鸡%d只，母鸡%d只，小鸡%d只\n", i, j, k);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


/*
循环嵌套
*/

//#include<stdio.h>           //5*5的‘*’矩阵
//#include<Windows.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 5; i++) {
//		for (j = 1; j <= 5; j++) {
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 5; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("*");
//		}printf("\n");
//	}
//	system("pause");
//	return 0;
//}

/*
张三李四王五赵六的年龄成一个等差数列，他们4人年龄相加得26
相乘得880
求，以他们年龄为前4项的等差数列的前20项
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k;
//	for (i = 0; i <= 6; i++) {
//		for (j = 1; j <= 26 / 6; j++) {
//			if ((4 * i + 6 * j) == 26 && i*(i + j)*(i + 2 * j)*(i + 3 * j) == 880) {
//				printf("%d,%d,%d,%d\n", i, i + j, i + 2 * j, i + 3 * j);
//				for (k = 0; k < 20; k++) {
//					printf("%5d", i + k * j);
//					if ((k + 1) % 5 == 0) {
//						printf("\n");
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


/*
统计非字母个数
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char ch;
//	int count = 0;
//	while (1) {
//		ch = getchar();
//		if (ch == '*') break;
//		if (ch >= 'A'&&ch <= 'Z' || ch >= 'a'&&ch <= 'z') continue;
//		count++;
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}

/*
一根长度为139m的材料，需要截成长度为19m和23m的断料
求两种断料各截多少根时剩余的材料最少
*/

//#include<stdio.h>
//#include<Windows.h>
//#define len 139
//int main() {
//	int i, j, mini, minj, min;//i是19m的；j是23m的；
//	min = len;
//	for (i = 0; i <= len / 19; i++) {
//		j = (len - i * 19) / 23;
//		if ((len - i * 19) % 23 >= 19) continue;
//		printf("min=%d i=%d,j=%d\n", (len - i * 19) % 23, i, j);
//		if (min > (len - i * 19) % 23) {
//			min = (len - i * 19) % 23;
//			mini = i;
//			minj = j;
//		}
//	}printf("min=%d mini=%d minj=%d\n", min, mini, minj);
//	system("pause");
//	return 0;
//}


/*
循环综合应用实例：
乒乓球对阵
假设：A对阵i，B对阵j，C对阵k
i，j，k分别可以是X,Y,Z
判断对阵结果的逻辑条件是：
i，j，k互不相等，i不能等于X，k不能等于XheZ
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char j, i, k;
//	for (i = 'X'; i <= 'Z'; i++) {
//		for (j = 'X'; j <= 'Z'; j++) {
//			if(i!=j)
//				for (k = 'X'; k <= 'Z'; k++) {
//					if (i != k && j != k)
//						if (i != 'X'&&k != 'X'&&k != 'Z')
//							printf("A--%c  B--%c  C--%c", i, j, k);
//				}
//		}
//	}
//	system("pause");
//	return 0;
//}

/*
打印三角形
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int N, i, j;
//	printf("请输入行数：");
//	scanf_s("%d", &N);
//	for (i = 1; i <= N; i++) {
//		for (j = 1; j <= N - i; j++) {        //打印空格和打印*是并列关系
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

/*
甲乙有合约，甲每天给乙10万元
乙第一天给甲1分钱，第二天给甲2分钱，第三天给甲4分钱（每天是前一天的两倍）
问：30天后甲给了乙多少钱，乙给了甲多少钱
*/


//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	float a, b, i, c = 0.01;
//	a = 100000 * 30;          //a是甲给乙的总钱数
//	b = 0.01;                 //b是乙第一天给甲的钱数
//	for (i = 2; i <= 30; i++) {
//		c = c * 2;            //c表示每天是前一天的两倍
//		b = c + b;            //b+c是今天的加上昨天的，才是目前为止的
//	}
//	printf("甲给了乙%.2f,乙给了甲%.2f", a, b);
//	system("pause");
//	return 0;
//}

/*
马克思手稿问题
有30人，有男人，女人和小孩
在一家饭馆吃饭花了50先令，
每个男人花3先令，女人花2先令，每个小孩花1先令，
问：男人，女人和小孩各有几人？
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k;//i是男人，j是女人，k是小孩
//	for (i = 0; i <= 16; i++) {
//		for (j = 0; j <= 25; j++) {   //25也可以写成（50-i*3）/2
//			k = 30 - i -j;
//			if (i * 3 + j * 2 + k == 50) {
//				printf("男人有%2d，女人有%2d，小孩有%2d\n", i, j, k);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

/*
输入一批学生的成绩，找出最高分
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a, max = 0;
//	int i;
//	for (i = 1; i <= 10; i++) {
//		printf("请输入第%d个学生的成绩：\n", i);
//		scanf_s("%d", &a);
//		if (max < a)
//			max = a;
//
//	}
//	printf("最高分是%d\n", max);
//	system("pause");
//	return 0;
//}


//#include<windows.h>                   //简易贪吃蛇
//#include<conio.h>
//#include<stdio.h>
//#define Width 45///可以宏定义地图大小
//int main()
//{
//	srand((unsigned)malloc(1));//初始化随机数种子
//	do///重新开始，直接套一个循环
//	{
//		int hX = Width / 2, hY = Width / 2, len = 4, i = 0, map[Width * Width] = { 0 };//头坐标，蛇长，循环变量，地图（-1:食物;0:空白;>0:蛇身）
//		for (i = 0; i < Width; i += 2)///新增地图元素：-2:墙
//			map[i] = map[Width * Width - 1 - i] = map[i * Width] = map[i * Width + Width - 1] = -2;//使四周的墙都隔一格分布
//		char c = 'd', cl = 3, deaw[Width * Width * 2 + 1] = { 0 };//初始方向，输入缓存，绘制缓存
//		sprintf_s(deaw, 32, "mode con: cols=%d lines=%d", Width * 2, Width);
//		system(deaw);//修改控制台窗口大小
//		for (int num = 3; num; num--)///生成多个食物，num控制数量
//		{
//			do i = rand() % (Width * Width);
//			while (map[i]);
//			map[i] = -1;
//		}
//		for (system("title 得分:0"); 1; Sleep(100))///初始化计分板，延迟
//		{
//			if (_kbhit() && (cl = _getch()))//判断是否输入
//				switch (cl)
//				{
//				case 'a':case 'A':if (c != 'd')c = 'a'; break;//判断与原方向是否冲突
//				case 'd':case 'D':if (c != 'a')c = 'd'; break;
//				case 's':case 'S':if (c != 'w')c = 's'; break;
//				case 'w':case 'W':if (c != 's')c = 'w'; break;
//				case ' ':_getch(); break;///新增操作：空格暂停
//				case 27:exit(0); break;///新增操作：Esc退出
//				}
//			switch (c)
//			{
//			case 'a':hX -= hX > 0 ? 1 : 1 - Width; break;//更新头坐标
//
//
//			case 'd':hX += hX < Width - 1 ? 1 : 1 - Width; break;
//			case 's':hY += hY < Width - 1 ? 1 : 1 - Width; break;
//			case 'w':hY -= hY > 0 ? 1 : 1 - Width; break;
//			}
//			if (map[hY * Width + hX] > 1 || map[hY * Width + hX] == -2) break;//判断是否吃到自己
//			if (map[hY * Width + hX] == -1)//判断是否吃到食物
//			{
//				len++;
//				do i = rand() % (Width * Width);
//				while (map[i]);//防止食物位置覆盖蛇
//				map[i] = -1;
//				sprintf_s(deaw, 32, "title 得分:%d", len - 4);///新增：计分板
//				system(deaw);
//			}
//			else for (i = 0; i < Width * Width; i++)//全部蛇身值-1
//				if (map[i] > 0)map[i] -= 1;
//			map[hY * Width + hX] = len;//蛇头赋值
//			for (i = 0; i < Width * Width * 2; i++)//更新绘制缓存
//			{
//				if (map[i / 2] == 0)deaw[i] = ' ';
//				else if (map[i / 2] > 0)deaw[i] = (i & 1) ? ')' : '(';
//				else if (map[i / 2] == -2)deaw[i] = (i & 1) ? ']' : '[';///新增：墙
//				else deaw[i] = '0';
//			}
//			system("cls");//清屏
//			printf(deaw);//打印
//		}
//		sprintf_s(deaw, 48, "title GameOver!得分:%d 按空格键重新开始", len - 4);
//		system(deaw);
//	} while (_getch() == ' ');///空格键继续
//}

/*
67行贪吃蛇，在原有的47行贪吃蛇上完善和拓展功能：
1.自定义地图大小	(+2 lines)(4,14)
宏定义实现
2.地图元素--墙		(+1 line)(58)
在原有的基础上增加规则，实现也不难
3.墙可自定义分布	(+2 lines)(11-12)
也许不止这两行
4.可生成多个食物	(+6 lines)(16-21)
反复生成
5.重新开始			(+5 lines)(8-9,64-66)
直接套一个循环，结尾加个标题提示
6.暂停和退出		(+2 lines)(31-32)
增加判断就行
7.计分板			(+2 lines)(48-49)
在标题栏上实现
*/

/*
计算1~20之间的技术之和和偶数之和
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i = 1;
//	int s1 = 0, s2 = 0;  //s1是奇数和，s2是偶数和
//	while (i <= 20) {
//		if (i % 2 == 1)
//			s1 += i;
//		else
//			s2 += i;
//		i++;
//	}
//	printf("奇数和是%d\n", s1);
//	printf("偶数和是%d\n", s2);
//	system("pause");
//	return 0;
//}

/*
角谷猜想
任给一个自然数，若为偶数除以2，若为奇数则*3+1，
得到一个新的自然数后按照上面的法则继续演算，
若干次后得到的结果必然为1
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a;    //起始自然数
//	printf("任意输入一个自然数");
//	scanf_s("%d", &a);
//	do {
//		if (a % 2 == 0)
//			a = a / 2;
//		else
//			a = a * 3 + 1;
//		printf("%d\n",a);
//	} while (a != 1);
//	system("pause");
//	return 0;
//}

/*
有一对小兔子，从出生后第三个月起每个月都生一对小兔子，
小兔子长到第三个月后每个月又生一对小兔子，
加入兔子都不死，问20个月内每个月的兔子的总数为多少？
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	//兔子的数量：a（上上个月），b(上个月）,r(本月）
//	int a = 0, b = 1, r;
//	int i;    //i是月份
//	printf("第1个月的兔子数量是1对\n");
//	for (i = 2; i <= 20; i++) {
//		r = a + b;
//		printf("第%d个月的兔子数量是%d对\n",i, r);
//		a = b;
//		b = r;
//	}
//	system("pause");
//	return 0;
//}


/*
译密码。为使电文保密，往往按一定规律将其转换成密码，收报人再按约定的规律将其译回原文。
可以按以下的规律将电文变成密码：将字母A变成字母E，a变成e，即变成其后的第4个字母，W变成A，X变成B，Y变成C，Z变成D。
字母按上述规律转换，非字母字符不变。
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char dw = 0;
//	while (dw != 10) {
//		dw = getchar();
//		if ((dw >= 65 && dw <= 86) || (dw >= 97 && dw <= 118))
//			dw += 4;
//		if ((dw >= 87 && dw <= 90) || (dw >= 119 && dw <= 122))
//			dw -= 22;
//		printf("%c", dw);
//	}
//	system("pause");
//	return 0;
//}

/*
统计一个整数的位数
从键盘输入一个正数，统计该数的位数
例如，12345，输出5，输入-99，输入2
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a;     //输入的整数	；
//	int count = 0; //整数的位数
//	printf("请输入任意整数\n");
//	scanf_s("%d", &a);
//	do {
//		a = (a - a % 10) / 10;
//		count++;
//
//	} while (a != 0);
//	printf("输入整数有%d位\n", count);
//	system("pause");
//	return 0;
//}


/*
定义数组，
输入数组，
输出数组
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[5];
//	int i;
//	for (i = 0; i < 5; i++)
//		scanf_s("%d", &a[i]);
//	for (i = 0; i < 5; i++)
//		printf("%d\n", a[i]);
//	system("pause");
//	return 0;
//}


/*
五个小朋友围成一圈分糖果
从第一个到第五个小孩依次是10、14、08、22、16块
然后所有的小孩同时将手中的糖分一半给右边的小孩
糖数为奇数的人向老师要一块后再分。
问经过这样几次后大家手里的糖数一样多？每人各多少块？
j[i]:第i个小孩的糖果数
k[i]:第i个小孩可分糖果数的一半
count：循环次数
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, count = 0;
//	int j[6] = {0,10,14,8,22,16};
//	int k[6];
//	while (j[1] != j[2] || j[2] != j[3] || j[3] != j[4] || j[4] != j[5]) {
//		for (i = 1; i <= 5; i++) {
//			if (j[i] % 2 == 1) j[i] += 1;
//			k[i] = j[i] / 2;
//		}
//		k[0] = k[5];
//		for (i = 1; i <=5; i++) {
//			j[i] = k[i] + k[i - 1];
//		}
//		count++;
//	}
//	printf("经过%d次的循环，所有人手里的糖果数是%d\n", count, j[3]);
//	system("pause");
//	return 0;
//}


/*
如果若干个数存储在一个数组里，该程序对输入的任意一个数查找数组中是否有
与这个数相等的数。若有则输出在数组中的位置，若没有则输出“没有找到数据！”
*/

//#include<stdio.h>
//
//int main() {
//	int i=0;
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int s,flag=0;
//	printf("请输入你需要查找的数据\n");
//	scanf_s("%d", &s);
//	
//	for (i = 0; i <= 10; i++) {
//		if (a[i] == s) {
//			printf("查找的数在%d位\n", i);
//			flag++;
//		}
//	}
//	if (flag == 0)
//		printf("没有找到数据\n");
//	system("pause");
//	return 0;
//}


/*
一维数组实践
从键盘接收10个数
求平均数并输出小于平均数的数
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[10], i;
//	int sum = 0;
//	float ave = 0;
//	printf("请输入10个整数\n");
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &a[i]);
//		sum = sum + a[i];
//	}
//	ave = sum / 10;
//	printf("平均数是：%f\n", ave);
//	for (i = 0; i < 10; i++)
//		if (a[i] < ave)
//			printf("%d\n", a[i]);
//	system("pause");
//	return 0;
//}


/*
一位数组实践2
用数组求Fibonacci数列的前20项
Fibonacci数列又称兔子数列；
1,1,2,3,5,8,13,21,34……
从第三项开始，每一项都等于前两项之和。
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[20] = { 1,1 };
//	int i;
//	for (i = 2; i < 20; i++)
//		a[i] = a[i - 2] + a[i - 1];
//	for (i = 0; i < 20; i++)
//		printf("%d\n", a[i]);
//	system("pause");
//	return 0;
//}

/*
找出二维数组的鞍点                   //有空再看这一题!!!
即该位置上的元素是该行最大该列最小
也可能没有鞍点
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[5][5] = {
//					12,23,45,13,22,
//					43,24,44,52,21,
//					39,34,40,23,12,
//					63,23,46,34,53,
//					13,45,41,22,34
//	};
//	int i, j, k;           //循环变量
//	int max;               //一行里面的最大值
//	int maxj;              //一行里最大值所在的列
//	int minFlag;            //更小值的数量，0：其他的数都更大
//	int point=0;              //找到鞍点的数量
//	for (i = 0; i < 5; i++) {
//		max = 0;
//		for (j = 0; j < 5; j++) {
//			if (max < a[i][j]) {
//				max = a[i][j];
//				maxj = j;
//			}
//		}
//		//printf("max=%d,maxj=%d\n", max, maxj);
//		minFlag = 0;
//		for (k = 0; k < 5; k++) {
//			if (k != i) {
//				if (max > a[k][maxj]) minFlag++;
//			}
//		}
//		if (minFlag == 0) {
//			printf("找到一个鞍点，在%d行%d列\n", i, maxj);
//			point++;
//		}
//	}
//	if (point == 0)
//		printf("没有找到鞍点\n");
//	system("pause");
//	return 0;
//}


/*
定义二维数组
初始化二维数组
引用二维数组
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[3][3];
//	int i, j;
//	printf("请输入二维数组的数值：\n");
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

/*
果园竞赛
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int f[3][4];
//	int i;
//	int max = 0, pNo;
//	for (i = 0; i < 3; i++) {
//		printf("请输入第%d场的比赛结果：\n", i + 1);
//		scanf_s("%d%d%d", &f[0][i], &f[1][i], &f[2][i]);
//	}
//	for (i = 0; i < 3; i++) {
//		f[i][3] = f[i][0] + f[i][1] + f[i][2];
//		if (max < f[i][3]) {
//			max = f[i][3];
//			pNo = i;
//		}
//	}
//	printf("%d %d %d", f[0][3], f[1][3], f[2][3]);
//	if (f[0][3] == max) printf("比赛的冠军是小明\n");
//	if (f[1][3] == max) printf("比赛的冠军是小强\n");
//	if (f[2][3] == max) printf("比赛的冠军是小梅\n");
//	
//	/*switch (pNo) {
//	case 0:printf("比赛冠军是小明\n"); break;
//	case 1:printf("比赛的冠军是小强\n"); break;
//	case 2:printf("比赛的冠军是小梅\n"); break;
//	default:printf("error");
//	}*/
//	system("pause");
//	return 0;
//}

/*
程序按照计算500-1中的整数之和，当和数超过5000时停止，
输出和的结果，并输出参与求和的整数的个数
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[500];
//	int i;
//	int sum = 0;
//	for (i = 0; i < 500; i++) {
//		a[i] = 500 - i;
//	}
//	i = 0;
//	while (sum <= 5000) {
//		sum += a[i];
//		i++;
//	}
//	printf("总和是%d，参与求和整数个数是%d", sum, i);
//	system("pause");
//	return 0;
//}

/*
从一段文字中统计单词的个数
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char a[500];
//	int i = 0, count = 0;;
//	int flag = 0;
//	gets(a);
//	while (a[i] != '\0') {
//		if (a[i] == ' ')
//			flag = 0;
//		else if (flag == 0) {
//			count++;
//			flag = 1;
//		}
//		i++;
//	}
//	printf("单词数量是：%d\n", count);
//	system("pause");
//	return 0;
//}
/*
将1~250中能被7整除的数删除，显示余下的数
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[200];
//	int i, j;
//	for (i = 0; i < 250; i++) {
//		a[i] = i + 1;
//	}
//	for (i = 0; i < 250; i++) {
//		if (a[i] % 7 == 0) {
//			for (j = i; j < 249; j++) {
//				a[j] = a[j + 1];
//				a[j + 1] = 0;
//			}
//		}
//	}
//	for (i = 0; i < 250; i++) {
//		printf("%5d", a[i]);
//		if ((i + 1) % 5 == 0)
//			printf("\n");
//	}
//	system("pause");
//	return 0;
//}

/*
strlen()                               //!!!问题函数
strcmp()
strcat()
strcpy和strncpy()
*/

//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	char s1[15] = "abcd";
//	char s2[15] = "abcd";
//	int len, cmp;
//	len = strlen(s1);
//	printf("%d\n", len);
//	cmp = strcmp(s1, s2);   //如果返回值小于 0，则表示 str1 小于 str2。如果返回值大于 0，则表示 str1 大于 str2。如果返回值等于 0，则表示 str1 等于 str2。
//	printf("%d\n", cmp);
//
//	strcat(s1, s2);
//	printf("%s", s1);
//	strcpy(s1, s2);
//	printf("%s", s1);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	char s1[15] = "12345678901234";
//	char s2[15] = "ABCDE";
//	int len, cmp;
//	len = strlen(s2);
//	/*len = strlen(s1);         //s1的长度
//	printf("%d\n", len);        
//	cmp = strcmp(s1, s2);       //比较s1，s2的大小，从左向右开始一一对比，若s1小则返回负值，相反返回正值，若全部相等，返回0；
//	printf("%d\n", cmp);
//	strcat(s1, s2);             //拼接s1,s2;
//	printf("%s\n", s1);*/
//	strcpy(s1, s2);               //复制s2到s1里面，覆盖s1
//	printf("%s\n", s1);
//	strncpy(s1, s2,len);        //复制s2到s1里面，可以指定长度
//	printf("%s\n", s1);
//	system("pause");
//	return 0;
//}

/*
统计字符类型的个数
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char a[500];
//	int i = 0;
//	int count = 0,  COUNT = 0, digit = 0, space = 0, other = 0;
//	gets(a);
//	while (a[i] != '\0') {
//		if (a[i] == ' ')
//			space++;
//		else if (a[i] >= '0'&&a[i] <= '9')
//			digit++;
//		else if (a[i] >= 'A'&&a[i] <= 'Z')
//			COUNT++;
//		else if (a[i] >= 'a'&&a[i] <= 'z')
//			count++;
//		else
//			other++;
//		i++;
//	}
//	printf("COUNT=%d,count=%d,digit=%d,space=%d,other=%d\n", COUNT, count, digit, space, other);
//	system("pause");
//	return 0;
//}


/*
输入一个字符串，然后把字符串中的字符按照由小到大重新排列输出
*/

//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	char a[30];
//	char temp;
//	int i, j, l;
//	printf("请输入一段字符串");
//	gets(a);
//	l = strlen(a);
//	for (i = 0; i < (l - 1); i++) {                      //冒泡法
//		for (j = 0; j < (l - 1 - i); j++) {
//			if (a[j] > a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	puts(a);
//	system("pause");
//	return 0;
//}

/*
果园竞赛程序
姓名       编号  葡萄  梨 桃子  总重量
*/

//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	int i,j,max=0,pno,k;
//	char name[9][20] = { {"a001"},{"a002"},{"a003"},{"a004"},{"a005"},
//	{"a006"},{"a007"},{"a008"}};
//	int fw[9][5] = { {102,23,54,45},{102,23,84,45},{103,23,34,85},{104,63,34,45},
//		{105,83,34,45},{106,23,39,45},{107,23,34,25},{108,23,54,45} };//水果总重量
//	/*for (i = 0; i < 8; i++) {
//		printf("第%d位选手的姓名是：\n", i + 1);
//		gets(name[i]);
//		printf("编号是：");
//		scanf_s("%d", &fw[i][0]);
//		printf("摘得的葡萄重量：");
//		scanf_s("%d", &fw[i][1]);
//		printf("摘得的梨重量：");
//		scanf_s("%d", &fw[i][2]);
//		printf("摘得的桃子重量：");
//		scanf_s("%d", &fw[i][3]);
//	}*/
//	//第一个问题
//	for (i = 0; i < 8; i++) {
//		if (max < fw[i][3]) {
//			max = fw[i][3];
//			pno = i;
//
//		}
//	}
//	printf("摘桃子的冠军是%s，编号是%d，桃子的重量是%d\n", name[pno], fw[pno][0], fw[pno][3]);
//
//	//第二个问题
//
//	//第三个问题
//	for (i = 0; i < 8; i++) {
//		fw[i][4] = fw[i][1] + fw[i][2] + fw[i][3];
//	}
//	for (k = 0; k < 7;k++) {       //冒泡法
//		for (i = 7; i > k; i--) {
//			if (fw[i][4] > fw[i - 1][4]) {
//				strcpy(name[8], name[i - 1]);
//				strcpy(name[i - 1], name[i]);
//				strcpy(name[i], name[8]);
//
//				for (j = 0; j <= 4; j++) {
//					fw[8][j] = fw[i - 1][j];
//					fw[i - 1][j] = fw[i][j];
//					fw[i][j] = fw[8][j];
//
//				}
//			}
//		}
//	}
//	printf("姓名   编号   总重量\n");
//	for (i = 0; i < 8; i++) {
//		printf("%10s  %10d  %10d\n",name[i],fw[i][0],fw[i][4]);
//
//	}
//	system("pause");
//	return 0;
//
//}


/*
自定义函数
*/
/*
输出两行，每行15个‘*’
要求，定义一个函数实现输出一行
*/

//#include<stdio.h>
//#include<Windows.h>
//void ba();
//int main() {
//	ba();
//	ba();
//	system("pause");
//	return 0;
//}
//void ba() {
//	int i;
//	for (i = 0; i < 15; i++) {
//		printf("*");
//	}
//	printf("\n");
//}

/*
编写max函数，求出a，b两个数中的大数
*/


//int max(int i, int j) {
//	if (i > j)
//		return i;
//	else
//		return j;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a, b, c;
//	printf("输入两个数");
//	scanf_s("%d %d", &a, &b);
//	c = max(a, b);
//	printf("max=%d", c);
//	system("pause");
//	return 0;
//
//}

/*
输出数字金字塔
写出main（）函数调用它，输出3,5,7以内
的数字*/

//#include<stdio.h>
//#include<Windows.h>
//void pyra(int n) {              //该具体函数不必了解
//	int i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n - i; j++)
//			printf(" ");
//		printf("%d", i);
//		printf("\n");
//	}
//}
//int main() {
//	pyra(3);
//	pyra(5);
//	pyra(7);
//	system("pause");
//	return 0;
//}


/*
写出pb函数和area函数
求三角形面积
*/

//#include<stdio.h>
//#include<Windows.h>
//#include<math.h>
//int main() {
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (pb(a, b, c))
//		printf("area=%d", area(a, b, c));
//	else
//		printf("input error!");
//	system("pause");
//	return 0;
//}
//
//int pb(int a, int b, int c) {
//	if ((a + b) <= c) return 0;
//	if ((a + c) <= b) return 0;
//	if ((b + c) <= a) return 0;
//	else
//		return 1;
//}
//
//int area(int a, int b, int c) {
//	float p, s;
//	p = (float)(a + b + c) / 2;
//	s = sqrt(p*(p - a)*(p - b)*(p - c));
//	return (int)s;
//}


/*
输出三行，第一行3个’*‘，下一行都增加3个’*‘
要求，定义一个函数实现输出一行
共输出5行
*/

//#include<stdio.h>
//#include<Windows.h>
//void fn(int n);
//int main() {
//	int i;
//	for (i = 0; i < 5; i++) {
//		fn(i);
//	}
//	system("pause");
//	return 0;
//}
//
//void fn(int n) {
//	int i;
//	for (i = 0; i < (3 + n * 3);i++) {
//		printf("*");
//	}printf("\n");
//}

/*
编写一个求和函数
从键盘输入两个数，输出两个数之和
*/
//#include<stdio.h>
//#include<Windows.h>
//void ss(int a, int b);
//int main() {
//	int a, b;
//	printf("请输入两个整数");
//	scanf_s("%d %d", &a, &b);
//	ss(a, b);
//	system("pause");
//	return 0;
//}
//void ss(int a, int b) {
//	int sum;
//	sum = a + b;
//	printf("两数之和为%d\n", sum);
//}

/*
从键盘输入一串字符，编写函数，判断是否为小写字母
并统计小写字母的个数
*/


//#include<stdio.h>
//#include<Windows.h>
//int co(char a);
//int main() {
//	char ch[20];
//	int i;
//	int count = 0;
//	printf("请输入字符串：\n");
//	gets(ch);
//	for (i = 0; ch[i] != '\0'; i++) {
//		count += co(ch[i]);
//	}
//	printf("小写字母数量是%d\n", count);
//	
//	system("pause");
//	return 0;
//}
//
//int co(char a) {
//	if (a >= 'a'&&a <= 'z')
//		return 1;
//	else
//		return 0;
//}


/*
10个学生参加考试，编写一个函数，求平均分
整形数组，存放分数
自定义函数，求均值
主函数，实现数据输入和输出
*/


//int ave(int x[], int n) {         //x是整型数组，n是长度
//	int sum=0, i, average;
//	for (i = 0; i < n; i++) {    //得出sum
//		sum += x[i];
//	}
//	average = sum / n;
//	return average;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i;
//	int a[10];
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	printf("%d\n", ave(a, 10));
//	system("pause");
//	return 0;
//}


/*
有十名同学的身高，由小到大排序，         //在复习 0519
然后再排好序后，删除想退出的同学的身高
*/
//void qdx(int a[], int n) {
//	int i, j;
//	int temp;
//	for (i = 1; i < n - 1; i++) {
//		for (j = 0; j < n - i; j++) {
//			if (a[j] > a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//
//#include<stdio.h>
//#include<Windows.h>
//void del(int a[], int n, int x);
//int main() {
//	int high[10];
//	int x,i;
//	for (x = 0; x < 10; x++) {
//		scanf_s("%d", &high[x]);
//	}
//	qdx(high, 10);
//	printf("主动退出的同学的身高是：\n");
//	scanf("%d", &i);
//	del(high, 10, i);
//	printf("从小到大排序是：\n");
//	for (x = 0; x < 10; x++) {
//		printf("%5d", high[x]);
//	}printf("\n");
//	system("pause");
//	return 0;
//}
//
//void del(int a[], int n, int x) {
//	int i,j;
//	for (i = 0; i < n; i++) {
//		if (a[i] == x) {
//			for (j = i; j > 0; j--) {
//				a[j] = a[j - 1];
//			}
//			a[0] = 0; break;
//		}
//	}
//}


/*
从键盘输入，调用函数，
求最大公约数和最小公倍数
*/
//int fnmax(int a, int b)     //负责求最大公约数
//{
//	int i;                 //最大公约数
//	i = a;
//	while (i) {
//		if (a%i == 0 && b%i == 0)
//			return i;
//		else
//			i--;
//	}
//}
//
//
//long fnmin(int a, int b)       //最小公倍数
//{
//	long c;
//	c = (a * b)/fnmax(a, b);      //在该函数中，调用其他函数：函数嵌套，函数都是独立的
//	return c;
//}
//
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int x, y;
//	printf("请输入两个整数\n");
//	scanf_s("%d %d", &x, &y);
//	
//	printf("最大公约数是：%d\n", fnmax(x, y));
//	printf("最小公倍数是：%ld\n", fnmin(x, y));
//	system("pause");
//	return 0;
//}


/*
有五个人坐在一起，问第五个人多少岁？他说比第四个人大 2 岁。问第四个人多
少岁？他说比第三个人大 2 岁。问第三个人多少岁？他说比第二个人大 2 岁。问
第二个人多少岁？他说比第一个人大 2岁。最后问第一个人多少岁？他说 10岁。
请问第五个人多少岁？
*/
//int age(int n) {
//	int c;
//	if (n == 1)
//		c = 10;
//	else
//		c = age(n - 1) + 2;     //函数自己调用自己：递归调用
//	return c;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i;
//	i = age(10);
//	printf("第十个人的年龄是：%d\n", i);
//	system("pause");
//	return 0;
//}


/*
求 1-10 的阶乘值
*/
//long fact(int n) {
//	long mul;
//	if (n == 1 || n == 0)
//		mul = 1;
//	else
//		mul = n * fact(n - 1);      //递归调用，自己调用自己
//	return mul;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i;
//	for (i = 1; i <= 10; i++) {
//		printf("%d的阶乘是%ld\n", i, fact(i));
//	}
//   system("pause");
//   return 0;
//}


//输入 10 个数，要求输出其中值最大的元素和该数是第几个数。

//#include<stdio.h>
//int main() {
//	int max(int x, int y);
//	int a[10], m, n, i;
//
//	printf("please enter 10 integer number:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//
//	for (i = 1, m = a[0], n = 0; i < 10; i++) {
//		if (max(m, a[i]) > m) {          //若 max 函数返回值大于 m
//			m = max(m, a[i]);        //max 函数的返回值取代 m
//			n = i;                  //把数组元素的序号记下来，放到 n 中
//		}
//	}
//	printf("the largest number is %d\n it is the %dth number \n", m, n + 1);
//
//	return 0;
//}
//
//int max(int x, int y) {
//	return(x > y ? x : y);
//}
/*
变量的储存类型    局部变量，全局变量
*/
//#include<stdio.h>
//#include<Windows.h>
//void a();
//void b();
//void c();
//int x = 1;
//void main() {
//	int x = 5;
//	printf("在main函数里，位置1，x的值是：%d\n", x);
//	{
//		int x = 7;
//		printf("在main函数里，位置2，x的值是%d\n", x);
//	}
//	printf("在main函数里，位置3，x的值是：%d\n", x);
//	//此行不输入
//	a();
//	b();
//	c();
//	a();
//	b();
//	c();
//	printf("在main函数里，位置4，x的值是:%d\n", x);
//	system("pause");
//	return 0;
//	
//}
//
////自定义函数
//void a() {
//	int x = 25;
//	printf("进入a函数时的值是:%d\n", x);
//	++x;
//	printf("退出a函数时的值是：%d\n", x);
//}
//
//void b() {
//	static int x = 50;
//	printf("进入b函数时的值是:%d\n", x);
//	++x;
//	printf("退出b函数时的值是：%d\n", x);
//}
//
//void c() {
//	static int x = 50;
//	printf("进入c函数时的值是:%d\n", x);
//	x+=10;
//	printf("退出c函数时的值是：%d\n", x);
//}


/*
宏定义的区别
*/

/*
输入长方体的长宽高，写一个函数求长方体体积，以及正、侧、顶，三个面的面
积。
*/

//#include<stdio.h>
//#include<Windows.h>
//int v, sz, sc, sd;              //含义：体积，正面、侧面、底面面积
//void fn(int l, int w, int h);   // l-长；w-宽； h-高
//int main() {
//	int l, w, h;
//	printf("请输入长方体的长（l）：\n");
//	scanf_s("%d", &l);
//	printf("请输入长方体的宽（w）：\n");
//	scanf_s("%d", &w);
//	printf("请输入长方体的高（h）：\n");
//	scanf_s("%d", &h);
//	fn(l, w, h);
//	printf("长方体的体积是：%d\n", v);
//	printf("正面面积是：%d\n", sz);
//	printf("侧面面积是：%d\n", sc);
//	printf("底面面积是：%d\n", sd);
//	system("pause");
//	return 0;
//}
//
//void fn(int a, int b, int c) {
//	v = a * b*c;
//	sz = a * c;
//	sc = b * c;
//	sd = a * b;
//}

/*
输入长方体的长宽高，利用宏定义求长方体体积，以及正、侧、顶，三个面的面
积。
*/

//#include<stdio.h>
//#include<Windows.h>
//#define V(a,b,c) (a)*(b)*(c)          //V 后面不能有“空格”
//#define S(a,b) (a)*(b)
//
//int main() {
//	int l, w, h;
//	int v, sz, sc, sd;
//	printf("请输入长方体的长（l):\n");
//	scanf_s("%d", &l);
//	printf("请输入长方体的宽（w):\n");
//	scanf_s("%d", &w);
//	printf("请输入长方体的高（h):\n");
//	scanf_s("%d", &h);
//	v = V(l, w, h);
//	sz = S(l, h);
//	sc = S(w, h);
//	sd = S(w, l);
//	printf("长方体的体积是：%d\n", v);
//	printf("正面面积是：%d\n", sz);
//	printf("侧面面积是：%d\n", sc);
//	printf("底面面积是：%d\n", sd);
//	system("pause");
//	return 0;
//
//}


/*
编写一个单科成绩分析统计程序。使其能输入 N 个同学的成绩；求平均分，最高
分，最低分；求各分数段人数及求及格率；对成绩降序排列；并要求程序应有友
好的界面，可点菜完成各功能。

即fn.c项目！！！ 注意复习
*/


/*
用指针访问的方式，从键盘输入两个整数，再按照从小到大的顺序输出。
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a, b;
//	int *pa, *pb;
//	pa = &a;
//	pb = &b;
//	printf("请输入两个整数：\n");
//	scanf_s("%d %d", pa, pb);
//	if (*pa < *pb)
//		printf("%4d%4d\n", *pa, *pb);
//	else
//		printf("%4d%4d\n", *pb, *pa);
//}


/*
定义一个字符指针变量，输入一串字符，统计字符串长度。
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char str[50];
//	char *pc;
//	int count = 0;
//	pc = str;   //首地址，第一个元素
//	gets(pc);
//	while (*pc != '\0') {
//		count++;
//		pc++;
//	}
//	printf("字符串的长度是：%d\n", count);
//	system("pause");
//	return 0;
//}

/*
用指针变量作为函数的参数，编写函数实现两个数的交换，并在 main 函数中调
用。
*/

//#include<stdio.h>
//#include<Windows.h>
//void swap(int *, int *);
//int main() {
//	int a, b;
//	printf("请输入两个整数\n");
//	scanf_s("%d %d", &a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//void swap(int *x, int *y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}


/*
编写函数，能将两个字符串合并。利用指针作为函数参数。
*/

//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//void mystrcat(char *, char *);
//int main() {
//	char str1[20], str2[20];
//	printf("请输入一段字符");
//	gets(str1);
//	printf("请输入另一段字符");
//	gets(str2);
//
//	mystrcat(str1, str2);
//	puts(str1);
//	system("pause");
//	return 0;
//}
//void mystrcat(char *s1, char *s2) {
//	while (*(s1) != '\0')
//		*s1++;
//	while (*(s2) != '\0')
//		*(s1++) = *(s2++);
//	*(s1) = '\0';
//}



/*
求20个整数的和，平均数及大于平均数的整数个数
*/

/*
#include<stdio.h>
#include<Windows.h>
int main() {
	int a[20];                   //定义数组 a[20]；
	int max, ave = 0;            //初始化ave，定义max；
	int i, sum = 0, count = 0;   //定义i，初始化sum，count；
	printf("请输入20个整数\n");
	for (i = 0; i < 20; i++) {	 //for循环，使得从键盘初始化a[20]；
		scanf("%d", &a[i]);
		sum += a[i];             //求和--a[20]的相加之和；
	}
	printf("sum为：%d\n", sum);
	ave = sum / 20;              //求平均值ave；
	printf("平均数为%2d\n", ave);
	for (i = 0; i < 20; i++)      //循环判断是否a[i]>ave；
		if (a[i] > ave)
			count++;		      //如果是>ave，累计一个数
	printf("大于平均数的个数为%2d\n", count);
	system("pause");
	return  0;
}*/

/*
#include<stdio.h>

int main()
{
	int i, j, Light_amount, Human_amount;
	int a[1000];
	scanf("%d%d", &Light_amount, &Human_amount);
	for (i = 1; i < 1000; i++)
	{
		a[i] = 1;
	}
	for (i = 2; i <= Human_amount; i++)
	{
		for (j = i; j <= Light_amount; j += i)
		{
			if (a[j] == 1)
				a[j] = 0;
			else
				a[j] == 1;
		}
	}
	for (i = 1; i <= Light_amount; i++)
	{
		if (a[i] == 1)
			printf("%d\n", i);
	}
}*/

//#include<stdio.h>
//int main(void)
//{
//	int i,j,Light_amount,Human_amount;
//	int a[1000];
//	for(i=1;i<1000;i++)
//	{
//		a[i]=1;
//	}
//	scanf("%d%d",&Light_amount,&Human_amount);
//	for(i=2;i<=Human_amount;i++)
//	{
//		for(j=i;j<=Light_amount;j+=i)
//		{
//			if(a[j]==1)
//			{
//				a[j]=0;
//				continue;
//			}
//			if(a[j]==0)
//			{
//				a[j]=1;
//				continue;
//			}
//		}
//	}
//	for(i=1;i<=Light_amount;i++)
//	{
//		if(a[i]==1)
//			printf("%d ",i);
//	}
//}


//#include<stdio.h>
//#include<Windows.h>
//
//int main() {
//	char m;
//	printf("请输入一个字母，我来判断他是不是大写字母\n");
//	scanf_s("%c", &m);
//	if (m>=64&&m<=90)
//	{
//		printf("%c是大写字母\n", m);
//	}
//	else {
//		printf("%c不是大写字母\n", m);
//	}
//	system("pause");
//	return 0;
//}



#include <stdio.h>
#include<Windows.h>
void swap(int *pa, int *pb);
int main()
{
	int a,b;
	printf("input a, b:");
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}

void swap(int *pa, int *pb)
{
	int t;
	t = *pa; *pa = *pb; *pb = t;
}










