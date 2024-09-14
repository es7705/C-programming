#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int kor, eng, mat;
}score;

int main(void)
{
	score yuni = { 90, 80, 70 };
	score* p = &yuni;

	printf("국어 : %d\n", (*p).kor);
	printf("영어 : %d\n", p->eng);
	printf("수학 : %d\n", p->mat);

	return 0;
}
#endif