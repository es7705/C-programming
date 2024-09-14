#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// scanf 함수를 사용한 문자열 입력
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);		// apple jam을 입력, 엔터를 누르면 공백 문자 이전까지만 저장
	printf("첫 번째 단어 : %s\n", str);	// apple 출력
	scanf("%s", str);			// 버퍼에 남아 있는 jam이 입력됨
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str); // jam 출력

	return 0;
}
#endif