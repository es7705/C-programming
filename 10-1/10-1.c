#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//배열명으로 배열 요소 사용하기
	int ary[3];
	int i;

	*(ary + 0) = 10;
	//*(ary + 1) = *(ary + 0) + 10; // 요소
	ary[1] = ary[0] + 10; // 요소

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", &ary[2]); // == ary + 2 주소값

	for (i = 0; i < 3; i++)
	{
		printf("%5d", ary[i]); //요소
	}

	return 0;
}
#endif