#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 주소와 포인터의 크기
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pb = &db;

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch)); // 8
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));  // 8
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db)); // 8

	printf("\n");

	printf("*char * 포인터의 크기 : %d\n", sizeof(pc)); // 8
	printf("*int * 포인터의 크기 : %d\n", sizeof(pi));  // 8
	printf("*double * 포인터의 크기 : %d\n", sizeof(pb));  // 8

	printf("\n");

	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc)); // 1
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));  // 4
	printf("double* 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pb)); // 8

	return 0;
}
#endif