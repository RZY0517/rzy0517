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
int main() {
	int MAX(int x, int y);
	int a, b, z;
	printf("Please enter two numbers:\n");
	scanf_s("%d %d", &a, &b);
	z = MAX(a, b);
	printf("MAX=%d\n", z);

	system("pause");
	return 0;
}
int MAX(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;      //����ֱ��д�ɣ�return ��x>y?x:y��);
}