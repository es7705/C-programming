#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct student
//{
//	int num;
//	double grade;
//};

typedef struct
{
	int num;
	double grade;
} Student;

// typedef struct student Student;	// Student������ ������
void print_data(Student* ps);	// �Ű������� Student���� ������

int main(void)
{
	Student s1 = { 315, 4.3 };

	print_data(&s1);

	return 0;
}

void print_data(Student* ps)
{
	printf("�й� : %d\n", ps->num);
	printf("���� : %.1lf\n", ps->grade);
}
#endif