#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_str(char** pps, int cnt);

int main(void)
{
	char* ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};
	int count;
	printf("&ptr_ary[0] : %14u\n", &ptr_ary[0]);			// ptr_ary[0]�� �ּ�, e�� �ּҰ� �ƴ� 
	printf("ptr_ary : %18u\n", ptr_ary);					// �迭���� ù ��° ����� �ּ�, ptr_ary[0]�� �ּ�
	printf("&ptr_ary[0][0] : %11u\n", &ptr_ary[0][0]);		// e�� �ּ�, ù ��° ���� ù ��° ����
	printf("ptr_ary[0] : %15u\n", ptr_ary[0]);				// ptr_ary[0]�� ���� �Ǿ� �ִ� �� == e�� �ּ�	
	printf("\"eagle\"�� �ּ� : %11u\n", "eagle");			// "eagle"�� �ּ�
	printf("\n");

	printf("t�� �ּ� : %u\n", &ptr_ary[1]);
	printf("l�� �ּ� : %u\n", &ptr_ary[2]);
	printf("s�� �ּ� : %u\n", &ptr_ary[4]);
	printf("\n");

	printf("ũ��\n");
	printf("sizeof(ptr_ary) : %d\n", sizeof(ptr_ary));
	printf("sizeof(ptr_ary[0]) : %d\n", sizeof(ptr_ary[0]));

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	printf("\n");

	printf("���ڿ� ���\n");
	print_str(ptr_ary, count);

	return 0;
}

void print_str(char** pps, int cnt)
{
	int i;

	for ( i = 0; i < cnt; i++)
	{
		 printf("%s\n", *pps++);
		// printf("%s\n", pps[i]);	// ���� ����
	}
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char* name[] = { "apple", "banana", "kiwi", "melon" };

	printf("%u\n", name[0]);		// a�� �ּ�
	printf("%u\n", &name[0][0]);	// a�� �ּ� 
	printf("%u\n", &name[0]);		// name[0]�� �ּ�
	printf("%u\n", name);			// name[0]�� �ּ�
	printf("a�� �ּ� : %u\n", "apple");

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int ary1[3] = { 1, 2, 3};
	int ary2[3] = { 4, 5, 6 };
	int* pa[] = { ary1, ary2 };	// pa[0] == ary1�� �ּ� ��, 1�� �ּ�   || , pa[1] == ary2�� �ּ� ��, 4�� �ּ�
	printf("%u\n", ary1);		// 1�� �ּ�
	printf("%u\n", &ary1);		// 1�� �ּ�
	printf("%u\n", &ary1[0]);	// 1�� �ּ�
	printf("%u\n", &pa[0]);		// pa[0]�� �ּ� 
	printf("%u\n", &pa);		// pa[0]�� �ּ� 
	printf("%u\n", pa);			// pa[0]�� �ּ� 

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int ary[2][3] = { {1,2,3}, {4,5,6} };
	printf("%u\n", ary);    // �迭�̹Ƿ� ary[0]�� �� �ּ�, ary[0]�� �ּҴ� ù ��° ����� 1�� �ּ�
	printf("%u\n", &ary);
	printf("%u\n", ary[0]);
	printf("%u\n", &ary[0]);
	printf("%u\n", &ary[0][0]);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char n1[] = "apple";
	char n2[] = "banana";
	char* name[] = { n1, n2 };
	printf("%u\n", n1);
	printf("%u\n", &n1);
	printf("%u\n", &n1[0]);
	printf("%u\n", name);
	printf("%u\n", name[0]);
	printf("%u\n", &name[0]);
	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char pa = "apple";
	char pb = "banana";
	char* pn[2] = { pa, pb };				 // pn[0] == &pa, pn[1] == &pb

	printf("1 pn : %u\n", pn);			     // pn[0]�� �ּ� ��, pn�� �ּ�
	printf("2 pn : %u\n", &pn);				 // pn[0]�� �ּ� ��, pn�� �ּ�
	printf("3 &pn[0] : %u\n\n", &pn[0]);	 // pn[0]�� �ּ� ��, pn�� �ּ�

	printf("4 pn[0] : %d\n", pn[0]);	     // pa�� �ּ�
	printf("5 &pa : %u\n\n", &pa);	         // pa�� �ּ�

	printf("6 pa : %u\n", pa);		         // a�� �ּ�
	printf("8 \"apple\" : %u\n", "apple");   // a�� �ּ�
	return 0;
}
#endif