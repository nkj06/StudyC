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

void print_str(char** pps, int cnt);

// �����Լ�
int main(void) 
{
    char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
    int count;

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);

    int ary[5];

    printf("  ary�� �� : %u\t", ary);
    printf("ary�� �ּ� : %u\n", &ary);
    printf("   ary + 1 : %u\t", ary + 1);
    printf("  &ary + 1 : %u\n", &ary + 1);

	system("pause");
	return EXIT_SUCCESS;
}

void print_str(char** pps, int cnt)
{
    int i;

    for (i = 0; i < cnt; i++)
    {
        printf("%s\n", pps[i]);
    }
}

// �����͸� ����Ҷ� &�ް� ����ϸ� �ּҸ� �˷��ְ�, �׳� ���� �� �ּҰ� ������ �ִ� ���� ���