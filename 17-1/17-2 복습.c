#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
	char name[20];
	int age;
	double height;
	char* intro;
};

int main(void) {
	// 17-2
	struct profile yuni;
	strcpy(yuni.name, "������");
	yuni.age = 17;
	yuni.height = 158.2;

	char temp[100]; // ���� �迭�� ����
	printf("�ڱ�Ұ� : ");
	fgets(temp, sizeof(temp), stdin);
	temp[strcspn(temp, "\n")] = 0;
	//fgets(temp, sizeof(temp), stdin); // �����ϰ� �Է� �ޱ�
	//temp[strcspn(temp, "\n")] = 0; // fgets�� ���� ���ڸ� ���Խ�Ű�Ƿ�, �̸� ����

	yuni.intro = (char*)malloc(strlen(temp) + 1);
	strcpy(yuni.intro, temp);

	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);

	free(yuni.intro);

	return 0;
}

#endif