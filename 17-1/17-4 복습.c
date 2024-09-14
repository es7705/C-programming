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
	// 17-4 최고 학점의 학생 데이터 출력
	struct student s1 = { 10, "김상수", 3.4 },
		s2 = { 20, "박병호", 3.1 },
		s3 = { 30, "나지완", 4.5 };
	
	struct student max;	// 최고 학점 학생

	max = s1;

	if (s2.grade > max.grade)
		max = s2;
	if (s3.grade > max.grade)
		max = s3;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);

	return 0;
}
#endif