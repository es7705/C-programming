#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_gets(char* str, int size);	// size = 7

int main(void)
{
	char str[7];		// 문자을 저장할 배열, 문자 6개까지 저장

	my_gets(str, sizeof(str)); // 한 줄 문자열을 출력하는 함수(주소, 배열의 크기) 
	printf("입력한 문자열 : %s\n", str);	// 입력한 문자열 출력, 문자 6개까지 출력


	return 0;
}

void my_gets(char* str, int size) // str은 char 배열, size는 배열의 크기
{
	int ch;	// gethar 함수의 반환값을 저장할 변수
	int i = 0; // str 배열의 첨자

	ch = getchar();	// 첫 번재 문자 입력
	while ((ch != '\n') && (i < size - 1)) // ch가 개행문자가 아니면 && i는 5까지 왜냐면 6일때 널 문자를 넣어야 하니까
	{
		str[i] = ch;	// 입력한 문자를 배열에 저장
		i++;			// 첨자 증가
		ch = getchar();		// 새로운 문자 입력
	}
	str[i] = '\0';	// i = 6일 때 입력된 문자열의 끝에 널 문자를 저장
}

#endif