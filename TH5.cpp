//������Fli.h(Function Library).

//7.2----------------��������������Ҫ���������ֵ�ϴ��ߡ�Ҫ���ú������ҵ�������
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
//#include<test1.h>    //test1ͷ�ļ��а�����MAX������ppp����
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



//��7.4----------------��������ʵ������һ�������������֮�͡�

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


//��7.5----------------�����ĸ������ҳ������������ú�����Ƕ����ʵ�֡�
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


//#include<stdio.h>//��7.6�����ĵݹ����
//#include<Windows.h>//��5��ѧ���ȵ�4��ѧ����2�꣬��4��ѧ���ȵ�3��ѧ����2�ꡭ����2��ѧ���ȵ�1��ѧ����2�ԣ���1��ѧ��10�ꡣ
//#include<test1.h>//��Ҫ֪����5��ѧ�������꣬��Ҫ�Ȼ��ݵ���1��ѧ����Ȼ���ɵ�1��ѧ�����Ƶ���5��ѧ����
//
//int main()
//{
//	int n,s;
//	printf("����֪���ڼ���ѧ�������䣿(1-5)\n");
//	scanf_s("%d", &n);
//	s = age(n);
//	printf("��%d��ѧ��������Ϊ%d\n", n, s);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>//��7.7 �õݹ鷽����n!��������>13�Ľ׳˽���������޸�Ϊfloat��double���͡�
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

//��7.7.1��1���ĺͣ��ú����ݹ鷽����
//#include<stdio.h>
//#include<Windows.h>
//#include<Fli.h>
//int main()
//{
//	int n, F;
//	printf("Please one number:\n");
//	scanf_s("%d", &n);
//	F = addn(n);
//	printf("1-%d֮��Ϊ��%d\n", n, F);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<Windows.h>                         //Hanoi���㷨     ����Ų������
//void hanoi(int i, char A, char B, char C);
//void move(char x, char y);
//int main(void)
// {
//	int n;
//	printf("������n��ֵ��");
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
//		         hanoi(i - 1, A, C, B);   //�����ݹ����
//		         move(A, C);
//		         hanoi(i - 1, B, A, C);
//		 }
//	 }
// void move(char x, char y)
// {
//	     printf("%c ����> %c \n",x, y);
// }


//ָ�������

//1.ͨ��ָ������������ͱ���
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int a = 100, b = 200,c=3,d=4,e=5;
//	int *P1 = &a, *P2 = &b,*P3,*P4,*P5=&b;
//	P3 = &c;
//	P4 = &d;
//	*P5 = e;//�����*P5ֻ�ǳ�ʼ�������ѣ���Ӱ����������
//	//P1 = &a;
//	//P2 = &b;
//	//printf("%o", P1);//���ָ�����P1��ֵ����ΪP1ָ����a,���������a�ĵ�ַ����&a��
//	//*P1!=&a;��Ϊa�ĵ�ַ�Ǹ���ָ�����P1,�����Ǹ���*P1��������a����
//	printf("a=%d,b=%d,c=%d,d=%d\n", a, b,c,d);
//	printf("*P1=%d,*P2=%d\n", *P1, *P2);
//	printf("*P3=%d,*P4=%d\n", *P3, *P4);
//	*P1 = 9;//��ʱ������9����P1��ǰ��ָ��ı�����a����������P1ָ��a,�����൱�ڰ�9��ֵ��a����a=1��
//	printf("*P1=%d,a=%d\n", *P1,a);
//	printf("*P5=%d\n", *P5);
//	
//	//printf("P1=%d,P2=%d\n", P1, P2);//���P1��a��ַ��P2��b��ַ���ĵ�ַ��Ϣ��
//
//	system("pause");
//	return 0;
//}


//#include<stdio.h>           //��������ֵ��ʹ��P1�����ֵ��P2����С��
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
//		swap(P1, P2);//������swap(int *a, int *b)������ָ����*a��*b��������Ϊʲô������д*P1��*P2
//	}
//	printf("max=%d,min=%d\n", a, b);
//	//printf("*P1=%d,P1=%d", *P1, P1);//P1ֻ��ָ���ƺţ�*P1����ָ���ƺ������
//	system("pause");
//	return 0;
//}

//#include<stdio.h>          //ͬ��
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
//		swap(P_1, P_2);//P_1ָ��a�ĵ�ַ��P_2ָ��b�ĵ�ַ���жԵ���
//					   //�Ե����֮�����P_1ָ��b�����ݣ�P_1ָ��a������ 
//	}
//	printf("max=%d,min=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//void swap(int *P1, int *P2)//Ϊ�˸ı�a��b��ֵ��Ҫ����a��b���仯�Ľ��
//{
//	int temp;
//	temp = *P1;
//	*P1 = *P2;
//	*P2 = temp;
//}

//�ڶ���
//��8.1  ͨ��ָ������������ͱ���
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a = 100, b = 10;
//	int *p1, *p2;                            //p1,p2�������ƺţ�*p1��*p2�Ƿ�������ÿ�
//                                           //*����ʾָ��*p1��ʾ��ָ�����p1��ָ��ı�������Ҳ���Ǳ���a
//	p1 = &a;                                 //�ѱ���a�ĵ�ַ������ָ�����p1
//	p2 = &b;                                 //�ѱ���b�ĵ�ַ������ָ�����p2
//	printf("a=%d,b=%d\n", a, b);             //�������a,b��ֵ
//	printf("*p1=%d,*p2=%d\n", *p1, *p2);     //�������a,b��ֵ������*p1��*p2�����a��b��ֵ��*p1��*p2��ָ������������ab��ֵ��
//	printf("p1=%d,p2=%d\n", p1, p2);       //���a��b�ĵ�ַ��û�д�*���������Ǵ����ָ�루��ַ����������ָ�������
//
//	system("pause");
//	return 0;
//}


//��8.2   ����a,b�������������Ⱥ��С��˳�����a��b
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
//		//p1 = p2;        //����ָ��ĵ�ַ���н���
//		//p2 = p;
//		p1 = &b;
//		p2 = &a;
//	}
//	printf("a=%d,b=%d\n", a, b);
//	printf("max=%d,min=%d\n", *p1, *p2);//��ָ��ĵ�ַ���ˣ�Ҳ����ָ���ֵ���ˡ�
//
//	system("pause");
//	return 0;
//}


//��8.3  ����a,b�������������Ⱥ��С��˳�����a��b����ʵ�ַ�ʽ����ָ�������Ϊ����������   To ��
#include<stdio.h>
#include<Windows.h>
#include<Fli.h>   //�Լ�д��ͷ�ļ����Լ�����ĺ����������ͷ�ļ������������ֱ���ü��ɣ�
int main() {
	int a, b;
	int *point1, *point2;    //�б���a,b�����Զ�������ָ����������a��b
	printf("Please enter two numbers:\n");
	scanf_s("%d%d", &a, &b);
	point1 = &a;            //point1ָ��a��ָ����a�ĵ�ַ��
	point2 = &b;            //point2ָ��b��ָ����b�ĵ�ַ��
	if (a < b)
		swap(point1, point2);    //���a<b����ִ��swap����
	printf("max=%d,min=%d\n", a, b);

	system("pause");
	return 0;
}


////��8.5 ��������������˳���ɴ�С������ú���ʵ�֡�
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
















