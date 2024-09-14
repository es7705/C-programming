#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);				// 포인터의 주소를 매개변수로 받음 이중포인터에 포인터 주소를 저장

int main(void)
{
	printf("-----------main 함수-----------\n");
	char* pa = "success";							// s의 주소 저장
	char* pb = "failure";							// f의 주소 저장

	printf("&(\"success\") s의 주소 : %u\n", &("success"));       // s의 주소
	printf("pa s의 주소 : %u\n", pa);			                 // pa에 담긴 s의 주소	
	printf("\"success\" s의 주소 : %u\n", "success");			 // s의 주소, 문자열 자체는 첫 번째 요소의 주소
	printf("&(\"failures\") f의 주소 : %u\n", &("failure"));      // s의 주소
	printf("pb f의 주소 : %u\n", pb);							 // pa에 담긴 s의 주소	
	printf("\"failure\" f의 주소 : %u\n", "failure");			 // s의 주소, 문자열 자체는 첫 번째 요소의 주소
	printf("\n");

	printf("pa의 주소 : %u\n", &pa);					 // pa의 주소값
	printf("포인터 pa의 첫 번째 요소 : %c\n", *pa);   // s, *(pa + 0) == pa[0]
	printf("배열 pa의 첫 번째 요소 : %c\n", pa[0]);   // s
	printf("pb의 주소 : %u\n", &pb);					 // pb의 주소값
	printf("포인터 pb의 첫 번째 요소 : %c\n", *pb);   // f, *(pb + 0) == pb[0]
	printf("배열 pb의 첫 번째 요소 : %c\n", pb[0]);   // f
	printf("\n");

	printf("바뀌기 전 문자열 출력 : pa -> %s, pb -> %s\n", pa, pb);		// 포인터에 저장된 문자열 출력
	printf("\n");
	swap_ptr(&pa, &pb);													// 포인터의 주소를 전달 (문자열의 주소 아님)
	printf("\n");
	printf("-----------main 함수-----------\n");
	printf("바뀐 후 문자열 출력 : pa -> %s, pb -> %s\n", pa, pb);			// (포인터 주소를 바꾼후 문자열 출력)

	return 0;
}

void swap_ptr(char** ppa, char** ppb)				// 포인터 pa, pb의 주소를 받아옴
{	
	printf("-----------swap_ptr 함수-----------\n");

	printf("*바뀌기 전*\n");
	printf("ppa에 담긴 pa의 주소 : %u\n", ppa);					// pa의 주소
	printf("ppb에 담긴 pb의 주소 : %u\n", ppb);					// pb의 주소
	printf("*ppa s의 주소 :%u\n", *ppa);							// ppa에 저장된 포인터 pa가 저장하고 있는 것, 즉, s의 주소
	printf("*ppb f의 주소 :%u\n", *ppb);							// ppb에 저장된 포인터 pb가 저장하고 있는 것, 즉, f의 주소
	printf("pa가 가르키는 문자열의 첫 번째 요소 %c\n", **ppa);		// 두 번 역참조, 즉, pa가 가르키는 주소의 첫 번째 요소 s
	printf("pb가 가르키는 문자열의 첫 번째 요소 %c\n", **ppb);		// 두 번 역참조, 즉, pb가 가르키는 주소의 첫 번째 요소 f

	char* pt;
	pt = *ppa;			// 역참조로 pa에 저장된 문자열의 첫 번째 요소 주소 s의 주소를 pt에 저장
	*ppa = *ppb;		// 역참조로 pb에 저장된 문자열의 첫 번째 요소 주소 f의 주소를 success 문자열 주소에 저장				
	*ppb = pt;		    // pt에 저장된 f의 주소를 "success"문자열에 저장						

	printf("\n");
	printf("pa와 pb의 주소를 바꾸는 것이 아닌 \"success\"의 주소를 pb에 저장하고 \"failure\"의 주소를 pa에 저장하여 바뀌는 것\n");
	printf("\n");

	printf("*바뀐 후*\n");
	printf("ppa에 담긴 pa의 주소 : %u\n", ppa);					// pa의 주소
	printf("ppb에 담긴 pb의 주소 : %u\n", ppb);					// pb의 주소
	printf("*ppa f의 주소 :%u\n", *ppa);						    // ppa에 저장된 pa의 주소가 담고 있는 것, f의 주소
	printf("*ppb s의 주소 :%u\n", *ppb);							// ppb에 저장된 pb의 주소가 담고 있는 것, s의 주소
	printf("pa가 가르키는 문자열의 첫 번째 요소: %c\n", **ppa);   // 두 번 역참조, 즉, pa가 가르키는 주소의 첫 번째 요소 f
	printf("pb가 가르키는 문자열의 첫 번째 요소: %c\n", **ppb);   // 두 번 역참조, 즉, pb가 가르키는 주소의 첫 번째 요소 s

}

#endif