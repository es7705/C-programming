//#include <stdio.h>
//
//int main(void)
//{
//	// 8-1
//	//int ary[5];
//
//	//ary[0] = 10;
//	//ary[1] = 20;
//	//ary[2] = ary[1] + ary[0];
//	//scanf("%d", &ary[3]);
//
//	//printf("%d\n", ary[2]);
//	//printf("%d\n", ary[3]);
//	//printf("%d\n", ary[4]);
//
//	//int ary1[5] = { 1,2,3,4,5 };
//	//int ary2[5] = { 1,2,3 };
//	//int ary[1000] = { 0 };
//	//int ary3[] = { 1,2,3 };
//	//int i;
//	//for (i = 0; i < 1000; i++)
//	//{
//	//	printf("%d ", ary2[i]);
//	//}
//
//	//double ary4[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 };
//	//char ary5[5] = { 'a', 'b', 'c', 'd', 'e' };
//
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	printf("%c ", ary5[i]);
//	//}
//
//	//배열과 반복문
//	/*int score[5];
//	int i;
//	int total = 0;
//	double avg;
//
//	for ( i = 0; i < 5; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for ( i = 0; i < 5; i++)
//	{
//		total = total + score[i];
//	}
//
//	avg = total / 5.0;
//	
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%5d", score[i]);
//	}
//
//	printf("\n");
//
//	printf("평균 : %.1lf\n", avg);*/
//
//	//sizeof 연산자를 활용한 배열 처리
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]);
//
//	for ( i = 0; i < count; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for ( i = 0; i < count; i++)
//	{
//		total += score[i];
//	}
//
//	avg = (double)total / (double)count;
//
//	for ( i = 0; i < count; i++)
//	{
//		printf("%5d", score[i]);
//	}
//
//	printf("\n");
//
//	printf("평균 : %.1lf\n", avg);
//
//
//	return 0;
//}