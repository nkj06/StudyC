/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(int argc, char **argv) // ����� �μ��� ���� �Ű�����
{
    int i;

    if (argc <= 1)
    {
        printf("��� ������ �ùٸ��� �ʽ��ϴ�.");
        exit(1);
    }

    for (i = 0; i < argc; i++) // �μ� ���� ��ŭ �ݺ�
    {
        if (i == 0)
        {
            continue;
        }
        printf("%s\n", argv[i]); // �μ��� ���� ���ڿ� ���
    }
}
// �ܼ� ���α׷� ©�� �μ��� �����Ÿ� �� ���� �ʼ�.