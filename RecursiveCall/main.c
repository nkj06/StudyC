/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

void fruit(int count);

int main(void) {

    fruit(1); // �Լ� ȣ��

    return 0;
}

void fruit(int count) // ���ȣ�� �Լ� 
{
    printf("apple\n"); // �ڽ��� �ٽ� ȣ��

    if (count == 3) 
        return;

    fruit(count + 1);
    printf("jam\n");
}

/*
    ���ȣ�� �Լ��� �ڱ� �ڽ��� ȣ���ϴ� ��
    ���ȣ�� �Լ��� ���� ȣ���� ���� �ƴ϶� ������ ȣ���ߴ� ������ ���ư��� 
*/