#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 허용되지 않는 포인터의 대입
	// 규칙1 : 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 합니다.
	//int a = 10;
	//int* p = &a;
	//double* pd;

	//pd = p;				// 변수 p와 pd는 모두 포인터지만 가리키는 자료형이 다름
	//printf("%lf\n", *pd);

	/*
	int a = 10;		// 변수 선언과 초기화
	int* p = &a;	// 포인터 선언과 동시에 a를 가리키도록 초기화
	int* pb;		// double형 변수를 가리키는 포인터
		
	pb = p;			// 포인터 p 값을 포인터 pd에 대입
	
	printf("%u\n", a);  // 10
	printf("%u\n", &a); // a의 주소

	printf("\n");

	printf("%u\n", p); // a의 주소
	printf("%u\n", *p); // 10
	printf("%u\n", &p); // p의 주소

	printf("\n");

	printf("%u\n", pb); // a의 주소
	printf("%u\n", *pb); // 10
	printf("%u\n", &pb); // pb의 주소
	*/

	// 규칙2 : 형 변환을 사용한 포인터의 대입은 언제나 가능
	double a = 3.4;
	double* pd = &a;
	int* pi;
	pi = (int*)pd;	// pd 값을 형 변환해 pi에 대입
	//*pi = 10;
	printf("%d\n", *pi);
	return 0;
}
#endif