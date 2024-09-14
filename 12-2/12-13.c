#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* my_strcpy(char* pd, char* ps);

int main(void)
{
	// 연사 함수 직접 구현
	char str[80] = "straberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));

	return 0;
}

char* my_strcpy(char* pd, char* ps)
{
	char* po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*ps = '\0';

	return po;
}
#endif