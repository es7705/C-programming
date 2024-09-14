#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_str(char** pps, int cnt);

int main(void)
{
	// 이중 포인터 활용 2 : 포인터 배열을 매개변수로 받는 함수
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // 초기화
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	printf("%d\n", count);
	print_str(ptr_ary, count); // ptr_ary[] 배열의 첫 번째 주소를 넘겨줌

	return 0;
}

void print_str(char** pps, int cnt) // ptr_ary[]의 첫 번째 주소를 매개 변수로 받음
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}

#endif