#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(double* pa, int siez);
void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	// 배열에 값을 입력하는 함수
	double ary[5];
	double max;								// 최댓값을 저장할 변수
	int size = sizeof(ary) / sizeof(ary[0]); // 배열 요소의 개수 계산

	input_ary(ary, size);		// 배열에 값 입력
	max = find_max(ary, size);	// 배열의 최댓값 봔환

	printf("배열의 최댓값 : %.1lf\n", max);	// 최댓값 출력

	printf("배열의 요소 : ");
	print_ary(ary, size);

	return 0;
}

void input_ary(double* pa, int size)	// double 포인터를 매개변수로 선언
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	
	for ( i = 0; i < size; i++)	// size의 값에 따라 반복 횟수 결정
	{
		scanf("%lf", &(pa[i])); // 주소를 전달, pa + i도 가능
	}
}

void print_ary(double* pa, int size) // 배열 요소 전체 출력
{
	int i;

	for ( i = 0; i < size; i++)
	{
		printf("%.1lf", pa[i]);

		if (i < size - 1) // 마지막 요소 전까지만 , 찍어줌
		{
			printf(", ");
		}
	}
}

double find_max(double* pa, int size)
{
	double max = pa[0];	// 첫 번째 배열 요소의 값을 최댓값으로 설정
	int i;

	for (i = 1; i < size; i++)	// 두 번째 배열 요소부터 max값과 비교
	{
		if (max < pa[i])
		{
			max = pa[i];
		}
	}

	return max;	// 최대값 반환
}
#endif