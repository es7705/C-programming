#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* cp = "apple"; // a-100

	while (*cp != '\0')
	{
		printf("%s\n", cp);
		cp++; // p-101, p-102, l-103, e-105
	}

	/*char* dessert = "banana";
	while (*dessert != '\0')
	{
		putchar(*dessert);
		dessert++;
	}*/

	/*char* pa = "apple";
	char* pb = "apple";
	printf("%p %p", pa, pb);*/	// 같은 문자열 상수를 여러 번 사용한 경우 하나의 문자열만 메모리에 저장

	return 0;
}
#endif