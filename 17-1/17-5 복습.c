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
	// �����͸� ����� �÷� ��ȯ
	vison robot;
	
	printf("�÷� �Է� :");
	scanf("%lf%lf", &robot.left, &robot.right);
	exchange(&robot);
	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);

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

typedef struct {													// �κ��� �÷��� ������ ����ü
	double left;
	double right;
}vison;
		
vison exchange(vison robot);										// �� �÷��� �ٲٴ� �Լ�

int main(void)
{
	// ����ü�� ��ȯ�� �� ������ �� ��ȯ
	vison robot;													// ����ü ���� ����
	vison res;														// �ٲ� �÷��� ������ ����ü ���� ����
	
	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));						// �κ��� �÷� �Է�
	res = exchange(robot);											// �÷� ��ȯ �Լ� ȣ�� �� ���� res�� ����
	printf("�ٲ� �÷� : %.1lf %.1lf\n", res.left, res.right);		// �ٲ� �÷� ���
	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);		// robot�� �� �ٲ�

	return 0;
}

vison exchange(vison robot)											// ����ü�� ��ȯ�ϴ� �Լ�
{	
	double temp;													// ��ȯ�� ���� �ӽ� ����

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;													// ����ü ���� ��ȯ
}
#endif


