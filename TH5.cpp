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



#include<stdio.h>
#include<Windows.h>
#include<test1.h>    //test1ͷ�ļ��а�����MAX������ppp����
int main() {
	//int MAX(int x, int y);
	int a, b, z;
	printf("Please enter two numbers:\n");
	scanf_s("%d %d", &a, &b);
	z = MAX(a, b);
	printf("MAX=%d\n", z);
	ppp();
	system("pause");
	return 0;
}
