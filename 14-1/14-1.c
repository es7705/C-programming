#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[3][4]; // 3명의 네 과목 점수를 저장할 2차원 배열 선언
	int total; // 총점 
	double avg; // 평균
	int i, j; // 반복 제어 변수

	for (i = 0; i < 3; i++) // 학생 수만큼 반목
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++) // 과목 수만큼 반복c
		{
			scanf("%d", &score[i][j]); // 점수 입력
		}
	}

	for (i = 0; i < 3; i++) // 학생 수만큼 반복A
	{
		total = 0; // 학생이 바뀔 때마다 0으로 초기화
		for (j = 0; j < 4; j++)
		{
			total = total + score[i][j]; // 세명과 네 과목
		}
		avg = total / 4.0; // 3번 반목
		printf("총점 : %d, 평균 : %.2lf\n", total, avg); // 3번 반목
	}

	return 0;
}
#endif