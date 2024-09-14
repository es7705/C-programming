#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp;									// 파일 포인터 선언
	char *str;									// 출력할 문자열을 동적할당할 포인터
	int i = 0;										// 반복 제어 변수

	printf("문자를 입력하세요 : ");
	str = (char*)malloc(20);					// 20바이트만큼 str에 동적 할당
	if (str == NULL)							// 동적 할당 실패시 
	{
		printf("메모리 할당에 실패\n");
		return 1;
	}

	fgets(str, 20, stdin);						// 문자열 입력
	str[strcspn(str, "\n")] = '\0';				// 개행 문자 제거

	fp = fopen("b.txt", "w");					// 쓰기 전용으로 개방
	if (fp == NULL)								// 파일 개방 확인
	{
		printf("파일을 만들지 못했습니다.\n");
		free(str);
		return 1;
	}

	while (str[i] != '\0')						// 널문자가 나오지 전까지 문자 출력
	{
		fputc(str[i], fp);						// 문자를 파일에 출력
		i++;									// 다음 문자로 이동
	}
	fputc('\n', fp);							// 줄 바꿈

	char c[] = "hello";
	fputs(c, fp);

	fclose(fp);									// 파일 닫기
	free(str);									// 메모리 해제
	return 0;
}
#endif