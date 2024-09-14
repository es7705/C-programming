#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 포인터와 간접 참조 연산자
	int a;
	int* pa;

	pa = &a;
	*pa = 10;	// 포인터로 변수 a에 10 대입

	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a 값 출력 : %d\n", a);

	return 0;
}
#endif