#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct list{
	int num;
	struct list* next;
}list;

int main(void)
{
	 list a = { 10, NULL }, b = { 20, NULL }, c = { 30, NULL };
	 list* head = &a;
	 list* current;

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);
	printf("head->next->next->num : %d\n", head->next->next->num);

	printf("list all : ");
	current = head;			// 최초 current 포인터가 a를 가리킴, 최초 current에 a의 주소를 저장

	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;			// a.next 즉 b의 주소를 current 포인터에 저장, c도 마찬가지
											// 그러면 마지막 c.next에는 NULL값이 저장 되어 있으므로 current도 NULL 출력 끝
	}

	printf("\n");

	return 0;
}
#endif