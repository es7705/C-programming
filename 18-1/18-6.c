#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ������ ���¿� ���� ��尡 �ٸ� ���
	FILE* fp;
	// int ary[10] = { 13, 10, 13, 13, 10,26, 13, 10, 13, 10 };
	 int ary[5] = { 13, 10, 13, 13, 12};

	int i, res;

	fp = fopen("a.txt", "w"); // ���̳ʸ� ���Ϸ� ����
	
	for ( i = 0; i < 5; i++)
	{
		fputc(ary[i], fp);			// �迭 ����� �� ���� �ش��ϴ� �ƽ�Ű ���� ���
	}
	fclose(fp);

	fp = fopen("a.txt", "r");
	while (1)
	{
		res = fgetc(fp);
		if (res == EOF)
		{
			break;
		}
		printf("%4d", res);
	}
	fclose(fp);
	return 0;
}
#endif