#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	// 2
	/*char str[80];
	strcpy(str, "wine");
	strcat(str, "apple");
	strncpy(str, "pear", 1);
	printf("%s, %d\n", str, strlen(str));*/

	// 3
	/*char str[80];
	char res_str[80];
	char* star = "*********";
	int len;

	printf("�ܾ� �Է� : ");
	scanf("%s", str);
	len = strlen(str);

	if (len <= 5)
	{
		strcpy(res_str, str);
	}

	else
	{
		strncpy(res_str, str, 5);
		res_str[5] = '\0';
		strncat(res_str, star, len - 5);
	}
	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s\n", str, res_str);*/

	return 0;
}

#endif