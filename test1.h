#pragma once
void ppp()
{
	printf("this is a test\n");
}

int MAX(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;      //或者直接写成（return （x>y?x:y）);
}

