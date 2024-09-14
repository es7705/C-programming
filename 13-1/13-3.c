#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void assign10(void);
void assign20(void);

int a; // 전역 변수 선언, 전역 변수는 초기화 하지 않아도 0으로 자동 초기화 됨

int main(void)
{
	// 전역 변수
	printf("함수 호출 전 a 값 : %d\n", a); // a : 0

	assign10();
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a); // 전역 변수 a 출력, a : 10

	return 0;
}

void assign10(void)
{
	a = 10; // 전역 변수 a에 10 대입
}

void assign20(void)
{
	int a;	// 전역 변수와 같은 이름의 지역 변수 선언

	a = 20; // 지역 변수 a에 20 대입
}
#endif