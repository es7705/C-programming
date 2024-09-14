#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[80]; // 0 ~ 14까지 문자, 15는 널 문자
	char str2[80]; // 복사한 문자열 저장할 공간
	int star_cnt = 0;

	printf("단어 입력 : ");
	scanf("%s", str1);

	int len = strlen(str1);	// 입력한 문자열 수
	printf("문자열 수 : %d\n", len);	// 문자열 수 출력

	strcpy(str2, str1);		// 입력한 문자열을 str2에 복사, 원래 입력한 문자
	
	str1[15] = '\0';		// 단어의 최대 길이는 15자로 제한, 16번 째 배열에 널 문자를 넣음

	if (len > 5)			// 단어 길이가 5자를 넘으면 6자리부터 별을 출력
	{
		if (len < 16)		// 단어 길이가 15자 이하면 문자열 수까지
		{
			for (int i = 5; i < len; i++) // 15번째 글까지 별 출력
			{
				str1[i] = '*';
				star_cnt++;				// 별 갯수 카운트
			}
		}

		else				// 단어 길이가 16자 이상이면 15자까지만 별 출력
		{
			for (int i = 5; i < 15; i++) // 15번째 글까지 별 출력
			{
				str1[i] = '*';
				star_cnt++;				// 별 갯수 카운트
			}
		}
	}

	printf("별 갯수 : %d\n", star_cnt);
	printf("입력한 단어 : %s, 생략한 단어 : %s", str2, str1);
	return 0;
}
#endif