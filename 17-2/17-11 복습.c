#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum {
	SPRING = 5, SUMMER, FALL, WINTER
}season;

int main(void)
{
	season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING :
		pc = "inline"; 
			break;
	case SUMMER :
		pc = "swimming";
			break;
	case FALL :
		pc = "trip";
			break;
	case WINTER :
		pc = "sking";
			break;
	}
	printf("나의 레저 활동 : % s\n", pc);
	printf("나의 레저 활동 : % d\n", SUMMER);


	return 0;
}
#endif