#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2차원 char 배열
	char animal[5][20]; // 2차원 char 배열 선언, 5마리의 동물과 20 글자 이내의 이름
	int i; // 반복 제어 변수
	int count;	// 행의 수를 저장할 변수

	count = sizeof(animal) / sizeof(animal[0]); // 행의 수 계산
	for (i = 0; i < count; i++) // 행의 수만큼 반목
	{
		scanf("%s", animal[i]); // 문자열 입력 i : 0 ~ 5
		// 문자열 입력, 주소 연산자 &를 붙일 필요가 없음
		// animal[0]은 배열명으로 부분배열의 시작 위치 값이다
	}

	for (i = 0; i < count; i++)
	{
		printf("%s", animal[i]); // 입력된 문자열 출력
	}

	return 0;
}
#endif