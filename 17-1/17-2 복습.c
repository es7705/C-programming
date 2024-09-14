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
	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 158.2;

	char temp[100]; // 문자 배열로 선언
	printf("자기소개 : ");
	fgets(temp, sizeof(temp), stdin);
	temp[strcspn(temp, "\n")] = 0;
	//fgets(temp, sizeof(temp), stdin); // 안전하게 입력 받기
	//temp[strcspn(temp, "\n")] = 0; // fgets는 개행 문자를 포함시키므로, 이를 제거

	yuni.intro = (char*)malloc(strlen(temp) + 1);
	strcpy(yuni.intro, temp);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);

	free(yuni.intro);

	return 0;
}

#endif