#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);

int main(void)
{
	// 16-5 ����
	//���� �Ҵ� ������ ���ڿ��� �Լ��� ���
	char temp[80];			// �ӽ� char �迭
	char* str[21] = { 0 };	// ���ڿ��� ������ ������ �迭, �� �����ͷ� �ʱ�ȭ
	int i = 0;				// �ݺ� ���� ����

	while (i < 20)			// �ְ� 20 ������� �Է�	
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		
		//gets(temp);							// ���ڿ� �Է�
		
		fgets(temp, sizeof(temp), stdin);		
		if (temp[strlen(temp) - 1] == '\n')		// ���� ���� ����
		{
			temp[strlen(temp) - 1] = '\0';
		}

		if (strcmp(temp, "end") == 0)		// end�� �ԷµǸ� �ݺ� ����
		{
			break;
		}

		str[i] = (char*)malloc(strlen(temp) + 1);	// temp�� ���ڿ� ���� + 1��ŭ str�����Ϳ� ���� �Ҵ�
		strcpy(str[i], temp);						// temp�� �ִ� ���ڿ��� ���� �Ҵ� ������ ����
		i++;
	}

	print_str(str);									// �Է��� ���ڿ� ���, �Ű����� str�� �ּ���

	// �޸� ���� �Ҵ� ��ȯ
	for (i = 0; str[i] != NULL; i++)				// str�� ����� ���ڿ��� ���� ������, str[i] �ȿ� ��� �ִ� �ּ� ���� �ι����̸� ����
	{
		free(str[i]);								// ���� �Ҵ� ���� ��ȯ
	}

	/*while (1)	// while������ ���� �Ҵ� ����
	{
		free(str[i]);
		i++;
		if (str[i] == NULL) break;
	}*/

	return 0;
}

void print_str(char	**ps)							// ���� ������ ����, str�� �������̹Ƿ� �������� �ּҸ� �Ű������� �����ϱ� ���� ������
{
	while (*ps != NULL)								// ps�� ����Ű�� ���� �������� �迭 ���, *ps == str[i]�� ����� �ּҰ�, str[i]�� ����� �ּҰ� NULL�� �ƴϸ�
	{												// *ps == str[i] ����
		printf("%s\n", *ps);						// str[i]�� ��� �ִ� ��, �� �ּҸ� �������
		ps++;
	}
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���� ������ ����
	char c[10] = "apple";		// 100����
	char* cp;	// ������		// 200����
	char** cpp;	// ���� ������	// 300����
	cp = &c;	// c�� �ּ� �� a�� �ּҸ� ������ cp�� ����
	cpp = &cp;	// cp�� �ּҸ� ���� ������ cpp�� ����

	printf("%s\n", &c);
	printf("%s\n", cp);
	printf("%s\n", *cpp);

	return 0;
}
#endif