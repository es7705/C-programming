#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	int id;
	char name[20];
	double grade;
};

int main(void)
{
	// 17-4 �ְ� ������ �л� ������ ���
	struct student s1 = { 10, "����", 3.4 },
		s2 = { 20, "�ں�ȣ", 3.1 },
		s3 = { 30, "������", 4.5 };
	
	struct student max;	// �ְ� ���� �л�

	max = s1;

	if (s2.grade > max.grade)
		max = s2;
	if (s3.grade > max.grade)
		max = s3;

	printf("�й� : %d\n", max.id);
	printf("�̸� : %s\n", max.name);
	printf("���� : %.1lf\n", max.grade);

	return 0;
}
#endif