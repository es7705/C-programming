#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	double left;
	double right;
}vison;

void exchange(vison *robot);

int main(void)
{
	// 포인터를 사용한 시력 교환
	vison robot;
	
	printf("시력 입력 :");
	scanf("%lf%lf", &robot.left, &robot.right);
	exchange(&robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

void exchange(vison *robot)
{
	double temp;

	temp = robot->left;
	robot->left = robot->right;
	robot->right = temp;
	
	//return robot;
}
#endif


#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {													// 로봇의 시력을 저장할 구조체
	double left;
	double right;
}vison;
		
vison exchange(vison robot);										// 두 시력을 바꾸는 함수

int main(void)
{
	// 구조체를 반환해 두 변수의 값 변환
	vison robot;													// 구조체 변수 선언
	vison res;														// 바뀐 시력은 저정할 구조체 변수 선언
	
	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));						// 로봇의 시력 입력
	res = exchange(robot);											// 시력 교환 함수 호출 후 변수 res에 저장
	printf("바뀐 시력 : %.1lf %.1lf\n", res.left, res.right);		// 바뀐 시력 출력
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);		// robot은 안 바뀜

	return 0;
}

vison exchange(vison robot)											// 구조체를 반환하는 함수
{	
	double temp;													// 교환을 위한 임시 변수

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;													// 구조체 변수 반환
}
#endif


