#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DEBUG								// DEBUG 매크로 정의
// #define LEVEL 2							// LEVEL 매크로를 2로 치환
#define MAX_LEVEL							// MAX_LEVEL 매크로 정의

int main(void)
{
	int flag;								// 플래그 변수

#undef DEBUG								// DEBUG 매크로 정의 해제
#ifndef DEBUG								// DEBUG 매크로 정의가 안 되어 있으면
	flag = 0;								// 이 문장 컴파일
#elif LEVEL == 1							// LEVEL 매크로가 1이면 
	flag = 1;								// 이 문장 컴파일
#elif defined(MAX_LEVEL) && (LEVEL == 2)	// MAX_LEVEL 매크로가 정의 되어 있고 LEVEL 매크로가 2이면
	flag = 2;								// 이 문장 컴파일
#else										// 전부 다 아니면
	flag = 3;								// 이 문자 컴파일
#endif
	printf("%d\n", flag);					// 플래그 변수 출력

	return 0;
}
#endif