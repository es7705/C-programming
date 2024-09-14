#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define len 100

void num_return(char *ps, int *pn);

int main(void)
{
	// 백준 문제
	char s[len];
	int i;
	int n[26] = { 0 };

	scanf("%s", s);
	num_return(s, &n);

	for ( i = 0; i < 26; i++)
	{
		printf("%d ", n[i]);
	}
	return 0;
}

void num_return(char* ps, int* pn)
{
	int i;
	for ( i = 0; i < 26; i++)
	{
		// 만약 알파벳이 포함 되어 있으면 그 위치를 저장
		// 아니면 -1을 저장
		//if (ps[i] >= 'a' && ps[i] <= 'z')// a~z까지 전부다 검사 해서 하나라고 일치하면 i 저장
		if (97 >= (int)(ps[i]) && 122 <= (int)(ps[i]))// 알파벳이 단어를 포함하면 i를 저장 아니면 -1을 저장
			pn[i] = i;
		else
			pn[i] = -1;
	}
	
}
#endif