#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum season { SPRING, SUMMER, FALL, WINTER };	// 열거형 선언

int main(void)
{
	enum seasons ss;		// 열거형 변수 선언
	char* pc = NULL;		// 문자열을 저장할 포인터

	ss = SPRING;			// 열거 멤버의 값 대입
	switch (ss)				// 열거 멤버 판단 
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("나의 레저 활동 : %s\n", pc);	// 선택된 문자열 출력

	return 0;
}
#endif