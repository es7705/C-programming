#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	// 구조체 포인터와 -> 연산자	
	struct score yuni = { 90, 80 ,70 };
	struct score* ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);

	return 0;
}
#endif