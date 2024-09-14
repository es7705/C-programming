#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma pack(1)

struct student	// 구조체 사용
{

	int num; // int형 멤버
	double grade; // double형 멤버
};				// 세미콜론 사용

int main(void)
{
	struct student s1; // 변수 선언

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}
#endif