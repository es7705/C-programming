#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	// ���ڿ��� ���̴� strcat, strncat �Լ�
	char str[80] = "straw";		// ���ڿ� �ʱ�ȭ

	strcat(str, "berry");		// str �迭�� ���ڿ� ���̱� 
	printf("%s\n", str);
	strncat(str, "piece", 3);	// str �迭�� 3���� ���� ���̱�
	printf("%s\n", str);
	
	return 0;
}
#endif