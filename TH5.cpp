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















