/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
    FILE* fp;
    char str[20];

    fp = fopen("a.txt", "a+"); // �б� ������ �߰� ���� ����
    if (fp == NULL)
    {
        printf("������ ������ ���߽��ϴ�.\n");
        return 1;
    }

    while (1)
    {
        printf("���� �̸� : ");
        scanf("%s", str);
        if (strcmp(str, "end") == 0)
        {
            break;
        }
        else if (strcmp(str, "list") == 0)
        {
            fseek(fp, 0, SEEK_SET); // ������ ��ġ �����ڸ� �� ó������ �̵� 
            while (1)
            {
                fgets(str, sizeof(str), fp); // ���� �̸��� �д´�.
                if (feof(fp)) // ������ ������ ��� ������ ����
                {
                    break;
                }
                printf("%s", str); // ���� ���� �̸��� ȭ�� ���
            }
        }
        else
        {
            fprintf(fp, "%s\n", str); // �Է��� ���� �̸��� ���Ͽ� ���
        }
    }

    fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}