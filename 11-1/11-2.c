#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 공백이나 제어 문자의 입력
	char ch1, ch2;

	scanf(" %c %c", &ch1, &ch2);	// 화이트 스페이스를 제외한 문자들만 입력하고 싶다면 %c 앞에 화이트 스페이스 사용 
	// 2개의 문자를 연속 입력 

	printf("[%c%c]", ch1, ch2);
	// 입력된 문자 출력

	printf("%d, %d", ch1, ch2);
	// 공백 문자는 아스키 코드 값 32
	// 개행 문자는 아스키 코드 값 10

	printf("\n");

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", a, b);
	return 0;
}
#endif