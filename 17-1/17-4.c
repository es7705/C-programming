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
	struct student s1 = { 12, "lee", 3.5 }, s2 = { 15, "kim", 3.3 }, s3 = { 14, "Hong", 1.23 };

	struct student max;

	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("학점 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);

	return 0;
}
#endif