/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Nam Kyung Jin
*/

/*
학생 3명의 학급에서 각각 국어 영어 수학의 시험 성적을 입력 받은 후, 각 과목 총합과 평균을 출력하는 프로그램을 작성하시오.
먼저 국어, 영어, 수학 성적을 멤버로 하는 구조체 student_t 를 정의한다.
학생이 3명이므로 student_t 타입의 변수 3개, 혹은 배열을 정의하여, 해당 변수에 성적을 입력받는다.
각 과목의 총합을 구하는 함수를 각각 작성하여 총합과 평균을 구한 후 이를 출력한다.
*/


#include <stdio.h>
#include <stdlib.h>

int sum(int k, int k1, int k2);
double avg(int sum);

struct student_t {
    int k[3];
    int e[3];
    int m[3];
    int sum[3];
    double avg[3];
};

// 메인함수
int main(void)
{
    struct student_t s;

    for (int i = 0; i < 3; i++)
    {
        printf("학생 %d의 국어, 영어, 수학 점수를 입력하시오: ", i + 1);
        scanf("%d %d %d", &s.k[i], &s.e[i], &s.m[i]);
    }

    s.sum[0] = sum(s.k[0], s.k[1], s.k[2]);
    s.sum[1] = sum(s.e[0], s.e[1], s.e[2]);
    s.sum[2] = sum(s.m[0], s.m[1], s.m[2]);

    for (int i = 0; i < 3; i++)
    {
        s.avg[i] = avg(s.sum[i]);
    }

    printf("국어 점수 총합 : %d, 평균 : %.2lf\n", s.sum[0], s.avg[0]);
    printf("영어 점수 총합 : %d, 평균 : %.2lf\n", s.sum[1], s.avg[1]);
    printf("수학 점수 총합 : %d, 평균 : %.2lf\n", s.sum[2], s.avg[2]);

    system("pause");
    return EXIT_SUCCESS;
}

int sum(int k, int k1, int k2) {
    int sum;

    for (int i = 0; i < 3; i++)
    {
        sum = k + k1 + k2;
    }

    return sum;
}

double avg(int sum) {
    double avg;
    avg = sum / 3.0;

    return avg;
}