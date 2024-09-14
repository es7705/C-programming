#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* sum(int a, int b);	// 주소를 반환하는 함수

int main(void)
{
	// 주소를 반환해서 두 정수의 합 계산
	int* rp;

	rp = sum(10, 20);	// 주소를 저장, 리턴값이 res의 주소임
	printf("두 정수의 합 : %d\n", *rp);	// 역참조하여 res의 값을 출력
	return 0;
}

int* sum(int a, int b)
{
	static int res;	// 정적 지역 변수, 함수가 반환된 후에도 변수의 저장 공간이 계속 유지되기 위해 사용
	res = a + b;
	return &res;	// 주소를 반환
}
#endif