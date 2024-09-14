#include <stdio.h>	

int main()
{
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12);

	printf("\n");

	printf("%.1lf\n", 1e6);
	printf("%.8lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);
	
	printf("\n");

	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c은 %s입니다.\n", '1', "first");

	printf("\n");

	printf("학번 : %d\n"	, 32165);
	printf("이름 : %s\n", "홍길동");
	printf("학점 : %c\n", 'A');

	return 0;
}