#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_str(char** pps, int cnt);

int main(void)
{
	char* ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};
	int count;
	printf("&ptr_ary[0] : %14u\n", &ptr_ary[0]);			// ptr_ary[0]의 주소, e의 주소가 아님 
	printf("ptr_ary : %18u\n", ptr_ary);					// 배열명은 첫 번째 요소의 주소, ptr_ary[0]의 주소
	printf("&ptr_ary[0][0] : %11u\n", &ptr_ary[0][0]);		// e의 주소, 첫 번째 열의 첫 번째 문자
	printf("ptr_ary[0] : %15u\n", ptr_ary[0]);				// ptr_ary[0]에 저장 되어 있는 것 == e의 주소	
	printf("\"eagle\"의 주소 : %11u\n", "eagle");			// "eagle"의 주소
	printf("\n");

	printf("t의 주소 : %u\n", &ptr_ary[1]);
	printf("l의 주소 : %u\n", &ptr_ary[2]);
	printf("s의 주소 : %u\n", &ptr_ary[4]);
	printf("\n");

	printf("크기\n");
	printf("sizeof(ptr_ary) : %d\n", sizeof(ptr_ary));
	printf("sizeof(ptr_ary[0]) : %d\n", sizeof(ptr_ary[0]));

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	printf("\n");

	printf("문자열 출력\n");
	print_str(ptr_ary, count);

	return 0;
}

void print_str(char** pps, int cnt)
{
	int i;

	for ( i = 0; i < cnt; i++)
	{
		 printf("%s\n", *pps++);
		// printf("%s\n", pps[i]);	// 같은 거임
	}
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char* name[] = { "apple", "banana", "kiwi", "melon" };

	printf("%u\n", name[0]);		// a의 주소
	printf("%u\n", &name[0][0]);	// a의 주소 
	printf("%u\n", &name[0]);		// name[0]의 주소
	printf("%u\n", name);			// name[0]의 주소
	printf("a의 주소 : %u\n", "apple");

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
	int* pa[] = { ary1, ary2 };	// pa[0] == ary1의 주소 즉, 1의 주소   || , pa[1] == ary2의 주소 즉, 4의 주소
	printf("%u\n", ary1);		// 1의 주소
	printf("%u\n", &ary1);		// 1의 주소
	printf("%u\n", &ary1[0]);	// 1의 주소
	printf("%u\n", &pa[0]);		// pa[0]의 주소 
	printf("%u\n", &pa);		// pa[0]의 주소 
	printf("%u\n", pa);			// pa[0]의 주소 

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int ary[2][3] = { {1,2,3}, {4,5,6} };
	printf("%u\n", ary);    // 배열이므로 ary[0]의 의 주소, ary[0]의 주소는 첫 번째 요소인 1의 주소
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

	printf("1 pn : %u\n", pn);			     // pn[0]의 주소 즉, pn의 주소
	printf("2 pn : %u\n", &pn);				 // pn[0]의 주소 즉, pn의 주소
	printf("3 &pn[0] : %u\n\n", &pn[0]);	 // pn[0]의 주소 즉, pn의 주소

	printf("4 pn[0] : %d\n", pn[0]);	     // pa의 주소
	printf("5 &pa : %u\n\n", &pa);	         // pa의 주소

	printf("6 pa : %u\n", pa);		         // a의 주소
	printf("8 \"apple\" : %u\n", "apple");   // a의 주소
	return 0;
}
#endif