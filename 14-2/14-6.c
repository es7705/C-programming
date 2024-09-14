#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 포인터 배열 선언과 사용
	int i;
	char* pary[5];
	char* pary1[5] = { "이용주", "오진성", "홍승민", "송지우", "김진수" };	// 포인터 배열의 초기화
	// 이때 문자열은 별도의 메모리 영역에 따로 보관되고, 배열 요소에는 개별 문자열의 주소가 대입

	char ary[5][10] = { "이용주", "오진성", "홍승민", "송지우", "김진수" };	// 2차원 char 배열의 초기화

	// 포인터 배열에는 그 첫 번째 문자의 주소가 저장됨
	pary[0] = "dog";		// d의 주소
	pary[1] = "elephant";	// e의 주소
	pary[2] = "horse";		// h의 주소
	pary[3] = "tiger";		// t의 주소
	pary[4] = "lion";		// l의 주소

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", *(pary + i));
		printf("%s\n", pary1[i]);
		printf("%s\n", ary[i]);
	}

	return 0;
}
#endif