/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

struct Info {
	int number; // ���� ��ȣ
	char name[SIZE]; // �ѱ� �̸� 
	char phone[SIZE]; // �� ��ȣ
	char e_mail[SIZE]; // �̸���
};

int count = 0;

void input_business_card(struct Info* info)
{
	count = count + 1;
	info->number = count;

	printf("�ѱ� �̸� : ");
	scanf("%s", info->name);

	printf("�� ��ȣ : ");
	scanf("%s", info->phone);

	printf("�̸��� : ");
	scanf("%s", info->e_mail);

	printf("\n");
}

void edit_business_card()
{

}

void search_business_card()
{

}

void delete_business_card()
{

}

void show_all_cards()
{

}

int main()
{
	struct Info info;

	int iNum;

	while (1)
	{
		printf("[���� ���� ���α׷�]\n");
		printf("1. �Է�\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ���\n");
		printf("5. �˻�\n");
		printf("6. ����\n");
		printf("�޴��� �Է��Ͻÿ� : ");
		scanf("%d", &iNum);
		printf("\n");

		if (1 == iNum)	// �߰�
		{
			input_business_card(&info);
			printf("-----------------------------\n");
		}
		else if (2 == iNum)	// ����
		{
			edit_business_card();
			printf("-----------------------------\n");
		}
		else if (3 == iNum)	// ����
		{
			delete_business_card();
			printf("-----------------------------\n");
		}
		else if (4 == iNum)	// ���
		{
			show_all_cards();
			printf("-----------------------------\n");
		}
		else if (5 == iNum)	// �˻�
		{
			search_business_card();
			printf("-----------------------------\n");
		}
		if (6 == iNum) // ����
		{
			break;
		}
	}
}