#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str1[20], str2[20], str3[30];
    char temp[20];

    printf("세 개의 단어 입력 : ");
    scanf("%s%s%s", str1, str2, str3);

    // st1이 str2보다 사전의 뒤에 나오면 두 문자열을 바꾼다
    if (strcmp(str1, str2) > 0)
    {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    // st1이 str3보다 사전의 뒤에 나오면 두 문자열을 바꾼다
    if (strcmp(str1, str3) > 0)
    {
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }

    // st2이 str3보다 사전의 뒤에 나오면 두 문자열을 바꾼다
    if (strcmp(str2, str3) > 0)
    {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

    printf("%s, %s, %s\n", str1, str2, str3);
	return 0;
}
#endif