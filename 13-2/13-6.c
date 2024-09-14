#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add_ten(int a);

int main(void)
{
	// 값을 복사해서 전달하는 방법
	int a = 0;

	a = add_ten(a); // a 값을 복사하여 전달
	printf("main 함수에서의 a : %d\n", a);

	return 0;
}

int add_ten(int a) // 8행의 a와 다른 독립적인 저장 공간 할당
{
	a = a + 10; // 16행의 매개변수 a에 10을 더한다.
	printf("add_ten 함수에서의 a : %d\n", a);
	return a;
}
#endif