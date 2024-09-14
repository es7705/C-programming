#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// 동적 할당을 사용한 문자열 처리, 16-5 같이 수정함(NULL 사용)
	char temp[80];									// 임시 char 배열
	char* str[3] = { 0 };							// 동적 할당 영역을 연결할 포인터 배열
	int i = 0;										// 반복 제어 변수

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);									// 문자열 입력
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);	// 문자열 저장 공간 할당
		strcpy(str[i], temp);						// 동적 할당 영역에 문자열 복사	
	}
	// 여기서 i는 3이 된다 

	/*for (i = 0; str[i] != NULL; i++)				// 포인터 배열 문자열 출력, for문 방법
	{
		printf("%s\n", str[i]);						// 입력된 문자열 출력
	}*/

	int j = 0;
	while (j < i)									// 포인터 배열 문자열 출력, i == 3,  while문 방법
	{
		printf("%s\n", str[j]);
		j++;
	}

	for (j = 0; j < i; j++)							// 수정된 부분,i == 3
	{
		free(str[j]);								// 동적 할당 영역 반환
	}

	return 0;
}
#endif
