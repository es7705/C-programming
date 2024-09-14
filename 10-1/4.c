#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 포인터 뺄셈과 관계 연산
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary; // 10
	int* pb = pa + 3; // 40

	printf("pa : %u\n", pa); // 100
	printf("pb : %u\n", pb); // 112

	pa++;	// 104
	printf("pb - pa : %u\n", pb - pa); // (112 - 104) / sizeof(int)4 -> 2
	// 뺄셈 결과는 배열 요소 간의 간격 차이를 의미

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb)
	{
		printf("%d\n", *pa); // 20
	}

	else
	{
		printf("%d\n", *pb); // 40
	}

	return 0;
}
#endif