#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(char*, void*, void*);

int main(void)
{
	int w1, w2;
	double h1, h2;

	printf("ù ��° ����� ���ƿ� Ű �Է� : ");
	scanf("%d%lf", &w1, &h1);
	printf("�� ��° ����� ���̿� Ű �Է� : ");
	scanf("%d%lf", &w2, &h2);

	swap("int", &w1, &w2);
	swap("double", &h1, &h2);

	printf("ù ��° ����� ���̿� Ű : %d, %.1lf\n", w1, h1);
	printf("�� ��° ����� ���̿� Ű : %d, %.1lf\n", w2, h2);

	return 0;
}

void swap(char* type, void* a, void* b)
{
	int temp;
	double dtemp;

	if (type == "int")
	{
		temp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
		printf("type : %s\n", type);
	}
	else
	{
		dtemp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = dtemp;
		printf("type : %s\n", type);
	}
}
#endif