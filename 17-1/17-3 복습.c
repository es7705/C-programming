#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)

struct profile
{
	int age;			// ����
	double height;		// Ű
	char* name;
};

struct student
{
	struct profile pf;	// profile ����ü�� ����� ���
	int id;				// �й�
	double grade;		// ����
};

int main(void)
{
	// 17-3 �ٸ� ����ü�� ����� ���� ����ü ���
	struct student yuni;
	char temp[20];

	printf("�̸��� �Է��ϼ��� : ");
	gets(temp);
	yuni.pf.name = (char*)malloc(strlen(temp) + 1);

	if (yuni.pf.name == NULL)
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}
	strcpy(yuni.pf.name, temp);

	yuni.pf.age = 17;
	yuni.pf.height = 159.2;
	yuni.id = 20;
	yuni.grade = 3.4;

	printf("�̸� : %s\n", yuni.pf.name);
	printf("���� : %d\n", yuni.pf.age);
	printf("Ű : %.1lf\n", yuni.pf.height);
	printf("�й� : %d\n", yuni.id);
	printf("���� : %.1lf\n", yuni.grade);

	free(yuni.pf.name);
	return 0;
}
#endif