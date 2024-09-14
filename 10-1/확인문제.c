#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double* pa = ary; // 배열명을 저장 == 배열을 첫번째 주소 저장
	double* pb = ary + 2; // 배열의 세 번째 주소를 저장
	int i;

	//1
	printf("%u\n", ary);
	printf("%lf\n", *(ary + 1));
	printf("%u\n", pa + 2);
	printf("%lf\n", pa[3]);
	printf("%lf\n", *pb);
	printf("%d\n", pb - pa);

	// 3
	for (i = 0; i < 3; i++)
	{
		printf("%.1lf\n", *pb);
		pb++;
	}


	return 0;
}
#endif