#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	// 문자열을 붙이는 strcat, strncat 함수
	char str[80] = "straw";		// 문자열 초기화

	strcat(str, "berry");		// str 배열에 문자열 붙이기 
	printf("%s\n", str);
	strncat(str, "piece", 3);	// str 배열에 3개의 문자 붙이기
	printf("%s\n", str);
	
	return 0;
}
#endif