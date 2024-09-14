#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10;		// int형 변수의 선언과 초기화
	int* pi;		// 포인터 선언
	int** ppi;		// 이중 포인터 선언 

	pi = &a;		// int형 변수의 주소를 저장한 포인터
	ppi = &pi;		// 포인터의 주소를 저장한 이중 포인터

	printf("------------------------------------------------------\n");
	printf("변수      변숫값      &연산        *연산      **연산\n");
	printf("------------------------------------------------------\n");
	printf("  a%12d%12u\n", a, &a); // a의 값,  a의 주소 
	printf(" pi%12u%12u%12d\n", pi, &pi, *pi); // a의 주소, pi의 주소, pi가 가리키는 주소의 값(a의 값)
	printf("ppi%12u%12u%12u%12u\n", ppi, &ppi, *ppi, **ppi); // pi의 주소, ppi의 주소, pi가 갖는 값(a의 주소), a의 값
	printf("------------------------------------------------------\n");

	return 0;
}
#endif