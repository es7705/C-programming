#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k;			// �ݺ� ���� ���� 
	int score[2][3][4];  // ����
	/*= {
		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
	};*/		
	char student[2][3][20]; // �л� �̸�
	//= { {"��μ�", "������", "�̿���"}, {"������", "����ȯ", "������" } };
	char sub[4][10]; // = { "����", "����", "����", "��ȸ" };	// �����

	for (i = 0; i < 2; i++)	// �л� �̸� �Է�
	{
		printf("%d�� �л� �̸��� �Է��ϼ��� : ", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%s", &student[i][j]);
		}
	}
	printf("\n");

	printf("������� �Է��Ͻÿ� : ");	// ����� �Է�
	for (k = 0; k < 4; k++)
	{
		scanf("%s", &sub[k]);
	}
	printf("\n");
		
	for ( i = 0; i < 2; i++)			// ���� �Է�
	{
		for ( j = 0; j < 3; j++)
		{
			for ( k = 0; k < 4; k++)
			{
				printf("%d�� %s�л� %s ���� �Է� : ", i + 1, student[i][j], sub[k]);
				scanf("%d", &score[i][j][k]);
			}
			printf("\n");
		}
	}
	printf("\n");

	for ( i = 0; i < 2; i++)	// ��, �̸�, �����, ���� ���
	{
		printf("%d�� ����...\n", i + 1);
		for ( j = 0; j < 3; j++)
		{
			printf("%s �л� ", student[i][j]);
			for ( k = 0; k < 4; k++)
			{
				printf(" %s ���� : %2d", sub[k], score[i][j][k]);
				if (k < 3)
				{
					printf(",");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
#endif