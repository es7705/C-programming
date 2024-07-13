#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
#define LIMIT 100.0
#define	MSG "passed!"
#define ERR_PRN printf("허용 범위를 벗어났습니다.1\n")
#define INTRO "Perfect C Language \
& Basic Data Structure	"
int main(void)
{
	double radius, area;

	printf("반지름을 입력하세요(10 이하) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (area > LIMIT) ERR_PRN;
	else printf("원의 면적 : %.1lf (%s)\n", area, MSG);
	printf("%s", INTRO);
	return 0;
}
#endif