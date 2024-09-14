#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//포인터의 뺄셈과 관계 연산
	int ary[5] = { 10, 20 ,30, 40, 50 };
	int* pa = ary; // 첫 번째 배열 요소 주소
	int* pb = pa + 3; // 네 번째 배열 요소 주소

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	
	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if(pa < pb)
	{
		printf("%d\n", *pa);
	}

	else
	{
		printf("%d\n", *pb);
	}

	return 0;
}
#endif