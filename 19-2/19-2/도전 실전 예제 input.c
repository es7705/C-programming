#ifndef __INPUT_H_
#define __INPUT_H_
#include <stdio.h>

extern int a, b;
char c;

void input_data()
{	
	printf("수식 입력(종료 Ctrl + z) : ");
	scanf("%d%c%d", a, c, b);
}
#endif 
