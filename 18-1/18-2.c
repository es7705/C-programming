#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 파일의 내용을 화면에 출력하기
	FILE* fp;
	int ch;		// putchar의 반환형은 int, int putchar(int);

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);		// 아스키 코드를 저장

		if (ch == EOF)
			break;
		//printf("%c", ch);
		putchar(ch);		// 입력한 문자를 화면에 출력, ch의 아스키 코드를 문자로 변환 해서 출력
	}

	fclose(fp);
	return 0;
}
#endif