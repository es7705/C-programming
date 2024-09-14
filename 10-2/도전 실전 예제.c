#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto_nums);	// 로또 번호 입력
void print_nums(int* lotto_nums);	// 로또 번호 출력 
void sort(int *lotto_nums, int n);  // 오름차순 정렬

int main(void)
{
	// 로또 번호 생성 프로그램
	int lotto_nums[6];
	int n = 6;
	input_nums(lotto_nums);
	sort(lotto_nums, n);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j;
	for ( i = 0; i < 6; i++)
	{
		printf("번호 입력 : ");

		scanf("%d", &lotto_nums[i]);

		for (j = 0; j < i; j++) // 0 1 2 3 4 
		{
			if (lotto_nums[j] == lotto_nums[i])
			{
				printf("같은 번호가 있습니다.\n");
				i--;
				// break;
			}
		}	
	}
}

void print_nums(int* lotto_nums)
{
	int i;
	printf("로또 번호 : ");

	for ( i = 0; i < 6; i++)
	{
		printf("%3d", lotto_nums[i]);
	}
}

void sort(int *lotto_nums, int n)		// 오름차순 정렬 소트
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (lotto_nums[j] > lotto_nums[j + 1])   // 오름차순 정렬 
			{
				temp = lotto_nums[j];				// swap
				lotto_nums[j] = lotto_nums[j + 1];
				lotto_nums[j + 1] = temp;
			}
		}
	}
}
#endif