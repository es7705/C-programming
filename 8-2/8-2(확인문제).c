#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	//2
	/*char str1[80], str2[80];
	char temp[80];

	printf("�� ���ڿ� �Է� : ");
	scanf("%s %s", str1, str2);
	printf("�ٲٱ� �� : %s, %s\n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("�ٲ� �� : %s, %s\n", str1, str2);*/

	//���� ���� ����
	char str[80];
	int cnt = 0;
	int i;

	printf("�����Է� : ");
	gets(str);

	for (i = 0; str[i] != \0; i++)
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
			cnt++;
		}
	}

	printf("�ٲ� ���� : ");
	puts(str);
	printf("�ٲ� ���� �� : %d\n", cnt);

	return 0;
}