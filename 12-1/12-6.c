#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 표준 입력 함수의 버퍼 공유 문제
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);

	// 개행 문자 제거
	/*
		fgetc(stdin);	// 버퍼에서 하나의 문자를 읽어서 반환 , 반환 문자는 버림	
		getchar();	    // 버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
		scanf("%*c");	// 버퍼에서 하나의 문자를 읽어서 버림, 변수는 필요 없음
	*/
	

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}
#endif