#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 문자열 상수가 주소란 증거
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple"); // a의 주소 값, 첫 번째 문자 주소 값 출력
	printf("두 번째 문자의 주소 값  : %p\n", "apple" + 1); // p의 주소 값, 두번 째 문자 주소 값 출력
	printf("첫 번째 문자 : %c\n", *("apple"));			 // 간접 참조 연산으로 a출력
	printf("두 번째 문자 : %c\n", *("apple" + 1));		 // 포인터 연산식으로 p 출력
	printf("배열로 표현한 세 번째 문자 %c\n", "apple"[2]); // p, 배열 표현식

	return 0;
}
#endif