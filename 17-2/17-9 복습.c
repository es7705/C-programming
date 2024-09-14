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
	current = head;			// ���� current �����Ͱ� a�� ����Ŵ, ���� current�� a�� �ּҸ� ����

	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;			// a.next �� b�� �ּҸ� current �����Ϳ� ����, c�� ��������
											// �׷��� ������ c.next���� NULL���� ���� �Ǿ� �����Ƿ� current�� NULL ��� ��
	}

	printf("\n");

	return 0;
}
#endif