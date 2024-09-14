#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main(void)
{
	// 이중 포인터 활용 1 : 포인터 값을 바꾸는 함수의 매개변수
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);		// 바꾸기 전에 문자열 출력
	swap_ptr(&pa, &pb);							// 함수 호출
	printf("pa -> %s, pb -> %s\n", pa, pb);		// 바꾼 후에 문자열 출력

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;    // temp
	pt = *ppa;   // *pa의 주소를 temp에 임시 저장
	*ppa = *ppb; // *pa의 주소를 *pa에 저장
	*ppb = pt;	 // 임시 장소에 있던 *pa의 주소를 *pb에 저장
}


#endif