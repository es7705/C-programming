#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** pps);					// 동적 할당 영역의 문자열을 출력하는 함수

int main(void)
{
	// 동적 할당 영역에 저장한 문자열을 함수로 처리하는 예
	char temp[80];				// 임시 char 배열
	char* str[21] = { 0 };		// 문자열을 연결할 포인터 배열, 널 포인터로 초기화
	int i = 0;					// 반복 제어 변수

	while (i < 20)				// 최대 20까지 입력
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);									// 문자열 입력
		if (strcmp(temp, "end") == 0) break;		// end가 입력되면 반복 종료
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}

	return 0;
}

void print_str(char** pps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}

#endif