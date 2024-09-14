#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
}address;

int main(void)
{
	address list[3] = {
		{"홍길동", 22, "010-2203-1111", "울릉도 독도"},
		{ "오재성", 21, "010-4335-1511", "제주도 독도" },
		{"홍길동", 22, "010-2246-6611", "영종도 독도"}
	};

	int i;
	for ( i = 0; i < 3; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, 
			list[i].tel, list[i].addr);
	}
	return 0;
}
#endif