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

// �����Լ�
int main(void) 
{
    FILE* ifp, * ofp;
    char str[80];
    char* res;

    ifp = fopen("a.txt", "r");
    if (ifp == NULL)
    {
        printf("�Է� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }

    ofp = fopen("b.txt", "w");
    if (ofp == NULL)
    {
        printf("��� ������ ���� ���߽��ϴ�.\n");
        return 1;
    }

    while (1)
    {
        res = fgets(str, sizeof(str), ifp);
        if (res == NULL)
        {
            break;
        }
        str[strlen(str - 1)] = '\0';
        fputs(str, ofp);
        fputs(" ", ofp);
    }

    fclose(ifp);
    fclose(ofp);

	system("pause");
	return EXIT_SUCCESS;
}