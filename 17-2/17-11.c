#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum season { SPRING, SUMMER, FALL, WINTER };	// ������ ����

int main(void)
{
	enum seasons ss;		// ������ ���� ����
	char* pc = NULL;		// ���ڿ��� ������ ������

	ss = SPRING;			// ���� ����� �� ����
	switch (ss)				// ���� ��� �Ǵ� 
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("���� ���� Ȱ�� : %s\n", pc);	// ���õ� ���ڿ� ���

	return 0;
}
#endif