#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int n;
	int i, j, cnt = 0;

	printf("����� �Է��ϼ��� : ");
	scanf("%d", &n);

	pi = (int*)malloc(n * sizeof(int));		// ���� �޸� �Ҵ�
	if (pi == NULL)
	{
		printf("�޸� ����");
		exit(1);
	}

	for ( i = 2; i < n; i++)
	{
		if(i )
	}

	for ( i = 0; i < n; i++)		// ���
	{
		printf("%3d", pi[i]);
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n = 100000;
int a[100001];
void prime();

int main(void)
{
	prime();
	return 0;
}

void prime()
{
	for (int i = 2; i <= n; i++)
	{
		a[i] = i;
	}

	for (int i = 2; i <= n; i++)
	{
		if (a[i] == 0) continue;
		for ( int j = i + i;  j <= n;  j += i)
		{
			a[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (a[i] != 0) printf("%d ", a[i]);
	}
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// n������ ��� �Ҽ��� ����ϴ� �Լ�
void printPrimes(int n);

int main(void) {
    int n;

    // ����ڷκ��� ��� �Է� �ޱ�
    printf("����� �Է��ϼ��� : ");
    scanf("%d", &n);

    // 2 �̸��� ���ڰ� �Էµ� ��� ��� �޽��� ��� �� ���α׷� ����
    if (n < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
        return 1;
    }

    // �Ҽ� ��� �Լ� ȣ��
    printPrimes(n);

    return 0;
}

void printPrimes(int n) {
    // ���� �Ҵ��� �̿��� isPrime �迭 ����
    int* isPrime = (int*)malloc((n + 1) * sizeof(int));
    // �޸� �Ҵ� ���� �� ó��
    if (isPrime == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // �迭 �ʱ�ȭ: ��� ���� �Ҽ��� ����(1�� ����)
    for (int i = 2; i <= n; i++) {
        isPrime[i] = 1;
    }

    // �����佺�׳׽��� ü �˰����� ����� �Ҽ� �Ǻ�
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0; // i�� ����� �Ҽ��� �ƴ�
            }
        }
    }

    // �Ҽ� ��� (�� �ٿ� 5����)
    int count = 0; // �� �ٿ� ��µ� ���� ������ ���� ����
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i); // �Ҽ� ���
        }
        else {
            printf("X "); // �Ҽ��� �ƴ� ��� X ���
        }
        count++;
        // �� �ٿ� 5���� ��µǸ� �ٹٲ�
        if (count == 5) {
            printf("\n");
            count = 0;
        }
    }
    // ������ �� ó��
    if (count != 0) {
        printf("\n");
    }

    // ���� �Ҵ�� �޸� ����
    free(isPrime);
}
#endif