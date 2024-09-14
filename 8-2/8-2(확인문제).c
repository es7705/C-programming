#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	//2
	/*char str1[80], str2[80];
	char temp[80];

	printf("두 문자열 입력 : ");
	scanf("%s %s", str1, str2);
	printf("바꾸기 전 : %s, %s\n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("바꾼 후 : %s, %s\n", str1, str2);*/

	//도전 실전 예제
	char str[80];
	int cnt = 0;
	int i;

	printf("문자입력 : ");
	gets(str);

	for (i = 0; str[i] != \0; i++)
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
			cnt++;
		}
	}

	printf("바뀐 문장 : ");
	puts(str);
	printf("바뀐 문자 수 : %d\n", cnt);

	return 0;
}