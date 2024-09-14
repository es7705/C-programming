#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VER 6				// 치환될 부분이 있는 매크로명 정의	
#define BIT16				// 치환될 부분이 없는 매크로명 정의
int main(void)
{
	int max;

#if VER >= 6									 // 매크로 명 VER이 6 이상이면
	printf("버전이 6보다 높습니다 : %d\n", VER);	 // 이 문장 컴파일
#elif VER >= 4									 // 매크로 명 VER이 4 이상이면 
	printf("버전이 4보다 높습니다. : %d\n", VER);  // 이 문장 컴파일
#else											 // 그렇지 않으면
#error	컴파일러 버전은 6.0 이상이어야 합니다.		 // 메시지를 보여주고 컴파일 종료
#endif											 // #if의 끝

//#undef BIT16									 // BIT16 매크로명의 정의 취소

#ifndef BIT16									 // 매트로면 BIT6이 정의되어 있으면
	max = 100;									 // 이 문장 컴파일
	printf("정의가 안 되어 있음\n");
#else											 // BIT16이 정의되어 있지 않으면
	max = 10;									 //  이 문장 컴파일
	printf("정의 되어 있음\n");
#endif											 // #ifdef의 끝
	printf("int형 변수의 최댓값 : %d\n", max);	 //max 출력

#if (defined(BIT16) && (VER >= 6))
	printf("BIT16 매크로가 정의되어 있고, VER가 6 이상\n");	// BIT16 매크로가 정의되어 있고 VER 6 이상이면
#endif
	return 0;
}
#endif