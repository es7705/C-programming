#ifndef __INPUT_H_
#define __INPUT_H_
#include <stdio.h>

extern int a, b;
char c;

void input_data()
{	
	printf("���� �Է�(���� Ctrl + z) : ");
	scanf("%d%c%d", a, c, b);
}
#endif 
