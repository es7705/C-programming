#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_data(int* pa, int* pb);
double average(int a, int b);

int main(void)
{
	// 두 정수의 평균을 구하는 프로그램
	int a, b;
	double avg;

	input_data(&a, &b);								// 두 정수 입력
	avg = average(a, b);							// 평균 계산
	printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);	// 입력값과 평균 출력
	return 0;
}
#endif