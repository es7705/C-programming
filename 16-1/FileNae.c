#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	
int main(void)
{
	// �л����� �Է��Ͽ� ���� �Ҵ� �� �л���ȣ �Է� �� ���
	int* score;
	int n, i;
	printf("�л��� �Է� : ");
	scanf("%d", &n);
	
	score = (int*)malloc(n * sizeof(int));

	if (score == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		return 1;
	}
	printf("%d�� �Դϴ�.\n", n);

	printf("�л� ��ȣ �Է� : ");
	
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
	// 2���� �迭 ���� �Ҵ�
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
			printf("�޸� �Ҵ� ����\n");
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
