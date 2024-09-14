#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)

struct profile
{
	int age;			// 나이
	double height;		// 키
	char* name;
};

struct student
{
	struct profile pf;	// profile 구조체를 멤버로 사용
	int id;				// 학번
	double grade;		// 학점
};

int main(void)
{
	// 17-3 다른 구조체를 멤버로 갖는 구조체 사용
	struct student yuni;
	char temp[20];

	printf("이름을 입력하세요 : ");
	gets(temp);
	yuni.pf.name = (char*)malloc(strlen(temp) + 1);

	if (yuni.pf.name == NULL)
	{
		printf("메모리가 부족합니다.\n");
		exit(1);
	}
	strcpy(yuni.pf.name, temp);

	yuni.pf.age = 17;
	yuni.pf.height = 159.2;
	yuni.id = 20;
	yuni.grade = 3.4;

	printf("이름 : %s\n", yuni.pf.name);
	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);

	free(yuni.pf.name);
	return 0;
}
#endif