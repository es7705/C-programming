#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ǥ�� �Է� �Լ��� ���� ���� ����
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);

	// ���� ���� ����
	/*
		fgetc(stdin);	// ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ , ��ȯ ���ڴ� ����	
		getchar();	    // ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ ���ڴ� ����
		scanf("%*c");	// ���ۿ��� �ϳ��� ���ڸ� �о ����, ������ �ʿ� ����
	*/
	

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}
#endif