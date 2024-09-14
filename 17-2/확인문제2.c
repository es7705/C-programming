#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;

struct train
{
	int seats;
	Train* next;
};

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct train {
	int seats;
	struct Train* next;
}Train;

int main(void)
{
	Train* head = NULL;
	Train* tail = NULL;

	int i;

	for ( i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct train {
    int seats;
    struct train* next; // ���⼭ ����ü �̸��� �ҹ��ڷ� ����
} Train;

int main(void)
{
    Train* head = NULL;
    Train* tail = NULL;

    int i;

    for (i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = tail = (Train*)malloc(sizeof(Train));
            if (head == NULL) {
                printf("�޸𸮰� �����մϴ�.\n");
                exit(1);
            }
            head->seats = 0;
            head->next = NULL;
        }
        else
        {
            tail->next = (Train*)malloc(sizeof(Train));
            if (tail->next == NULL) {
                printf("�޸𸮰� �����մϴ�.\n");
                exit(1);
            }
            tail = tail->next;
            tail->seats = 2;
            tail->next = NULL;
        }
    }

    // ����Ʈ�� ������ ����غ��ϴ�.
    Train* current = head;
    while (current != NULL)
    {
        printf("�¼�: %d, �ּ�: %p\n", current->seats, (void*)current);
        current = current->next;
    }

    // �Ҵ�� �޸𸮸� �����մϴ�.
    current = head;
    while (current != NULL)
    {
        Train* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
#endif
