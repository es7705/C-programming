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
    struct train* next; // 여기서 구조체 이름을 소문자로 통일
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
                printf("메모리가 부족합니다.\n");
                exit(1);
            }
            head->seats = 0;
            head->next = NULL;
        }
        else
        {
            tail->next = (Train*)malloc(sizeof(Train));
            if (tail->next == NULL) {
                printf("메모리가 부족합니다.\n");
                exit(1);
            }
            tail = tail->next;
            tail->seats = 2;
            tail->next = NULL;
        }
    }

    // 리스트의 내용을 출력해봅니다.
    Train* current = head;
    while (current != NULL)
    {
        printf("좌석: %d, 주소: %p\n", current->seats, (void*)current);
        current = current->next;
    }

    // 할당된 메모리를 해제합니다.
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
