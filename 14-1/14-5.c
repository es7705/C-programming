#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 3차원 배열
	int score[2][3][4] = { // 2개 반 3명의 4과목 점수 저장
		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++) // 반을 반복
	{
		printf("%d반 점수...\n", i + 1); // 1반, 2반
		for (j = 0; j < 3; j++) // 3명의 학생을 반복
		{
			for (k = 0; k < 4; k++) // 4과목의 점수를 반복
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
#endif