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
		printf("현재 색깔 : %d\n", c);
		printf("현재 방향 : %d\n", direction);
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
	case UP: printf("현배 방향 : 위");
		break;
	case DOWN: printf("현재 방향 : 아래");
		break;
	case LEFT: printf("현재 방향 : 왼쪽");
		break;
	case RIGHT: printf("현재 방향 : 오른쪽");
		break;
	}

	return 0;
}
#endif