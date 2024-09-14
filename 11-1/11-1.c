#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 대문자를 소문자로 변경 (대문자와 소문자는 32차이)
	char small, cap = 'G';			// char형 변수 선언과 초기화

	if ((cap > 'A') && (cap <= 'Z'))	// 대문자 범위라면
	{
		small = cap + ('a' - 'A'); // 103 = 71 + (97 - 65)
	}	// 대/ 소문자의 차이를 더해 소문자로 변환

	printf("대문자 : %d %c", cap, '\n');	// '\n'를 %c로 출력하면 출이 바뀐다.
	printf("소문자 : %d", small);

	return 0;
}
#endif