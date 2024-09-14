#include <stdio.h>
#include <string.h>

int main(void)
{
	/*int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);

	printf("\n");

	char ch1 = 'A';
	char ch2 = 65;

	printf("%c %d\n", ch1, ch1);
	printf("%d %c\n", ch2, ch2);

	printf("\n");

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123456789;

	printf("%d\n", sh);
	printf("%d\n", in);
	printf("%ld\n", ln);
	printf("%lld\n", lln);
	printf("%d\n", sizeof(long long));*/

	unsigned int a;

	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a);

	printf("\n");

	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	printf("%s %s\n", fruit, "jam");

	strcpy(fruit, "banana");
	printf("%s\n", fruit);


	printf("\n");

	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	//tax_rate = 0.15;	
	income = 456;
	tax = income * tax_rate;
	printf("%.1lf\n", tax);

	printf("\n");

	int kor = 70, eng = 80, mat = 90;
	int tot;

	tot = kor + eng + mat; \
	printf("%d, %d, %d\n", kor, eng, mat);
	printf("%d\n", tot);




	return 0;
}