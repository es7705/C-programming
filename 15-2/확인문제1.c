#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double div(int, int);
	void prn(char*);
	int* save(int);

	double (*fpa)(int, int);
	void (*fpb)(char*);
	int (*fpc)(int);


	fpa = div;
	fpb = prn;
	fpc = save;

	return 0;
}

#endif