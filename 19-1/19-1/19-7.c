#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma pack(push, 1)			// ����Ʈ ����θ�Ʈ�� 1�� �ٲ�

typedef struct {
	char ch;
	int in;
}Sample1;

#pragma pack(pop)				// �ٲٱ� ���� ����Ʈ ����θ�Ʈ ���
typedef struct {
	char ch;
	int in;
}Sample2;

int main(void)
{
	printf("Sample ����ü�� ũ�� : %d����Ʈ\n", sizeof(Sample1));
	printf("Sample ����ü�� ũ�� : %d����Ʈ\n", sizeof(Sample2));

	return 0;
}
#endif