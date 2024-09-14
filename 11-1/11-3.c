#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// getchar 함수와 putchar 함수 사용
	int ch;						// 입력 문자를 저장할 변수
	ch = getchar();				// 함수가 반환하는 문자를 바로 저장, 반환형이 int형임
	printf("입력한 문자 : ");
	putchar(ch);				// 입력한 문자 추력
	putchar("\n");				// 개행 문자 출력, 출력한 문자르 다시 반환, 출력 과정에서 에러가 발생하면 -1을 반환
	return 0;
}
#endif