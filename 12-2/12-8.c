#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana"; // 배열의 첫 번째 요소인 b의 주소를 저장
	char* ps2 = str2; // 배열명을 배열의 첫 번째 요소의 주소이다. 즉, a의 주소

	printf("최초 문자열 : %s\n", str1);	// strawberry, 여기도 str1 배열의 첫 번째 요소인 s의 주소

	strcpy(str1, str2);	// 다른 char 배열의 문자열 복사, str2는 a의 주소
	printf("바뀐 문자열 : %s\n", str1);	// apple

	strcpy(str1, ps1);					// 포인터에 저장되어 있는 b의 주소
	printf("바뀐 문자열 : %s\n", str1);	// banana

	strcpy(str1, ps2);					// 포인터에 저장 되어 있는 str2의 주소. 즉, a의 주소
	printf("바뀐 문자열 : %s\n", str1);	// apple

	strcpy(str1, "banana");				// b의 주소
	printf("바뀐 문자열 : %s\n", str1);	// banana

	return 0;
}
#endif