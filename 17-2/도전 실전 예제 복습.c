#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 3

typedef struct {
    int num;
    char name[20];
    int kor, eng, mat;
    int total;
    double avg;
    char grade;
}student;

void input_data(student* p);
void calc_data(student* p);
void sort_data(student* p);
void print_data(student* p);

int main(void)
{
    student s[SIZE];
    input_data(s);                  // 학번, 이름, 3과목 점수 입력
    calc_data(s);                   // 총점, 평균, 학점 계산
    printf("# 정렬 전 데이터...\n");  
    print_data(s);                  // 정렬 전 출력
    sort_data(s);                   // 총점 순으로 내림차순 정력
    printf("# 정렬 후 데이터...\n");
    print_data(s);                  // 정렬 후 출력

    return 0;
}

void input_data(student* p)
{
    int i;

    for ( i = 0; i < SIZE; i++)
    {
        printf("학번 : ");
        scanf("%d", &p[i].num);
        printf("이름 : ");
        scanf("%s", p[i].name);
        printf("국어, 영어, 수학 점수 :");
        scanf("%d%d%d", &p[i].kor, &p[i].eng, &p[i].mat);
    }
}

void print_data(student* p)
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n", 
            p[i].num, p[i].name, p[i].kor, p[i].eng, p[i].mat, 
            p[i].total, p[i].avg, p[i].grade);
    }
}

void calc_data(student* p)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        p[i].total = p[i].kor + p[i].eng + p[i].mat;
        p[i].avg = p[i].total / 3.0;

        if (p[i].avg >= 90.0)
            p[i].grade = 'A';
        else if (p[i].avg >= 80.0)
            p[i].grade = 'B';
        else if (p[i].avg >= 70.0)
            p[i].grade = 'C';
        else
            p[i].grade = 'F';
    }
}

void sort_data(student* p)
{
    student temp;
    int i, j;
        //for ( i = 0; i < SIZE - 1; i++)             // 내림 차순
        //{
        //    for ( j = i + 1; j < SIZE; j++)
        //    {
        //        if (p[i].total < p[j].total)
        //        {
        //            temp = p[i];
        //            p[i] = p[j];
        //            p[j] = temp;
        //        }         
        //    }
        //}

        for (i = 0; i < SIZE - 1; i++)             // 오름 차순
        {
            for (j = i + 1; j < SIZE; j++)
            {
                if (p[i].total > p[j].total)
                {
                    temp = p[i];
                    p[i] = p[j];
                    p[j] = temp;
                }
            }
        }
}
#endif