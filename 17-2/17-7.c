#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct address			// 주소록을 만들 구조체 선언
{
	char name[20];		// 이름을 저장할 멤버
	int age;			// 나이를 저장할 멤버
	char tel[20];		// 전화번호를 저장할 멤버
	char addr[80];		// 주소를 저장할 멤버
};

int main(void)
{
	// 구조체 배열
	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 15, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};


	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0;
}
#endif