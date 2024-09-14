#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k;			// 반복 제어 변수 
	int score[2][3][4];  // 점수
	/*= {
		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
	};*/		
	char student[2][3][20]; // 학생 이름
	//= { {"김민수", "정재형", "이용주"}, {"박진만", "오승환", "김현수" } };
	char sub[4][10]; // = { "국어", "수학", "영어", "사회" };	// 과목명

	for (i = 0; i < 2; i++)	// 학생 이름 입력
	{
		printf("%d반 학생 이름을 입력하세요 : ", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%s", &student[i][j]);
		}
	}
	printf("\n");

	printf("과목명을 입력하시요 : ");	// 과목명 입력
	for (k = 0; k < 4; k++)
	{
		scanf("%s", &sub[k]);
	}
	printf("\n");
		
	for ( i = 0; i < 2; i++)			// 점수 입력
	{
		for ( j = 0; j < 3; j++)
		{
			for ( k = 0; k < 4; k++)
			{
				printf("%d반 %s학생 %s 점수 입력 : ", i + 1, student[i][j], sub[k]);
				scanf("%d", &score[i][j][k]);
			}
			printf("\n");
		}
	}
	printf("\n");

	for ( i = 0; i < 2; i++)	// 반, 이름, 과목명, 점수 출력
	{
		printf("%d반 점수...\n", i + 1);
		for ( j = 0; j < 3; j++)
		{
			printf("%s 학생 ", student[i][j]);
			for ( k = 0; k < 4; k++)
			{
				printf(" %s 점수 : %2d", sub[k], score[i][j][k]);
				if (k < 3)
				{
					printf(",");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
#endif