#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// gets 함수를 사용한 문자열 입력
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str);	// 배열명을 주고 함수 호출
	printf("입력한 문자열은 %s입니다.", str);

	// gets와 같은 거
	/*char str[80];
	char ch;
	int i = 0;

	ch = getchar();
	while (ch != '\n')
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
	printf("%s", str);*/

	return 0;
}
#endif