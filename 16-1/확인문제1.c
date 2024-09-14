#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*double* weight = (double*)malloc(sizeof(double));
	int* s = (int*)malloc(10*sizeof(int));
	char* s = (char*)malloc(80*sizeof(char));*/

	int ary[5] = { 1, 2, 3, 4, 5 };
	int* pa, * pb, * pc;
	int i;
	pa = (int*)malloc(sizeof(ary));

	for (i = 0; i < 5; i++)
	{
		pa[i] = ary[i];
	}

	pb = (int*)calloc(pa[3], sizeof(int));
	pc = (int*)realloc(NULL, pa[4]);

	return 0;
}
#endif