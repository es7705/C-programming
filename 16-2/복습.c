#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);

int main(void)
{
	// 16-5 복습
	//동적 할당 영역의 문자열을 함수로 출력
	char temp[80];			// 임시 char 배열
	char* str[21] = { 0 };	// 문자열을 연결할 포인터 배열, 널 포인터로 초기화
	int i = 0;				// 반복 제어 변수

	while (i < 20)			// 최개 20 문장까지 입력	
	{
		printf("문자열을 입력하세요 : ");
		
		//gets(temp);							// 문자열 입력
		
		fgets(temp, sizeof(temp), stdin);		
		if (temp[strlen(temp) - 1] == '\n')		// 개행 문자 제거
		{
			temp[strlen(temp) - 1] = '\0';
		}

		if (strcmp(temp, "end") == 0)		// end가 입력되면 반복 종룍
		{
			break;
		}

		str[i] = (char*)malloc(strlen(temp) + 1);	// temp에 문자열 길이 + 1만큼 str포인터에 동적 할당
		strcpy(str[i], temp);						// temp에 있는 문자열을 동적 할당 영역에 복사
		i++;
	}

	print_str(str);									// 입력한 문자열 출력, 매개변수 str은 주소임

	// 메모리 동적 할당 반환
	for (i = 0; str[i] != NULL; i++)				// str에 연결된 문자열이 없을 때까지, str[i] 안에 들어 있는 주소 값이 널문자이면 중지
	{
		free(str[i]);								// 동적 할당 영역 반환
	}

	/*while (1)	// while문으로 동적 할당 제거
	{
		free(str[i]);
		i++;
		if (str[i] == NULL) break;
	}*/

	return 0;
}

void print_str(char	**ps)							// 이중 포인터 선언, str은 포인터이므로 포인터의 주소를 매개변수로 받으니까 이중 포인터
{
	while (*ps != NULL)								// ps가 가르키는 것은 포인터의 배열 요소, *ps == str[i]에 저장된 주소가, str[i]에 저장된 주소가 NULL이 아니면
	{												// *ps == str[i] 동일
		printf("%s\n", *ps);						// str[i]에 들어 있는 값, 즉 주소를 써줘야함
		ps++;
	}
}
#endif

#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 이중 포인터 복습
	char c[10] = "apple";		// 100번지
	char* cp;	// 포인터		// 200번지
	char** cpp;	// 이중 포인터	// 300번지
	cp = &c;	// c의 주소 즉 a의 주소를 포인터 cp에 저장
	cpp = &cp;	// cp의 주소를 이중 포인터 cpp에 저장

	printf("%s\n", &c);
	printf("%s\n", cp);
	printf("%s\n", *cpp);

	return 0;
}
#endif