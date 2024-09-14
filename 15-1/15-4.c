#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 배열 요소의 주소와 배열의 주소
	int ary[5];

	printf("ary의 값 : %u\t", ary);			// 주소로서의 배열명의 값
	printf("ary의 주소 : %u\n", &ary);	    // 배열의 전체의 시작 주소
	printf("ary + 1 : %u\t", ary + 1);		// 배열의 두 번째 요소의 주소
	printf("&ary + 1 : %u\n", &ary + 1);	// 배열 전체 주소의 다음의 주소

	return 0;
}
#endif