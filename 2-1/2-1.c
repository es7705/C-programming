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
	printf("%c�� %s�Դϴ�.\n", '1', "first");

	printf("\n");

	printf("�й� : %d\n"	, 32165);
	printf("�̸� : %s\n", "ȫ�浿");
	printf("���� : %c\n", 'A');

	return 0;
}