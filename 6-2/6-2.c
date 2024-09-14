#include <stdio.h>	
#define _CRT_NO_SECURE_WARNINGS
int main(void)
{
	/*int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//구구단
	/*int i, j;
	for (i = 2; i <= 9 ; i++)
	{
		for ( j = 1; j <= 9 ; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}*/

	/*int i;
	int sum = 0;

	for (i = 0; i <= 10; i++)
	{
		sum = sum + i;
		if (sum > 30)
		{
			break;
		}
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);*/

	/*while (1)
	{
		printf("a");
	}*/

	/*for(;;)
	{
		printf("a");
	}*/

	/*int count = 0;
	while (1)
	{
		printf("a\n");
		count++;
		if (count == 5) break;
	}*/

	/*int i;
	int sum = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			continue;
		}
		sum += i;
		printf("i : %d\n", i);
	}

	printf("sum : %d\n", sum);*/

	//확인 문제
	//1
	/*int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Be happy\n");
		}
	}*/

	//2
	/*int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Be happy\n");
			if (j == 2)	break;
		}
	}*/

	//3
	/*int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((i == j) || (i + j) == 4) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}*/

	//도전 실전 예제
	/*int i, n, j;
	int pn;

	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		pn = 1;
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				pn = 0;
				break;
			}
		}
	}*/

	return 0;
}