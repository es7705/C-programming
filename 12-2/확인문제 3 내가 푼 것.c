#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char originalStr[16]; // ���� ���ڿ��� ������ �迭, �ִ� 15�� + �� ����
    char modifiedStr[16]; // ������ ���ڿ��� ������ �迭
    int len;

    printf("�ܾ� �Է� (�ִ� 15��): ");
    scanf("%15s", originalStr); // ����ڷκ��� �ִ� 15�ڱ����� �ܾ �����ϰ� �Է¹���

    strcpy(modifiedStr, originalStr); // ���� ���ڿ��� ������ ���ڿ��� ����
    len = strlen(originalStr); // �Է¹��� �ܾ��� ���̸� ���

    if (len > 5)
    {
        // 6��° ���ں��� ������ ���ڱ��� '*'�� ��ü
        for (int i = 5; i < len; i++)
        {
            modifiedStr[i] = '*';
        }
    }

    printf("���� �ܾ�: %s\n", originalStr); // ���� �ܾ� ���
    printf("������ �ܾ�: %s\n", modifiedStr); // ������ �ܾ� ���

    return 0;
}
#endif