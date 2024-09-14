#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 포인터를 이용한 배열의 값 출력
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	for ( i = 0; i < 3; i++)
	{
		scanf("%d", pa);
		pa++;
	}

	pa = ary; // 포인터를 배열의 시작 주소로 다시 초기화
	
	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(pa++));
		// pa++; // pa는 100번지
		// 104 108 
		// pa는 ary의 첫 번째 요소의 주소
	}
	
	return 0;
}
#endif