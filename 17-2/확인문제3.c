#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum { 
	CYAN, MAGENTA, YELLOW = 5, BLACK 
} COLOR;

typedef enum { 
	UP, DOWN, LEFT, RIGHT 
} ARROW;

int main(void)
{
	COLOR my_color = YELLOW, c;
	ARROW direction = UP;

	for ( c = CYAN; c <= BLACK; c++)		// 0 ~ 6
	{
		direction++;
		direction = direction % 4;
		printf("���� ���� : %d\n", c);
		printf("���� ���� : %d\n", direction);
		printf("\n");
		if (c == my_color)
			break;
	}
	/*printf("%d\n", CYAN);
	printf("%d\n", MAGENTA);
	printf("%d\n", YELLOW);
	printf("%d\n", BLACK);*/
	switch (direction)
	{
	case UP: printf("���� ���� : ��");
		break;
	case DOWN: printf("���� ���� : �Ʒ�");
		break;
	case LEFT: printf("���� ���� : ����");
		break;
	case RIGHT: printf("���� ���� : ������");
		break;
	}

	return 0;
}
#endif