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
#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 100, b = 200,c=3,d=4,e=5;
	int *P1 = &a, *P2 = &b,*P3,*P4,*P5=&b;
	P3 = &c;
	P4 = &d;
	*P5 = e;//�����*P5ֻ�ǳ�ʼ�������ѣ���Ӱ����������
	//P1 = &a;
	//P2 = &b;
	//printf("%o", P1);//���ָ�����P1��ֵ����ΪP1ָ����a,���������a�ĵ�ַ����&a��
	//*P1!=&a;��Ϊa�ĵ�ַ�Ǹ���ָ�����P1,�����Ǹ���*P1��������a����
	printf("a=%d,b=%d,c=%d,d=%d\n", a, b,c,d);
	printf("*P1=%d,*P2=%d\n", *P1, *P2);
	printf("*P3=%d,*P4=%d\n", *P3, *P4);
	*P1 = 9;//��ʱ������9����P1��ǰ��ָ��ı�����a����������P1ָ��a,�����൱�ڰ�9��ֵ��a����a=1��
	printf("*P1=%d,a=%d\n", *P1,a);
	printf("*P5=%d\n", *P5);
	
	//printf("P1=%d,P2=%d\n", P1, P2);//���P1��a��ַ��P2��b��ַ���ĵ�ַ��Ϣ��

	system("pause");
	return 0;


}






