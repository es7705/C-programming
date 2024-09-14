#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>		// strncpy 함수 사용을 위한 헤더 파일 포함

int main(void)
{
	// 원하는 개수의 문자만을 복사하는 strncpy 함수
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);
	str[5] = '\0';
	printf("%s\n", str);
	
	return 0;
}
#endif