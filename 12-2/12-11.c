#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	// 두 문자열 중 길이가 긴 단어 출력
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);

	int a = strlen(str1); // 문자 수를 세어 반환
	printf("%d\n", a);

	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
	}

	else
	{
		resp = str2;
	}

	printf("이름이 긴 과일은 : %s\n", resp);
	return 0;
}
#endif