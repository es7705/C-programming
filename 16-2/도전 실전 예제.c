#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int n;
	int i, j, cnt = 0;

	printf("양수를 입력하세요 : ");
	scanf("%d", &n);

	pi = (int*)malloc(n * sizeof(int));		// 동적 메모리 할당
	if (pi == NULL)
	{
		printf("메모리 부족");
		exit(1);
	}

	for ( i = 2; i < n; i++)
	{
		if(i )
	}

	for ( i = 0; i < n; i++)		// 출력
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

// n까지의 모든 소수를 출력하는 함수
void printPrimes(int n);

int main(void) {
    int n;

    // 사용자로부터 양수 입력 받기
    printf("양수르 입력하세요 : ");
    scanf("%d", &n);

    // 2 미만의 숫자가 입력된 경우 경고 메시지 출력 후 프로그램 종료
    if (n < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
        return 1;
    }

    // 소수 출력 함수 호출
    printPrimes(n);

    return 0;
}

void printPrimes(int n) {
    // 동적 할당을 이용해 isPrime 배열 생성
    int* isPrime = (int*)malloc((n + 1) * sizeof(int));
    // 메모리 할당 실패 시 처리
    if (isPrime == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // 배열 초기화: 모든 수를 소수로 가정(1로 설정)
    for (int i = 2; i <= n; i++) {
        isPrime[i] = 1;
    }

    // 에라토스테네스의 체 알고리즘을 사용한 소수 판별
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0; // i의 배수는 소수가 아님
            }
        }
    }

    // 소수 출력 (한 줄에 5개씩)
    int count = 0; // 한 줄에 출력된 수의 개수를 세는 변수
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i); // 소수 출력
        }
        else {
            printf("X "); // 소수가 아닌 경우 X 출력
        }
        count++;
        // 한 줄에 5개가 출력되면 줄바꿈
        if (count == 5) {
            printf("\n");
            count = 0;
        }
    }
    // 마지막 줄 처리
    if (count != 0) {
        printf("\n");
    }

    // 동적 할당된 메모리 해제
    free(isPrime);
}
#endif