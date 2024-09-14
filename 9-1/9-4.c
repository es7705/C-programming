#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// const를 사용한 포인터
	int a = 10, b = 20;
	const int* pa = &a;		// 포인터 pa는 변수 a를 가리킨다.

	printf("변수 a 값 : %d\n", *pa);	// 포인터를 간접 참조해 a 출격
	pa = &b;						// 포인터가 변수 b를 가리키게 한다.
	printf("변수 b 값 : %d\n", *pa); // 포인터를 간접 참조해 b 값 출력
	pa = &a;						// 포인터가 다시 변수 a를 가리킨다.
	a = 20;							// a를 직접 참조해 값을 바꾼다.
	printf("변수 a 값 : %d\n", *pa); // 포인터로 간접 참조해 바뀐 값 출력
	// const의 의미 : pa가 가리키는 변수 a는 pa를 간접 참조해 바꿀 수 없다는 의미
	// *pa = 34; 간접 참조해 a 값을 바꿀 수 없음
	
	return 0;
}
#endif