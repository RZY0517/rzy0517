/*
�������Կα����μ���������
ctrl+K+C ��ѡ����ע�͵���
ctrl+K+U ��ע���н��ע�ͣ�
tab���ɴ�����������ƶ�����д��������У���
*/


/*��һ����������*/

//+-*/������

/*#include<stdio.h>
#include<Windows.h>
int main() {
	int a, b;
	char i;
	printf("������һ�������");
	scanf("%c", &i);
	printf("��������������");
	scanf("%d%d", &a, &b);
	if (i == '+') {
		printf("���Ϊ��%d", a + b);
	}
	else if (i == '-') {
		if (a > b) {
			printf("���Ϊ��%d", a - b);
		}
		else {
			printf("���Ϊ��%d", b - a);
		}
	}
	else if (i == '*') {
		printf("���Ϊ��%d", a*b);
	}
	else {
		printf("���Ϊ��%d", a / b);
	}
	system("pause");
	return 0;
}*/
/*
pow�����η�
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
//	c = pow(a, b);      //a��b�η�
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

/*
% *d���������ԣ�
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a=0, b=0, c=0;
//	printf("��Ϊa��b��c��ֵ");
//	scanf_s("%d%*d%d", &a, &b);    //% *d��������м����ֵ�����ԣ�����
//	printf("%d%d%d", a, b, c);     
//	system("pause");
//	return 0;
//}

/*
��������F1��F2
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

//#include<stdio.h>              // ˵�������'%'��'/'
//#include<Windows.h>
//int main() {
//	//float f = 1.0f/3*3;      //1.0��1������1.0/2==0.5 �������㣻1/2==0��Ϊ1/2��0.5��ֻȡ����λ
//	//printf("%f", f);
//	int a = 6, b = 20;
//	printf("%d\n", b%a);      //ȡ��%��ʽa%b=a-(a/b)*b;a/bȡ��
//	system("pause");
//	return 0;
//}

/*

�������ȼ���%��*��/��+��-��=

*/
/*
�������٣�++x��//x������1��Ȼ��������㡮+����ǰ����+1��
	  �ڣ�x++��//x�Ȳ������㣬��+1     ��+���ں�����㣻

�Լ����٣�--x://x���Լ�1��Ȼ���������  ��-����ǰ����-1��
	  �ڣ�x--://x�Ȳ������㣬��-1
*/

//#include<stdio.h>
//int main() {
//	int a = 1, b = 0;
//	//printf("%d\n", ++a);//a+1���������
//	//printf("%d\n", a++);//a���������+1
//	//b = a++;            //a=2,b=1(�ȼ��ڣ�b=a;a=a+1)
//	b = ++a;              //a=2,b=2(�ȼ��ڣ�a=a+1;b=a)
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	getchar();
//}


//#include<stdio.h>                     //ȡ����ʮ����λ
//#include<Windows.h>
//int main() {
//	int a, x, y, z;
//	printf("������һ��3λ������\n");
//	scanf_s("%d", &a);
//	x = a / 100;        //x��ֵ��λ��
//	y = a / 10 % 10;    //y��ֵʮλ��
//	z = a % 10;         //z��ֵ��λ
//	printf("%2d%2d%2d", x, y, z);
//	system("pause");
//	return 0;
//}



/*
�������ʽ   �� : //��?��ǰ����Ҫ�жϵ���������Ϊ�棬���ء�����֮ǰ�ģ���Ϊ�٣����ء�����֮���
*/
//#include<stdio.h>
//int main() {
//	int a = 9, b = 0;
//	b = (a > 10 ? 888 : 666);//a>10 Ϊ�٣�����666
//	printf("b=%d\n", b);
//	b = (a > 5 ? 888 : 666); //a>5 Ϊ�棬����888
//	printf("b=%d\n", b);
//	getchar();
//	return 0;
//}

/*
����������ͱ��ʽ   //��ʽ�����ʽ1�����ʽ2�����ʽ3
*/
//a=3*5,a*4  back 60
//x=(a=10,b=100,c=50) back 50
//y=(i++,j--,k+2) bcak k+2
//b=(a=4,3*4,a*2) back 8

/*
ǿ��ת���������ͣ�(����˵����������||����||���ʽ
��double��a;
(int)(x+y);
(float)(5%3);
*/

/*
���������    sizeof(����||������||����||���ʽ��
*/
//#include<stdio.h>       //ͨ��sizeof����C���Գ�������������ռ�ֽ���
//int main() {
//	printf("sizeof(char)=%d\n", sizeof(char));
//	printf("sizeof(int)=%d\n", sizeof(int));
//	printf("sizeof(float)=%d\n", sizeof(float));
//	printf("sizeof(double)=%d\n", sizeof(double));
//	getchar();
//	return 0;
//}


/*
�ж�һ�����Ƿ��ܱ��ڶ���������     //�����ܱ�С������
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a, b;
//	printf("������������");
//	scanf_s("%d %d", &a, &b);
//	if (a%b == 0)
//		printf("%d�ܱ�%d����\n", a, b);
//	else
//		printf("%d���ܱ�%d����\n", a, b);
//	system("pause");
//	return 0;
//}

/*
��if else���    �ӵ�һ��else��ʼ����Ѱ��Ԥ����Ե�if���
*/
//#include<stdio.h>               //�жϷ����ȼ�
//#include<Windows.h>
//int main() {
//	int s;
//	printf("���������\n");
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
ֵ��˼������ϰ��   ���������⡯�����ж����������⡯
*/

//#include<stdio.h>                  //������ 03.31��ҵ     ##������switch����Ż�������
//#include<Windows.h>
//#define h92 5.57
//#define h95 5.95
//#define h97 6.12
//#define mode1 0.02
//#define mode2 0.05
//int main() {
//	int date1, date2;//�����������
//	float L;         //���������
//	printf("������������ͣ���92��95,97\n");
//	scanf_s("%d", &date1);
//	printf("�����������\n");
//	scanf_s("%f", &L);
//	printf("��������ͷ�ʽ����1���ֶ�����2���Զ���\n");
//	scanf_s("%d", &date2);
//	if (date2 == 1) {
//		if (date1 == 92)
//			printf("\n���ͽ��Ϊ��%.2f", (L*h92*(1 - mode1)));
//		else if (date1 == 95)
//			printf("\n���ͽ��Ϊ��%.2f", (L*h95*(1 - mode1)));
//		else
//			printf("\n���ͽ��Ϊ��%.2f", (L*h97*(1 - mode1)));
//	}
//	else {
//		if(date1==92)
//			printf("\n���ͽ��Ϊ��%.2f", (L*h92*(1 - mode2)));
//		else if (date1 == 95)
//			printf("\n���ͽ��Ϊ��%.2f", (L*h95*(1 - mode2)));
//		else
//			printf("\n���ͽ��Ϊ��%.2f", (L*h97*(1 - mode2)));
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//#include<Windows.h>
//int main() {
//	int a, b, c;    //abc��������
//	int temp;       //temp���ڽ����õ���ʱ����
//	double p, area = 0; //p���ں��׹�ʽ��area�������
//	//���������ߵı߳�
//	printf("�����������߳���\n");
//	scanf_s("%d%d%d", &a, &b, &c);
//	//������С����
//	if (a > b) { temp = a; a = b; b = temp; }
//	if (a > c) { temp = a; a = c; c = temp; }
//	if (b > c) { temp = b; b = c; c = temp; }
//	printf("%d %d %d\n", a, b, c);      //ʹ��a<b<c;
//	//�ж��Ƿ񹹳������Σ������������ͣ��ȱߣ�������ֱ�ǣ�һ�㣩
//	if (a + b > c) {
//		//������������׹�ʽ
//		p = (double)(a + b + c) / 2;
//		area = sqrt(p*(p - a)*(p - b)*(p - c));   //sqrt ��Ǹ�ʵ����ƽ����
//		printf("����ǣ�%.2f\n", area);
//		//�ж�����
//		if (a == b && a == c) {
//			printf("�ǵȱ�������\n");
//		}
//		else if (a == b || a == c || b == c)
//			printf("�ǵ���������\n");
//		else if (c*c == (a*a + b * b))
//			printf("��ֱ��������\n");
//		else
//			printf("��һ��������\n");
//	}
//	else
//		printf("������������\n");
//	system("pause");
//	return 0;
//}

/*
switch ���      ���е�switch��䶼������if else���棬������������if else���Ա�switch���棻
*/
//#include<stdio.h>                      //�ж���ż��
//#include<Windows.h>
//int main() {
//	int a;
//	printf("������һ��������\n");
//	scanf_s("%d", &a);
//	switch (abs(a % 2)) {        //abs()ȡ����ֵ
//	case 0:printf("ż��\n"); break;
//	case 1:printf("����\n"); break;
//	default:printf("error\n");
//	}
//	system("pause");
//	return 0;
//}



/*
������----��ʮ��
*/



//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i;
//	int sum = 0;
//	//��1�ۼӵ�100��
//	/*for (i = 1; i <= 100; i++)
//		sum = sum + i;
//	printf("��1��100���������ۼӣ�����ǣ�%d\n", sum);*/
//	//��1��90�������ͣ�
//	for (i = 1; i <= 90; i=i+2)
//		sum = sum + i;
//	printf("��1��90���������ۼӣ�����ǣ�%d\n", sum);
//
//	system("pause");
//	return 0;
//}


/*
�ҳ��ƺ�
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
//					printf("���³����ĳ��ƺ�Ϊ��%d\n", k);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


/*
һ��100Ԫ��ֽ�ң�Ҫ��1Ԫ��2Ԫ��5Ԫ����Ǯ���������ܳ���50��
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k, count = 0;//1Ԫ����i��2Ԫ����j��5Ԫ����k��
//	for (i = 0; i <= 50; i++) {
//		for (j = 0; j <= 50; j++) {
//			for (k = 0; k <= 50; k++) {
//				if ((i + j + k) == 50 && (i + 2 * j + 5 * k) == 100) {
//					count++;
//					printf("��%2d�ֻ����ǣ�1Ԫ��%2dö��2Ԫ��%2dö��5Ԫ��%2dö��\n", count, i, j, k);
//				}
//			}
//		}
//	}
//	printf("һ����%d�ֻ���\n", count);
//	system("pause");
//	return 0;
//}

/*
while���
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
//	printf("��1��100�ۼ�֮��:%d\n", sum);
//	system("pause");
//	return 0;
//}

/*
��ţ����
����ʣ�µĳ��ȣ�x2
����ʣ�µĳ��ȣ�x1
ѭ������day��ʾ����
����ʣ�µ���ͳ���=������ʣ�µĳ���+1��*2
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
//	printf("��͵ĳ���Ϊ��%d\n", x2);
//	system("pause");
//	return 0;
//}

/*
ˮ�ɻ�����ָһ����λ�������λ���������͵��ڸ�������
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
//			printf("ˮ�ɻ�����%2d\n", n);
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
//	printf("��1��100���ۼӺͣ�%d\n", sum);
//	system("pause");
//	return 0;
//}

/*
����˹̹��������
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i = 1;
//	do {
//		i++;
//	} while (!((i % 2 == 1) && (i % 3 == 2) && (i % 5 == 4) && (i % 6 == 5) && (i % 7 == 0)));
//	printf("������Ϊ��%d\n", i);
//	system("pause");
//	return 0;
//}

/*
����5Ԫ1ֻ��ĸ��3Ԫ1ֻ��С��1Ԫ3ֻ
100Ԫ��100ֻ��
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k;
//	for (k = 0; k <= 100; k=k+3) {
//		for (j = 0; j <= 33; j++) {
//			i = 100 - k - j;
//			if ((i * 5 + j * 3 + k / 3) == 100 && i >= 0) {
//				printf("����%dֻ��ĸ��%dֻ��С��%dֻ\n", i, j, k);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


/*
ѭ��Ƕ��
*/

//#include<stdio.h>           //5*5�ġ�*������
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
�����������������������һ���Ȳ����У�����4��������ӵ�26
��˵�880
������������Ϊǰ4��ĵȲ����е�ǰ20��
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
ͳ�Ʒ���ĸ����
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
һ������Ϊ139m�Ĳ��ϣ���Ҫ�سɳ���Ϊ19m��23m�Ķ���
�����ֶ��ϸ��ض��ٸ�ʱʣ��Ĳ�������
*/

//#include<stdio.h>
//#include<Windows.h>
//#define len 139
//int main() {
//	int i, j, mini, minj, min;//i��19m�ģ�j��23m�ģ�
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
ѭ���ۺ�Ӧ��ʵ����
ƹ�������
���裺A����i��B����j��C����k
i��j��k�ֱ������X,Y,Z
�ж϶��������߼������ǣ�
i��j��k������ȣ�i���ܵ���X��k���ܵ���XheZ
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
��ӡ������
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int N, i, j;
//	printf("������������");
//	scanf_s("%d", &N);
//	for (i = 1; i <= N; i++) {
//		for (j = 1; j <= N - i; j++) {        //��ӡ�ո�ʹ�ӡ*�ǲ��й�ϵ
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
�����к�Լ����ÿ�����10��Ԫ
�ҵ�һ�����1��Ǯ���ڶ������2��Ǯ�����������4��Ǯ��ÿ����ǰһ���������
�ʣ�30���׸����Ҷ���Ǯ���Ҹ��˼׶���Ǯ
*/


//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	float a, b, i, c = 0.01;
//	a = 100000 * 30;          //a�Ǽ׸��ҵ���Ǯ��
//	b = 0.01;                 //b���ҵ�һ����׵�Ǯ��
//	for (i = 2; i <= 30; i++) {
//		c = c * 2;            //c��ʾÿ����ǰһ�������
//		b = c + b;            //b+c�ǽ���ļ�������ģ�����ĿǰΪֹ��
//	}
//	printf("�׸�����%.2f,�Ҹ��˼�%.2f", a, b);
//	system("pause");
//	return 0;
//}

/*
���˼�ָ�����
��30�ˣ������ˣ�Ů�˺�С��
��һ�ҷ��ݳԷ�����50���
ÿ�����˻�3���Ů�˻�2���ÿ��С����1���
�ʣ����ˣ�Ů�˺�С�����м��ˣ�
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i, j, k;//i�����ˣ�j��Ů�ˣ�k��С��
//	for (i = 0; i <= 16; i++) {
//		for (j = 0; j <= 25; j++) {   //25Ҳ����д�ɣ�50-i*3��/2
//			k = 30 - i -j;
//			if (i * 3 + j * 2 + k == 50) {
//				printf("������%2d��Ů����%2d��С����%2d\n", i, j, k);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

/*
����һ��ѧ���ĳɼ����ҳ���߷�
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a, max = 0;
//	int i;
//	for (i = 1; i <= 10; i++) {
//		printf("�������%d��ѧ���ĳɼ���\n", i);
//		scanf_s("%d", &a);
//		if (max < a)
//			max = a;
//
//	}
//	printf("��߷���%d\n", max);
//	system("pause");
//	return 0;
//}


//#include<windows.h>                   //����̰����
//#include<conio.h>
//#include<stdio.h>
//#define Width 45///���Ժ궨���ͼ��С
//int main()
//{
//	srand((unsigned)malloc(1));//��ʼ�����������
//	do///���¿�ʼ��ֱ����һ��ѭ��
//	{
//		int hX = Width / 2, hY = Width / 2, len = 4, i = 0, map[Width * Width] = { 0 };//ͷ���꣬�߳���ѭ����������ͼ��-1:ʳ��;0:�հ�;>0:����
//		for (i = 0; i < Width; i += 2)///������ͼԪ�أ�-2:ǽ
//			map[i] = map[Width * Width - 1 - i] = map[i * Width] = map[i * Width + Width - 1] = -2;//ʹ���ܵ�ǽ����һ��ֲ�
//		char c = 'd', cl = 3, deaw[Width * Width * 2 + 1] = { 0 };//��ʼ�������뻺�棬���ƻ���
//		sprintf_s(deaw, 32, "mode con: cols=%d lines=%d", Width * 2, Width);
//		system(deaw);//�޸Ŀ���̨���ڴ�С
//		for (int num = 3; num; num--)///���ɶ��ʳ�num��������
//		{
//			do i = rand() % (Width * Width);
//			while (map[i]);
//			map[i] = -1;
//		}
//		for (system("title �÷�:0"); 1; Sleep(100))///��ʼ���Ʒְ壬�ӳ�
//		{
//			if (_kbhit() && (cl = _getch()))//�ж��Ƿ�����
//				switch (cl)
//				{
//				case 'a':case 'A':if (c != 'd')c = 'a'; break;//�ж���ԭ�����Ƿ��ͻ
//				case 'd':case 'D':if (c != 'a')c = 'd'; break;
//				case 's':case 'S':if (c != 'w')c = 's'; break;
//				case 'w':case 'W':if (c != 's')c = 'w'; break;
//				case ' ':_getch(); break;///�����������ո���ͣ
//				case 27:exit(0); break;///����������Esc�˳�
//				}
//			switch (c)
//			{
//			case 'a':hX -= hX > 0 ? 1 : 1 - Width; break;//����ͷ����
//
//
//			case 'd':hX += hX < Width - 1 ? 1 : 1 - Width; break;
//			case 's':hY += hY < Width - 1 ? 1 : 1 - Width; break;
//			case 'w':hY -= hY > 0 ? 1 : 1 - Width; break;
//			}
//			if (map[hY * Width + hX] > 1 || map[hY * Width + hX] == -2) break;//�ж��Ƿ�Ե��Լ�
//			if (map[hY * Width + hX] == -1)//�ж��Ƿ�Ե�ʳ��
//			{
//				len++;
//				do i = rand() % (Width * Width);
//				while (map[i]);//��ֹʳ��λ�ø�����
//				map[i] = -1;
//				sprintf_s(deaw, 32, "title �÷�:%d", len - 4);///�������Ʒְ�
//				system(deaw);
//			}
//			else for (i = 0; i < Width * Width; i++)//ȫ������ֵ-1
//				if (map[i] > 0)map[i] -= 1;
//			map[hY * Width + hX] = len;//��ͷ��ֵ
//			for (i = 0; i < Width * Width * 2; i++)//���»��ƻ���
//			{
//				if (map[i / 2] == 0)deaw[i] = ' ';
//				else if (map[i / 2] > 0)deaw[i] = (i & 1) ? ')' : '(';
//				else if (map[i / 2] == -2)deaw[i] = (i & 1) ? ']' : '[';///������ǽ
//				else deaw[i] = '0';
//			}
//			system("cls");//����
//			printf(deaw);//��ӡ
//		}
//		sprintf_s(deaw, 48, "title GameOver!�÷�:%d ���ո�����¿�ʼ", len - 4);
//		system(deaw);
//	} while (_getch() == ' ');///�ո������
//}

/*
67��̰���ߣ���ԭ�е�47��̰���������ƺ���չ���ܣ�
1.�Զ����ͼ��С	(+2 lines)(4,14)
�궨��ʵ��
2.��ͼԪ��--ǽ		(+1 line)(58)
��ԭ�еĻ��������ӹ���ʵ��Ҳ����
3.ǽ���Զ���ֲ�	(+2 lines)(11-12)
Ҳ��ֹ������
4.�����ɶ��ʳ��	(+6 lines)(16-21)
��������
5.���¿�ʼ			(+5 lines)(8-9,64-66)
ֱ����һ��ѭ������β�Ӹ�������ʾ
6.��ͣ���˳�		(+2 lines)(31-32)
�����жϾ���
7.�Ʒְ�			(+2 lines)(48-49)
�ڱ�������ʵ��
*/

/*
����1~20֮��ļ���֮�ͺ�ż��֮��
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i = 1;
//	int s1 = 0, s2 = 0;  //s1�������ͣ�s2��ż����
//	while (i <= 20) {
//		if (i % 2 == 1)
//			s1 += i;
//		else
//			s2 += i;
//		i++;
//	}
//	printf("��������%d\n", s1);
//	printf("ż������%d\n", s2);
//	system("pause");
//	return 0;
//}

/*
�ǹȲ���
�θ�һ����Ȼ������Ϊż������2����Ϊ������*3+1��
�õ�һ���µ���Ȼ����������ķ���������㣬
���ɴκ�õ��Ľ����ȻΪ1
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a;    //��ʼ��Ȼ��
//	printf("��������һ����Ȼ��");
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
��һ��С���ӣ��ӳ��������������ÿ���¶���һ��С���ӣ�
С���ӳ����������º�ÿ��������һ��С���ӣ�
�������Ӷ���������20������ÿ���µ����ӵ�����Ϊ���٣�
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	//���ӵ�������a�����ϸ��£���b(�ϸ��£�,r(���£�
//	int a = 0, b = 1, r;
//	int i;    //i���·�
//	printf("��1���µ�����������1��\n");
//	for (i = 2; i <= 20; i++) {
//		r = a + b;
//		printf("��%d���µ�����������%d��\n",i, r);
//		a = b;
//		b = r;
//	}
//	system("pause");
//	return 0;
//}


/*
�����롣Ϊʹ���ı��ܣ�������һ�����ɽ���ת�������룬�ձ����ٰ�Լ���Ĺ��ɽ������ԭ�ġ�
���԰����µĹ��ɽ����ı�����룺����ĸA�����ĸE��a���e����������ĵ�4����ĸ��W���A��X���B��Y���C��Z���D��
��ĸ����������ת��������ĸ�ַ����䡣
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
ͳ��һ��������λ��
�Ӽ�������һ��������ͳ�Ƹ�����λ��
���磬12345�����5������-99������2
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a;     //���������	��
//	int count = 0; //������λ��
//	printf("��������������\n");
//	scanf_s("%d", &a);
//	do {
//		a = (a - a % 10) / 10;
//		count++;
//
//	} while (a != 0);
//	printf("����������%dλ\n", count);
//	system("pause");
//	return 0;
//}


/*
�������飬
�������飬
�������
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
���С����Χ��һȦ���ǹ�
�ӵ�һ���������С��������10��14��08��22��16��
Ȼ�����е�С��ͬʱ�����е��Ƿ�һ����ұߵ�С��
����Ϊ������������ʦҪһ����ٷ֡�
�ʾ����������κ������������һ���ࣿÿ�˸����ٿ飿
j[i]:��i��С�����ǹ���
k[i]:��i��С���ɷ��ǹ�����һ��
count��ѭ������
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
//	printf("����%d�ε�ѭ����������������ǹ�����%d\n", count, j[3]);
//	system("pause");
//	return 0;
//}


/*
������ɸ����洢��һ��������ó�������������һ���������������Ƿ���
���������ȵ���������������������е�λ�ã���û���������û���ҵ����ݣ���
*/

//#include<stdio.h>
//
//int main() {
//	int i=0;
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int s,flag=0;
//	printf("����������Ҫ���ҵ�����\n");
//	scanf_s("%d", &s);
//	
//	for (i = 0; i <= 10; i++) {
//		if (a[i] == s) {
//			printf("���ҵ�����%dλ\n", i);
//			flag++;
//		}
//	}
//	if (flag == 0)
//		printf("û���ҵ�����\n");
//	system("pause");
//	return 0;
//}


/*
һά����ʵ��
�Ӽ��̽���10����
��ƽ���������С��ƽ��������
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[10], i;
//	int sum = 0;
//	float ave = 0;
//	printf("������10������\n");
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &a[i]);
//		sum = sum + a[i];
//	}
//	ave = sum / 10;
//	printf("ƽ�����ǣ�%f\n", ave);
//	for (i = 0; i < 10; i++)
//		if (a[i] < ave)
//			printf("%d\n", a[i]);
//	system("pause");
//	return 0;
//}


/*
һλ����ʵ��2
��������Fibonacci���е�ǰ20��
Fibonacci�����ֳ��������У�
1,1,2,3,5,8,13,21,34����
�ӵ����ʼ��ÿһ�����ǰ����֮�͡�
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
�ҳ���ά����İ���                   //�п��ٿ���һ��!!!
����λ���ϵ�Ԫ���Ǹ�����������С
Ҳ����û�а���
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
//	int i, j, k;           //ѭ������
//	int max;               //һ����������ֵ
//	int maxj;              //һ�������ֵ���ڵ���
//	int minFlag;            //��Сֵ��������0����������������
//	int point=0;              //�ҵ����������
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
//			printf("�ҵ�һ�����㣬��%d��%d��\n", i, maxj);
//			point++;
//		}
//	}
//	if (point == 0)
//		printf("û���ҵ�����\n");
//	system("pause");
//	return 0;
//}


/*
�����ά����
��ʼ����ά����
���ö�ά����
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a[3][3];
//	int i, j;
//	printf("�������ά�������ֵ��\n");
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
��԰����
*/
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int f[3][4];
//	int i;
//	int max = 0, pNo;
//	for (i = 0; i < 3; i++) {
//		printf("�������%d���ı��������\n", i + 1);
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
//	if (f[0][3] == max) printf("�����Ĺھ���С��\n");
//	if (f[1][3] == max) printf("�����Ĺھ���Сǿ\n");
//	if (f[2][3] == max) printf("�����Ĺھ���С÷\n");
//	
//	/*switch (pNo) {
//	case 0:printf("�����ھ���С��\n"); break;
//	case 1:printf("�����Ĺھ���Сǿ\n"); break;
//	case 2:printf("�����Ĺھ���С÷\n"); break;
//	default:printf("error");
//	}*/
//	system("pause");
//	return 0;
//}

/*
�����ռ���500-1�е�����֮�ͣ�����������5000ʱֹͣ��
����͵Ľ���������������͵������ĸ���
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
//	printf("�ܺ���%d�������������������%d", sum, i);
//	system("pause");
//	return 0;
//}

/*
��һ��������ͳ�Ƶ��ʵĸ���
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
//	printf("���������ǣ�%d\n", count);
//	system("pause");
//	return 0;
//}
/*
��1~250���ܱ�7��������ɾ������ʾ���µ���
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
strlen()                               //!!!���⺯��
strcmp()
strcat()
strcpy��strncpy()
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
//	cmp = strcmp(s1, s2);   //�������ֵС�� 0�����ʾ str1 С�� str2���������ֵ���� 0�����ʾ str1 ���� str2���������ֵ���� 0�����ʾ str1 ���� str2��
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
//	/*len = strlen(s1);         //s1�ĳ���
//	printf("%d\n", len);        
//	cmp = strcmp(s1, s2);       //�Ƚ�s1��s2�Ĵ�С���������ҿ�ʼһһ�Աȣ���s1С�򷵻ظ�ֵ���෴������ֵ����ȫ����ȣ�����0��
//	printf("%d\n", cmp);
//	strcat(s1, s2);             //ƴ��s1,s2;
//	printf("%s\n", s1);*/
//	strcpy(s1, s2);               //����s2��s1���棬����s1
//	printf("%s\n", s1);
//	strncpy(s1, s2,len);        //����s2��s1���棬����ָ������
//	printf("%s\n", s1);
//	system("pause");
//	return 0;
//}

/*
ͳ���ַ����͵ĸ���
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
����һ���ַ�����Ȼ����ַ����е��ַ�������С���������������
*/

//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	char a[30];
//	char temp;
//	int i, j, l;
//	printf("������һ���ַ���");
//	gets(a);
//	l = strlen(a);
//	for (i = 0; i < (l - 1); i++) {                      //ð�ݷ�
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
��԰��������
����       ���  ����  �� ����  ������
*/

//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main() {
//	int i,j,max=0,pno,k;
//	char name[9][20] = { {"a001"},{"a002"},{"a003"},{"a004"},{"a005"},
//	{"a006"},{"a007"},{"a008"}};
//	int fw[9][5] = { {102,23,54,45},{102,23,84,45},{103,23,34,85},{104,63,34,45},
//		{105,83,34,45},{106,23,39,45},{107,23,34,25},{108,23,54,45} };//ˮ��������
//	/*for (i = 0; i < 8; i++) {
//		printf("��%dλѡ�ֵ������ǣ�\n", i + 1);
//		gets(name[i]);
//		printf("����ǣ�");
//		scanf_s("%d", &fw[i][0]);
//		printf("ժ�õ�����������");
//		scanf_s("%d", &fw[i][1]);
//		printf("ժ�õ���������");
//		scanf_s("%d", &fw[i][2]);
//		printf("ժ�õ�����������");
//		scanf_s("%d", &fw[i][3]);
//	}*/
//	//��һ������
//	for (i = 0; i < 8; i++) {
//		if (max < fw[i][3]) {
//			max = fw[i][3];
//			pno = i;
//
//		}
//	}
//	printf("ժ���ӵĹھ���%s�������%d�����ӵ�������%d\n", name[pno], fw[pno][0], fw[pno][3]);
//
//	//�ڶ�������
//
//	//����������
//	for (i = 0; i < 8; i++) {
//		fw[i][4] = fw[i][1] + fw[i][2] + fw[i][3];
//	}
//	for (k = 0; k < 7;k++) {       //ð�ݷ�
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
//	printf("����   ���   ������\n");
//	for (i = 0; i < 8; i++) {
//		printf("%10s  %10d  %10d\n",name[i],fw[i][0],fw[i][4]);
//
//	}
//	system("pause");
//	return 0;
//
//}


/*
�Զ��庯��
*/
/*
������У�ÿ��15����*��
Ҫ�󣬶���һ������ʵ�����һ��
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
��дmax���������a��b�������еĴ���
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
//	printf("����������");
//	scanf_s("%d %d", &a, &b);
//	c = max(a, b);
//	printf("max=%d", c);
//	system("pause");
//	return 0;
//
//}

/*
������ֽ�����
д��main�������������������3,5,7����
������*/

//#include<stdio.h>
//#include<Windows.h>
//void pyra(int n) {              //�þ��庯�������˽�
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
д��pb������area����
�����������
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
������У���һ��3����*������һ�ж�����3����*��
Ҫ�󣬶���һ������ʵ�����һ��
�����5��
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
��дһ����ͺ���
�Ӽ������������������������֮��
*/
//#include<stdio.h>
//#include<Windows.h>
//void ss(int a, int b);
//int main() {
//	int a, b;
//	printf("��������������");
//	scanf_s("%d %d", &a, &b);
//	ss(a, b);
//	system("pause");
//	return 0;
//}
//void ss(int a, int b) {
//	int sum;
//	sum = a + b;
//	printf("����֮��Ϊ%d\n", sum);
//}

/*
�Ӽ�������һ���ַ�����д�������ж��Ƿ�ΪСд��ĸ
��ͳ��Сд��ĸ�ĸ���
*/


//#include<stdio.h>
//#include<Windows.h>
//int co(char a);
//int main() {
//	char ch[20];
//	int i;
//	int count = 0;
//	printf("�������ַ�����\n");
//	gets(ch);
//	for (i = 0; ch[i] != '\0'; i++) {
//		count += co(ch[i]);
//	}
//	printf("Сд��ĸ������%d\n", count);
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
10��ѧ���μӿ��ԣ���дһ����������ƽ����
�������飬��ŷ���
�Զ��庯�������ֵ
��������ʵ��������������
*/


//int ave(int x[], int n) {         //x���������飬n�ǳ���
//	int sum=0, i, average;
//	for (i = 0; i < n; i++) {    //�ó�sum
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
��ʮ��ͬѧ����ߣ���С��������         //�ڸ�ϰ 0519
Ȼ�����ź����ɾ�����˳���ͬѧ�����
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
//	printf("�����˳���ͬѧ������ǣ�\n");
//	scanf("%d", &i);
//	del(high, 10, i);
//	printf("��С���������ǣ�\n");
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
�Ӽ������룬���ú�����
�����Լ������С������
*/
//int fnmax(int a, int b)     //���������Լ��
//{
//	int i;                 //���Լ��
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
//long fnmin(int a, int b)       //��С������
//{
//	long c;
//	c = (a * b)/fnmax(a, b);      //�ڸú����У�������������������Ƕ�ף��������Ƕ�����
//	return c;
//}
//
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int x, y;
//	printf("��������������\n");
//	scanf_s("%d %d", &x, &y);
//	
//	printf("���Լ���ǣ�%d\n", fnmax(x, y));
//	printf("��С�������ǣ�%ld\n", fnmin(x, y));
//	system("pause");
//	return 0;
//}


/*
�����������һ���ʵ�����˶����ꣿ��˵�ȵ��ĸ��˴� 2 �ꡣ�ʵ��ĸ��˶�
���ꣿ��˵�ȵ������˴� 2 �ꡣ�ʵ������˶����ꣿ��˵�ȵڶ����˴� 2 �ꡣ��
�ڶ����˶����ꣿ��˵�ȵ�һ���˴� 2�ꡣ����ʵ�һ���˶����ꣿ��˵ 10�ꡣ
���ʵ�����˶����ꣿ
*/
//int age(int n) {
//	int c;
//	if (n == 1)
//		c = 10;
//	else
//		c = age(n - 1) + 2;     //�����Լ������Լ����ݹ����
//	return c;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i;
//	i = age(10);
//	printf("��ʮ���˵������ǣ�%d\n", i);
//	system("pause");
//	return 0;
//}


/*
�� 1-10 �Ľ׳�ֵ
*/
//long fact(int n) {
//	long mul;
//	if (n == 1 || n == 0)
//		mul = 1;
//	else
//		mul = n * fact(n - 1);      //�ݹ���ã��Լ������Լ�
//	return mul;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int i;
//	for (i = 1; i <= 10; i++) {
//		printf("%d�Ľ׳���%ld\n", i, fact(i));
//	}
//   system("pause");
//   return 0;
//}


//���� 10 ������Ҫ���������ֵ����Ԫ�غ͸����ǵڼ�������

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
//		if (max(m, a[i]) > m) {          //�� max ��������ֵ���� m
//			m = max(m, a[i]);        //max �����ķ���ֵȡ�� m
//			n = i;                  //������Ԫ�ص���ż��������ŵ� n ��
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
�����Ĵ�������    �ֲ�������ȫ�ֱ���
*/
//#include<stdio.h>
//#include<Windows.h>
//void a();
//void b();
//void c();
//int x = 1;
//void main() {
//	int x = 5;
//	printf("��main�����λ��1��x��ֵ�ǣ�%d\n", x);
//	{
//		int x = 7;
//		printf("��main�����λ��2��x��ֵ��%d\n", x);
//	}
//	printf("��main�����λ��3��x��ֵ�ǣ�%d\n", x);
//	//���в�����
//	a();
//	b();
//	c();
//	a();
//	b();
//	c();
//	printf("��main�����λ��4��x��ֵ��:%d\n", x);
//	system("pause");
//	return 0;
//	
//}
//
////�Զ��庯��
//void a() {
//	int x = 25;
//	printf("����a����ʱ��ֵ��:%d\n", x);
//	++x;
//	printf("�˳�a����ʱ��ֵ�ǣ�%d\n", x);
//}
//
//void b() {
//	static int x = 50;
//	printf("����b����ʱ��ֵ��:%d\n", x);
//	++x;
//	printf("�˳�b����ʱ��ֵ�ǣ�%d\n", x);
//}
//
//void c() {
//	static int x = 50;
//	printf("����c����ʱ��ֵ��:%d\n", x);
//	x+=10;
//	printf("�˳�c����ʱ��ֵ�ǣ�%d\n", x);
//}


/*
�궨�������
*/

/*
���볤����ĳ���ߣ�дһ�������󳤷���������Լ������ࡢ�������������
����
*/

//#include<stdio.h>
//#include<Windows.h>
//int v, sz, sc, sd;              //���壺��������桢���桢�������
//void fn(int l, int w, int h);   // l-����w-�� h-��
//int main() {
//	int l, w, h;
//	printf("�����볤����ĳ���l����\n");
//	scanf_s("%d", &l);
//	printf("�����볤����Ŀ�w����\n");
//	scanf_s("%d", &w);
//	printf("�����볤����ĸߣ�h����\n");
//	scanf_s("%d", &h);
//	fn(l, w, h);
//	printf("�����������ǣ�%d\n", v);
//	printf("��������ǣ�%d\n", sz);
//	printf("��������ǣ�%d\n", sc);
//	printf("��������ǣ�%d\n", sd);
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
���볤����ĳ���ߣ����ú궨���󳤷���������Լ������ࡢ�������������
����
*/

//#include<stdio.h>
//#include<Windows.h>
//#define V(a,b,c) (a)*(b)*(c)          //V ���治���С��ո�
//#define S(a,b) (a)*(b)
//
//int main() {
//	int l, w, h;
//	int v, sz, sc, sd;
//	printf("�����볤����ĳ���l):\n");
//	scanf_s("%d", &l);
//	printf("�����볤����Ŀ�w):\n");
//	scanf_s("%d", &w);
//	printf("�����볤����ĸߣ�h):\n");
//	scanf_s("%d", &h);
//	v = V(l, w, h);
//	sz = S(l, h);
//	sc = S(w, h);
//	sd = S(w, l);
//	printf("�����������ǣ�%d\n", v);
//	printf("��������ǣ�%d\n", sz);
//	printf("��������ǣ�%d\n", sc);
//	printf("��������ǣ�%d\n", sd);
//	system("pause");
//	return 0;
//
//}


/*
��дһ�����Ƴɼ�����ͳ�Ƴ���ʹ�������� N ��ͬѧ�ĳɼ�����ƽ���֣����
�֣���ͷ֣�����������������󼰸��ʣ��Գɼ��������У���Ҫ�����Ӧ����
�õĽ��棬�ɵ����ɸ����ܡ�

��fn.c��Ŀ������ ע�⸴ϰ
*/


/*
��ָ����ʵķ�ʽ���Ӽ������������������ٰ��մ�С�����˳�������
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	int a, b;
//	int *pa, *pb;
//	pa = &a;
//	pb = &b;
//	printf("����������������\n");
//	scanf_s("%d %d", pa, pb);
//	if (*pa < *pb)
//		printf("%4d%4d\n", *pa, *pb);
//	else
//		printf("%4d%4d\n", *pb, *pa);
//}


/*
����һ���ַ�ָ�����������һ���ַ���ͳ���ַ������ȡ�
*/

//#include<stdio.h>
//#include<Windows.h>
//int main() {
//	char str[50];
//	char *pc;
//	int count = 0;
//	pc = str;   //�׵�ַ����һ��Ԫ��
//	gets(pc);
//	while (*pc != '\0') {
//		count++;
//		pc++;
//	}
//	printf("�ַ����ĳ����ǣ�%d\n", count);
//	system("pause");
//	return 0;
//}

/*
��ָ�������Ϊ�����Ĳ�������д����ʵ���������Ľ��������� main �����е�
�á�
*/

//#include<stdio.h>
//#include<Windows.h>
//void swap(int *, int *);
//int main() {
//	int a, b;
//	printf("��������������\n");
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
��д�������ܽ������ַ����ϲ�������ָ����Ϊ����������
*/

//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//void mystrcat(char *, char *);
//int main() {
//	char str1[20], str2[20];
//	printf("������һ���ַ�");
//	gets(str1);
//	printf("��������һ���ַ�");
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
��20�������ĺͣ�ƽ����������ƽ��������������
*/

/*
#include<stdio.h>
#include<Windows.h>
int main() {
	int a[20];                   //�������� a[20]��
	int max, ave = 0;            //��ʼ��ave������max��
	int i, sum = 0, count = 0;   //����i����ʼ��sum��count��
	printf("������20������\n");
	for (i = 0; i < 20; i++) {	 //forѭ����ʹ�ôӼ��̳�ʼ��a[20]��
		scanf("%d", &a[i]);
		sum += a[i];             //���--a[20]�����֮�ͣ�
	}
	printf("sumΪ��%d\n", sum);
	ave = sum / 20;              //��ƽ��ֵave��
	printf("ƽ����Ϊ%2d\n", ave);
	for (i = 0; i < 20; i++)      //ѭ���ж��Ƿ�a[i]>ave��
		if (a[i] > ave)
			count++;		      //�����>ave���ۼ�һ����
	printf("����ƽ�����ĸ���Ϊ%2d\n", count);
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
//	printf("������һ����ĸ�������ж����ǲ��Ǵ�д��ĸ\n");
//	scanf_s("%c", &m);
//	if (m>=64&&m<=90)
//	{
//		printf("%c�Ǵ�д��ĸ\n", m);
//	}
//	else {
//		printf("%c���Ǵ�д��ĸ\n", m);
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










