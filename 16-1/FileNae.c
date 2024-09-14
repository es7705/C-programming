#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	
int main(void)
{
	// 학생수를 입력하여 동적 할당 후 학생번호 입력 후 출력
	int* score;
	int n, i;
	printf("학생수 입력 : ");
	scanf("%d", &n);
	
	score = (int*)malloc(n * sizeof(int));

	if (score == NULL)
	{
		printf("메모리 할당 실패\n");
		return 1;
	}
	printf("%d명 입니다.\n", n);

	printf("학생 번호 입력 : ");
	
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
	}

	for ( i = 0; i < n; i++)
	{
		printf("%5d", score[i]);
	}

	free(score);

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	
#define SIZE 2
int main(void)
{
	// 2차원 배열 동적 할당
	int* p[SIZE];
	int i, j;
	int n;
	scanf("%d", &n);
	for (i = 0; i < SIZE; i++)
	{
		p[i] = (int*)malloc(n * sizeof(int));
	}

	for ( i = 0; i < SIZE; i++)
	{
		if (p[i] == NULL)
		{
			printf("메모리 할당 실패\n");
			return 1;
		}
	}
	

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &p[i][j]);
		}
	}

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d", p[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < SIZE; i++)
	{
		free(p[i]);
	}
	return 0;
}
#endif
