#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 포인터로 문자열을 사용하는 방법
	char* dessert;
	dessert = "apple";		// 첫 번째 문자의 주소 값을 저장, a의 주소 값

	printf("오늘 후식은 %s입니다.\n", *dessert);
	dessert = "banana";			// 첫 번째 문자의 주소 값을 저장, b의 주소 값
	printf("내일 후식은 %s입니다.\n", *dessert);

	/*
	일단 *dessert 는 apple이 아니고 문자 a입니다. 
	dessert는 apple 문자열이 저장된 메모리에서 첫 번째 문자인 a의 주소값을 가지고 있습니다. 
	따라서 *dessert는 문자 a가 되는 것이지요. 
	그런데 dessert가 문자 a의 주소만 가지고 있어도 apple 문자열 전체를 출력할 수 있는 것은 
	*dessert로 a를 찍고 dessert + 1로 다음 주소를 계산한 후에 *(dessert + 1) 와 같이 
	참조연산을 수행해서 문자 p를 찍고 또 *(dessert + 2)로 두 번째 p를 찍고... 이런식으로 
	널문자가 나올 때까지 반복문을 돌리면 모든 문자를 출력할 수 있기 때문입니다. 
	다행히 printf 함수에는 이런 과정이 프로그래밍이 되어 있어서 
	우리는 단지 변환문자만 잘 써주면 됩니다. 그 변환문자가 %s지요. 
	char 포인터로 문자열을 연결해서 쓰는 경우는 그런데요. 
	다른 포인터의 경우에는 생각하신 것이 맞습니다.
	int a = 10;
	int *p = &a;
	여기서 *p는 바로 a가 되는 것이지요.
	*/

	return 0;
}
#endif