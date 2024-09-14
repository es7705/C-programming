#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cnt = 0;		// 대문자 카운트 변수
	char ch;
	FILE* fp;
	fp = fopen("D:\\Study\\HonGong\\HonGong\\18-1\\pigs.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	printf("파일이 열렸습니다.\n");
	while (1)
	{
		ch = fgetc(fp);
		if (ch >= 'A' && ch <= 'Z')
		{
			++cnt;
		}
		else if (ch == EOF)		// 파일의 끝 EOF(End of File)
		{
			break;
		}	
		printf("%c", ch);
	}
	printf("\n\n대문자 갯수 : %d\n", cnt);

	fclose(fp);
	return 0;
}
#endif