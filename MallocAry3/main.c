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

void print_str(char** ps);

// �����Լ�
int main(void) 
{
    /*
    char temp[80];
    char* str[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("���ڿ��� �Է��ϼ��� : ");
        gets(temp);
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }

    for (i = 0; i < 3; i++)
    {
        free(str[i]);
    }
    */
    char temp[80]; // �ӽ� char �迭
    char* str[21] = { 0 }; // ���� �Ҵ� ������ ������ ������ �迭
    int i = 0; // �ݺ� ���� ���� 

    while (i < 20)
    {
        printf("���ڿ��� �Է��ϼ��� : ");
        gets(temp); // ���ڿ� �Է�
        if (strcmp(temp, "end") == 0) break; // end�� �ԷµǸ� �ݺ� ����
        str[i] = (char*)malloc(strlen(temp) + 1); // ���ڿ� ���� ���� �Ҵ�
        strcpy(str[i], temp); // ���� �Ҵ� ������ ���ڿ� ����
        i++;
    }
    print_str(str); // �Է��� ���ڿ� ��� 

    for (i = 0; str[i] != NULL; i++) // str�� ����� ���ڿ��� ���� ������
    {
        free(str[i]); // ���� �Ҵ� ���� ��ȯ 
    }

	system("pause");
	return EXIT_SUCCESS;
}

void print_str(char** ps)
{
    while (*ps != NULL)
    {
        printf("%s\n", *ps);
        ps++;
    }
}