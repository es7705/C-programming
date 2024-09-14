#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

int main(void)
{
	//fgets 함수를 사용한 문자열 입력
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);		// 문자열 입력, (배열명, 배열의 크기, 표준 입력)
	// 엔터(개행 문자)를 누른 것까지 저장 되어서 apple jam이 촐력되고 바로 줄이 바뀜
	str[strlen(str) - 1] = '\0';		// 개행 문자 제거 
	printf("입력된 문자열은 %s입니다.\n", str); // 문자열 출력
	
	return 0;
}
#endif