#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct cracker
{
	int price;
	int calories;
};

int main(void)
{
	struct cracker a;
	printf("바사삭의 가격과 열량을 입력하세요 : ");
	scanf("%d%d", &(a.price), &(a.calories));
	printf("바사삭의 가격 : %d원\n", a.price);
	printf("바사삭의 열량 : %dkcal\n", a.calories);

	return 0;
}
#endif