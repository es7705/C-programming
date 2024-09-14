#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);

int main(void)
{
	// 함수 포인터의 개념
	int (*fp)(int, int);	// 함수 포인터 선언
	int res;				// 반환겂을 저장할 변수

	fp = sum;				// 함수명을 함수 포인터에 저장
	res = fp(10, 20);		// 함수 포인터로 함수 호출
	res = (*sum)(10, 20);

	printf("result : %d\n", res);	// 반환값 출력

	return 0;
}

int sum(int a, int b)		// 함수 정의
{
	return (a + b);
}
#endif