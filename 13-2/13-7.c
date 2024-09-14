#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void add_ten(int* pa);

int main(void)
{
	// 값을 복사해서 전달하는 방법
	int a = 10;

	add_ten(&a); // a 값을 복사하여 전달
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int* pa) // 8행의 a와 다른 독립적인 저장 공간 할당
{
	*pa = *pa + 10;
}
#endif