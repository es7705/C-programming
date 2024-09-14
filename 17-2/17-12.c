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

// typedef struct student Student;	// Student형으로 재정의
void print_data(Student* ps);	// 매개변수는 Student형의 포인터

int main(void)
{
	Student s1 = { 315, 4.3 };

	print_data(&s1);

	return 0;
}

void print_data(Student* ps)
{
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}
#endif