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
    FILE* fp;
    int age;
    char name[20];

    fp = fopen("a.txt", "r");

    fscanf(fp, "%d", &age);
    fgets(name, sizeof(name), fp);

    printf("���� : %d, �̸� : %s", age, name);
    fclose(fp);

	system("pause");
	return EXIT_SUCCESS;
}