/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    char str[80];
    char str2[80];

    while (1)
    {
        printf("���ڿ��� �Է��Ͻÿ�: ");
        scanf("%s", str);

        if (str[0] == 'X') {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        printf("���� ���ڿ��� �Է��Ͻÿ�: ");
        scanf("%s", str2);

        if (str2[0] == 'X') {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        if (strcmp(str, str2) > 0) // strcmp �Լ��� �� ���ڿ��� ���� ������ �Ǵ��Ͽ� �� ����� ��ȯ
        {
            printf("������ ���߿� ������ ���ڿ� : %s\n", str);
            printf("------------------------------\n");
        }
        else
        {
            printf("������ ���߿� ������ ���ڿ� : %s\n", str2);
            printf("------------------------------\n");
        }

    }

	system("pause");
	return EXIT_SUCCESS;
}

/*
    �� ���ڿ��� �Է� �޾� ������ ���� ������ ���ڿ��� ����ϴ� ���α׷�
    ù ���ڰ� �빮�� X�� ����
*/