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
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char* ps1 = "banana";
    char* ps2 = str2;

    char str[20] = "mango tree";

    char str3[80] = "straw";

    char str4[80], str5[80];
    char* resp;

    printf("[strcpy �Լ��� ����]\n");
    printf("���� ���ڿ� : %s\n", str1);
    strcpy(str1, str2);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, ps1);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, ps2);
    printf("�ٲ� ���ڿ� : %s\n", str1);

    strcpy(str1, "banana");
    printf("�ٲ� ���ڿ� : %s\n", str1);

    printf("\n[strcpy �Լ��� ����]\n");
    strncpy(str, "apple-pie", 5);
    printf("%s\n", str);

    printf("\n[strcat, strncat �Լ��� ����� ���ڿ� ���̱�]\n");
    strcat(str3, "berry");
    printf("%s\n", str3);
    strncat(str3, "piece", 3);
    printf("%s\n", str3);

    printf("\n[�� ���ڿ� �� ���̰� �� �ܾ� ���]\n");
    printf("2���� ���� �̸� �Է� : ");
    scanf("%s%s", str4, str5);
    if (strlen(str4) > strlen(str5))
        resp = str4;
    else
        resp = str5;
    printf("�̸��� �� ������ : %s\n", resp);

	system("pause");
	return EXIT_SUCCESS;
}