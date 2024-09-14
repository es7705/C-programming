#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//배열명 역할을 하는 포인터
	int ary[3];
	int* pa = ary; // 포인터에 배열명 저장 (주소값을 저장한 것과 같다)
	int i;

	*pa = 10; //첫 번째 배열 요소에 10 대입 == ary[0]
	*(pa + 1) = 20; //두 번째 배열 요소에 20 대입 == ary[1]
	pa[2] = pa[1] + pa[0]; //대괄호를 써서 pa를 배열명처럼 사용	== ary[2] = ary[1] + ary[0];

	for ( i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]); // 포인터로 모든 배열 요소 출력 pa[i] == ary[i]
	}


	return 0;
}
#endif