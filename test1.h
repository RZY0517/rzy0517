#pragma once
void ppp()//例7.2
{
	printf("this is a test\n");
}

int MAX(int x, int y)//例7.2
{
	int z;
	z = x > y ? x : y;
	return z;      //或者直接写成（return （x>y?x:y）);
}


float add(float x, float y)//例7.4
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

int MAX5(int a, int b, int c, int d, int e)
{
	int MAX2(int x, int y);//以下2种方式简化，省略变量t
	/*int t;
	t = MAX2(a, b);
	t = MAX2(t, c);
	t = MAX2(t, d);
	t = MAX2(t, e);
	return t;*/
	//return (MAX2(MAX2(MAX2((a, b), c), d), e));//不建议使用
	return MAX2(MAX2(MAX2(MAX(a, b), c), d), e);
}
