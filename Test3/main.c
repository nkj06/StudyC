/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Nam Kyung Jin
*/

/*
�л� 3���� �б޿��� ���� ���� ���� ������ ���� ������ �Է� ���� ��, �� ���� ���հ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� ����, ����, ���� ������ ����� �ϴ� ����ü student_t �� �����Ѵ�.
�л��� 3���̹Ƿ� student_t Ÿ���� ���� 3��, Ȥ�� �迭�� �����Ͽ�, �ش� ������ ������ �Է¹޴´�.
�� ������ ������ ���ϴ� �Լ��� ���� �ۼ��Ͽ� ���հ� ����� ���� �� �̸� ����Ѵ�.
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

// �����Լ�
int main(void)
{
    struct student_t s;

    for (int i = 0; i < 3; i++)
    {
        printf("�л� %d�� ����, ����, ���� ������ �Է��Ͻÿ�: ", i + 1);
        scanf("%d %d %d", &s.k[i], &s.e[i], &s.m[i]);
    }

    s.sum[0] = sum(s.k[0], s.k[1], s.k[2]);
    s.sum[1] = sum(s.e[0], s.e[1], s.e[2]);
    s.sum[2] = sum(s.m[0], s.m[1], s.m[2]);

    for (int i = 0; i < 3; i++)
    {
        s.avg[i] = avg(s.sum[i]);
    }

    printf("���� ���� ���� : %d, ��� : %.2lf\n", s.sum[0], s.avg[0]);
    printf("���� ���� ���� : %d, ��� : %.2lf\n", s.sum[1], s.avg[1]);
    printf("���� ���� ���� : %d, ��� : %.2lf\n", s.sum[2], s.avg[2]);

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