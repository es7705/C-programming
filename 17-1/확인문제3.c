#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	int num;
	char name[20];
	char* skill;
}profile;

typedef struct 
{
	char* event;
	profile player;
}sports;


int main(void)
{
	sports a;
	a.event = (char*)malloc(20);
	strcpy(a.event, "figure skating");
	strcpy(a.player.name, "Yuni seo");
	a.player.num = 19;
	a.player.skill = (char*)malloc(30);
	scanf("%s", &a.player.skill);

	printf("%s\n", a.event);
	printf("%s\n", a.player.name);
	printf("%d\n", a.player.num);
	printf("%s\n", a.player.skill);

	free(a.event);
	free(a.player.skill);
	return 0;
}
#endif