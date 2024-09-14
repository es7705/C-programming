#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa);

int main(void)
{
	int ary[5] = { 1,2,3,4,5 };
	print_ary(ary);
	return 0;
}

void print_ary(int pa[5])		// 함수의 매개변수 자리에 배열을 선언하면 배열의 저장 공간이 할당되지 않으며,
{								// 배열명은 컴파일 과정에서 첫 번째 배열 요소를 가리키는 포인터로 바뀜
	int i;					    // 매개변수 자리에 선언된 배열에서 배열 요소의 개수는 의미가 없으며 생략도 가능
	for (i = 0; i < 5; i++)		// 컴파일러는 배열명을 자동으로 포인터로 바꾸고 모든 배열 요소를 사용할 수 있도록 포인터 연산을 수행
	{
		printf("%d ", pa[i]);
	}
}
#endif