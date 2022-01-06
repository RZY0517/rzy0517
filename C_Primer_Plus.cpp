//  一、EOF值    输入什么，输出什么，此编译器Ctrl+D无效    Ctrl+Z有效 
#include<stdio.h>
#include<Windows.h>
int main() {
	int ch;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}


	system("pause");
	return 0;
}