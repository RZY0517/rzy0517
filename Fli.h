#pragma once//������TH5.cpp
#include<stdio.h>
void ppp()//��7.2
{
	printf("this is a test\n");
}

int MAX(int x, int y)//��7.2
{
	int z;
	z = x > y ? x : y;
	return z;      //����ֱ��д�ɣ�return ��x>y?x:y��);
}


float add(float x, float y)//��7.4
{
	float z;
	z = x + y;
	return z;
}

int MAX4(int a, int b, int c, int d)
{
	int MAX2(int x, int y);
	int m;
	m = MAX2(a, b);
	m = MAX2(m, c);
	m = MAX2(m, d);

	return m;
}

int MAX2(int x, int y)
{
	return (x > y ? x : y);
}

int MAX5(int a, int b, int c, int d, int e)//��7.5
{
	int MAX2(int x, int y);//����2�ַ�ʽ�򻯣�ʡ�Ա���t
	/*int t;
	t = MAX2(a, b);
	t = MAX2(t, c);
	t = MAX2(t, d);
	t = MAX2(t, e);
	return t;*/
	//return (MAX2(MAX2(MAX2((a, b), c), d), e));//������ʹ��
	return MAX2(MAX2(MAX2(MAX(a, b), c), d), e);
}


int age(int n)       //��7.6
{
	int c;
	if (n == 1)
		c = 10;
	else
		c = age(n - 1) + 2;

	return c;
}



int fac(int n)                  //��7.7   n!=(n-1)!*n     (n>1ʱ)
{
	int s;
	if (n < 0)
		printf("Your enter have error!\n");
	else if (n == 0 || n == 1)
		s = 1;
	else
		s = fac(n - 1)*n;
	return s;
}

int addn(int n)//��7.7.1   ��1��n�ĺ�
{
	int f=0;
	if (n <= 0)
		printf("Your enter have error!\n");
	else if (n == 1)
		f = 1;
	else
		f = ((1 + n)*n )/ 2;

	return f;
}



void swap(int *a, int *b)
{                //���д��*temp���������Ϊ*a=2���Զ����ʼ��Ϊ2����ʼ��Ϊʲô�����ԣ�
				 //a�Ǹ�int���ͣ���tempδ��ֵ��ʼ�������Բ���д��*temp���������----��P225
	int temp;    //����2��4
	temp = *a;   //��ʱpoint1��a��ָ��2��ponit2��b��ָ��4��
	*a = *b;     //����2��4�ĶԵ���������2��4��ַ�ĶԵ���������*a,������ֱ��дa;(*a������2����a�������2�ĵ�ַ��
	*b = temp;   //���ο�����δ�����*a��*b��
}                //main�����н�ʵ�Σ�point1��point2����ָ����������ݵ�swap�У���Ϊ�β�*a��*b��
                 //Ŀ����Ϊ�˽���a��b��ָ��ֵ������ֱ�ӽ���*a��*b����

void exchange(int *q1, int *q2, int *q3)
{
	if (*q1 < *q2)
		swap(q1, q2);
	if (*q1 < *q3)
		swap(q1, q3);
	if (*q2 < *q3)
		swap(q2, q3);
}