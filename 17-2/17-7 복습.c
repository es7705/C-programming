#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
}address;

int main(void)
{
	address list[3] = {
		{"ȫ�浿", 22, "010-2203-1111", "�︪�� ����"},
		{ "���缺", 21, "010-4335-1511", "���ֵ� ����" },
		{"ȫ�浿", 22, "010-2246-6611", "������ ����"}
	};

	int i;
	for ( i = 0; i < 3; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, 
			list[i].tel, list[i].addr);
	}
	return 0;
}
#endif