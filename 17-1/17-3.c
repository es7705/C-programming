#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct profile					// �Ż�� ����ü ����
{
	int age;					// ���� 
	double height;				// Ű
};

struct student
{
	struct profile pf;			// profile ����ü�� ����� ���
	int id;						// �й��� ������ ���
	double grade;				// ������ ������ ���
};

int main(void)
{
	struct student yuni;		// student ����ü ���� ����

	yuni.pf.age = 17;			// pf ����� age ����� ���� ����
	yuni.pf.height = 120.3;     // pf ����� height ����� ���� ����
	yuni.id = 212;
	yuni.grade = 3.4;

	printf("���� : %d\n", yuni.pf.age);			// pf ����� age ��� ���
	printf("Ű : %.1lf\n", yuni.pf.height);		// pf ����� height ��� ���
	printf("�й� : %d\n", yuni.id);				// id ��� ���
	printf("���� : %.1lf\n", yuni.grade);		// grade ��� �߷�

	return 0;
}
#endif