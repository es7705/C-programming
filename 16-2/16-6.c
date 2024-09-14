#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv)
{
	int i;
	printf("%d\n", argc);
	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}

	/*
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
		// printf("%s\n", argv[i]);
	}
	*/

	return 0;
}
#endif