#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct marriage
{
	char name[20];
	int age;
	char gender;
	double height;
};

struct marriage m1 = { "Andt", 22, 'm', 187.5 };
struct marriage* mp = &m1;

int main(void)
{
	printf("%10s%5d,%3c,%5.1lf", mp->name, mp->age, mp->gender, mp->height);

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct marriage {
	char name[20];
	int age;
	char gender;
	double height;
}marriage;

void print_data(marriage* mp);

int main(void)
{
	marriage m1 = { "Andy", 22, 'm', 187.5 };
	// marriage* mp = &m1;
	print_data(&m1);
	return 0;
}

void print_data(marriage* mp)
{
	printf("�̸� : %s\n", mp->name);
	printf("���� : %d\n", mp->age);
	printf("���� : %c\n", mp->gender);
	printf("Ű : %.1lf\n", mp->height);
}
#endif