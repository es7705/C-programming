#include <stdio.h>

int main(void){

	//int a = 20, b = 10;
	//
	//if (a > 10)
	//{
	//	if (b >= 0)
	//	{
	//		b = 1;
	//	}
	//	else
	//	{
	//		b = -1;
	//	}
	//}
	//
	//printf("a : %d, b : %d\n", a, b);
	//

	/*int a = 10, b = 20;

	if (a < 0)
	{
		if (b > 0)
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok");
	}*/

	/*int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);*/

	/*int n;
	printf("정수 입력 :");
	scanf("%d", &n);
	switch (n % 3)
	{
	
	case 0:
		printf("거짓\n");
		break;

	default:
		printf("참\n");
		break;
	}*/

	/*int age = 19, chest =95;
	char size;

	if (age < 20)
	{
		if (chest >= 95)
		{
			size = 'L';
		}
		else if ((chest >= 85) && (chest < 95))
		{
			size = 'M';
		}
		else
		{
			size = 'S';
		}
	}

	else
	{
		if (chest >= 100)
		{
			size = 'L';
		}
		else if ((chest >= 90) && (chest < 100))
		{
			size = 'M';
		}
		else
		{
			size = 'S';
		}
	}

	printf("사이즈는 %c입니다.\n", size);*/

	/*int a, b;
	int res = 0;
	char c;

	printf("사칙연산 입력(정수) : ");
	scanf("%d %c %d", &a, &c, &b);

	if (c == '+')
	{
		res = a + b;
	}
	else if (c == '-')
	{
		res = a - b;
	}
	else if (c == '*')
	{
		res = a * b;
	}
	else
	{
		res	= a / b;
	} 

	printf("%d%c%d = %d\n", a, c, b, res);*/

	/*int a, b, res;
	char c;

	printf("사칙연산 입력(정수) : ");
	scanf("%d %c %d", &a, &c, &b);

	switch (c)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	}

	printf("%d %c %d = %d\n", a, c, b, res);*/

	return 0;
}