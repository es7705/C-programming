#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define len 100

void num_return(char *ps, int *pn);

int main(void)
{
	// ���� ����
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
		// ���� ���ĺ��� ���� �Ǿ� ������ �� ��ġ�� ����
		// �ƴϸ� -1�� ����
		//if (ps[i] >= 'a' && ps[i] <= 'z')// a~z���� ���δ� �˻� �ؼ� �ϳ���� ��ġ�ϸ� i ����
		if (97 >= (int)(ps[i]) && 122 <= (int)(ps[i]))// ���ĺ��� �ܾ �����ϸ� i�� ���� �ƴϸ� -1�� ����
			pn[i] = i;
		else
			pn[i] = -1;
	}
	
}
#endif