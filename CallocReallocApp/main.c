/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int* pi;
    int size = 5;
    int count = 0;

    int num;
    int i;

    pi = (int*)calloc(size, sizeof(int)); 
    // (count * size) ����Ʈ �� ��ŭ �Ҵ��ϰ� 0���� �ʱ�ȭ �� ���� ��ġ ��ȯ

    while (1)
    {
        printf("����� �Է��ϼ��� => ");
        scanf("%d", &num);
        if (num <= 0) 
            break;
        if (count == size)
        {
            size += 5;
            pi = (int*)realloc(pi, size * sizeof(int)); 
            // p�� ������ ������ ũ�⸦ size ����Ʈ�� ũ��� �����ϰ� ���� ��ġ ��ȯ
        }
        pi[count++] = num;
    }

    for (i = 0; i < count; i++)
    {
        printf("%5d", pi[i]);
    }

    free(pi);

	system("pause");
	return EXIT_SUCCESS;
}