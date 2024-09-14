#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 버퍼의 내용을 지워야 하는 겨우
	int num, grade;		// 학번과 학점을 저장할 변수

	printf("학번 입력 : ");
	scanf("%d", &num);	// 학번 입력
	getchar();			// 버퍼에 남아 있는 개행 문자 제거
	printf("학점 입력 : ");
	grade = getchar();	// 학점 입력
	printf("학번 : %d, 학점 : %c\n", num, grade);

	return 0;
}
#endif