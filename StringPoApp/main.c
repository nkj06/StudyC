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
    char* dessert = "apple";
    char str[80];
    char str2[80];

    int age;
    char name[20];

    printf("[���ڿ� ����� �ּҶ� ����]\n");
    printf("apple�� ����� �ּ� �� : %p\n", "apple");
    printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
    printf("ù ��° ���� : %c\n", *"apple");
    printf("�� ��° ���� : %c\n", *("apple" + 1));
    printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

    printf("\n[�����ͷ� ���ڿ��� ����ϴ� ���]\n");
    printf("���� �Ľ��� %s �Դϴ�.\n", dessert);
    dessert = "banana";
    printf("���� �Ľ��� %s �Դϴ�.\n", dessert);

    printf("\n[gets �Լ��� ������ ���ڿ� �Է�]\n");
    printf("������ ���Ե� ���ڿ� �Է� : ");
    gets(str);
    printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str);

    printf("\n[fgets �Լ��� ���ڿ� �Է� ���]\n");
    printf("������ ���Ե� ���ڿ� �Է� : ");
    fgets(str2, sizeof(str), stdin); // fgets(�迭��, �迭�� ũ�� Ȯ��), ǥ���Է�);
    printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str2);

    printf("\n[���� ���ڷ� ���� gets �Լ��� �Է��� ���ϴ� ���]\n");
    printf("���� �Է� : ");
    scanf("%d", &age);
    getchar(); // ���ۿ��� �ϳ��� ���ڸ� �о ��ȯ, ��ȯ ���ڴ� ����
    printf("�̸� �Է� : ");
    gets(name);
    printf("���� : %d, �̸� : %s\n", age, name);

    /*
    scanf�� �߰��� ������ ���Ե� ���ڿ��� �� ���� �Է��� �� ���µ�,
    gets�� �߰��� �����̳� �� ���ڸ� �����Ͽ� ���ڿ� �� ���� �Է��Ѵ�.
    fgets�� �ִ� �迭�� ũ������� ���ڿ��� �Է� (scanf�� gets�� �Ҵ���� ���� �޸� ������ ħ��)
            '�迭ũ�� - 1'
    */

	system("pause");
	return EXIT_SUCCESS;
}
