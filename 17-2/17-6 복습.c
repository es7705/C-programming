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

	printf("���� : %d\n", (*p).kor);
	printf("���� : %d\n", p->eng);
	printf("���� : %d\n", p->mat);

	return 0;
}
#endif