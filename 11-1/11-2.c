#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// �����̳� ���� ������ �Է�
	char ch1, ch2;

	scanf(" %c %c", &ch1, &ch2);	// ȭ��Ʈ �����̽��� ������ ���ڵ鸸 �Է��ϰ� �ʹٸ� %c �տ� ȭ��Ʈ �����̽� ��� 
	// 2���� ���ڸ� ���� �Է� 

	printf("[%c%c]", ch1, ch2);
	// �Էµ� ���� ���

	printf("%d, %d", ch1, ch2);
	// ���� ���ڴ� �ƽ�Ű �ڵ� �� 32
	// ���� ���ڴ� �ƽ�Ű �ڵ� �� 10

	printf("\n");

	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", a, b);
	return 0;
}
#endif