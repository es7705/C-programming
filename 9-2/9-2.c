//#include <stdio.h>
//
//int main(void)
//{
//	//주소와 포인터의 차이
//	//int a; 
//	//int* pa, * pb;
//	//pa = pb = &a; // pa와 pb에 모두 a의 주소를 저장한다.
//
//	//*pa = 10;
//	//printf("%d\n", *pa);
//
//	//주소와 포인터의 크기
//	/*char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pb = &db;
//
//	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
//	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//
//	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
//	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
//	printf("double * 포인터의 크기 : %d\n", sizeof(pb));
//
//	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
//	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
//	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pb));*/
//
//	//포인터의 대입 규칙
//	//int a = 10;
//	//int* p = &a;
//	//int* pd;
//
//	//pd = p; // a의 주소 대입
//	//printf("%d\n", p);	// 주소
//	//printf("%d\n", *p);	// 10
//
//	//printf("%d\n", &a);	// 주소
//	//printf("%d\n", a);  // 10
//
//	//printf("%d\n", pd); // 주소
//	//printf("%d\n", *pd);// 10
//	
//	//규칙 1 : 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 합니다.
//	/*int a = 10;
//	int* p = &a;
//	double* pd;
//
//	pd = p;
//	printf("%lf\n", *pd);*/
//
//	//규칙 2 : 형 변환을 사용한 포인터의 대입은 언제나 가능
//	/*double a = 3.4;
//	double* pd = &a;
//	int* pi;
//	
//	pi = (int*)pd;
//	printf("%d\n", pi);
//	printf("%d\n", pd);
//	printf("%d\n", *pi);
//	printf("%lf\n", *pd);*/
//
//	return 0;
//}
//
