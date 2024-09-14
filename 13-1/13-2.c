#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//블록 안에서 사용하는 지역 변수
	int a = 10, b = 20;
	
	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
		int a = 1, b = 3, temp;

		temp = a;
		a = b;
		b = temp;
		printf("블럭 안에서의 a와 b의 값 : %d, %d\n", a, b);

	}
	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}
#endif