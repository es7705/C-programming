#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cnt, max = 0;
	int ch;

	
	while (1)
	{
		cnt = 0;
		ch = getchar();

		while (ch != -1 && ch != '\n')
		{
			cnt++;
			ch = getchar();
		}
		if (ch == -1)
		{
			break;
		}
		if (cnt > max)
		{
			max = cnt;
		}
	}
	printf("���� �� �ܾ��� ���� : %d\n", max);
	return 0;
}
#endif

