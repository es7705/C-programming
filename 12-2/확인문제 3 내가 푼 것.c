#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char originalStr[16]; // 원래 문자열을 저장할 배열, 최대 15자 + 널 문자
    char modifiedStr[16]; // 변형된 문자열을 저장할 배열
    int len;

    printf("단어 입력 (최대 15자): ");
    scanf("%15s", originalStr); // 사용자로부터 최대 15자까지의 단어를 안전하게 입력받음

    strcpy(modifiedStr, originalStr); // 원래 문자열을 변형할 문자열에 복사
    len = strlen(originalStr); // 입력받은 단어의 길이를 계산

    if (len > 5)
    {
        // 6번째 문자부터 마지막 문자까지 '*'로 대체
        for (int i = 5; i < len; i++)
        {
            modifiedStr[i] = '*';
        }
    }

    printf("원래 단어: %s\n", originalStr); // 원래 단어 출력
    printf("변형된 단어: %s\n", modifiedStr); // 변형된 단어 출력

    return 0;
}
#endif