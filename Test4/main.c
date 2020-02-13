/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.13
  writer - Nam Kyung Jin
*/

/*
  �ڱ����� ����ü (��Ī NODE) �� ���ؼ� ���� ����Ʈ�� �����, �����ʹ� �Ǽ��� ���� �� �ֵ��� �Ѵ�.
  ���⼭ insertNode() �Լ��� ���ϸ������� �� NODE �� �߰�, deleteNode(int index)�� ���ϴ� ��ġ�� ���� �����ϰ� �Ѵ�.
  �� �۾� �� ����� ������ŭ �����͸� ����ϴ� �Լ� printNode()�� �����Ѵ�

  ��� ���Ḯ��Ʈ
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct __node {
	double data;
	struct __node* next;
	struct __node* prev;

	struct __node* cur;
	struct __node* head;
	struct __node* tail;
} node;

node* first = NULL;
node* last = NULL;

// ��� �߰� �Լ�
void insertNode(node* L, double tdata) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = tdata;
	newNode->next = NULL;
	if (L->head == NULL && L->tail == NULL)
		L->head = L->tail = newNode;
	else {
		L->tail->next = newNode;
		L->tail = newNode;
	}

	L->cur = newNode;
}

// ��� ���� �Լ�
void deleteNode(node* L, double index) {
	//node* p = l->head;
	//while (p->next->next != null) p = p->next;
	//p->next = p->next->next;
	//l->tail = p;

	node* p = L->head;

	if (p == NULL)//ù ��尡 NULL�ϰ��
	{
		return;
	}
	else if (L->head->data == index)//�ٷδ��� ��� ������ ��ġ��
	{
		L->head = L->head->next;
		return;
	}
	else
	{
		while (p->next != NULL)
		{
			if (p->next->data == index)// ������ ��ġ�ñ��� ��� �ѱ�
			{
				p->next = p->next->next;
				return;
			}
			p = p->next;
		}

	}
}

// ��� �Լ�
void printNode(node* L) {
	node* p = L->head;
	putchar('[');
	while (p != NULL) {
		printf("%.2lf, ", p->data);
		p = p->next;
	}
	putchar(']');
	putchar('\n');
}

double main(void) {

	node* L = (node*)malloc(sizeof(node));

	L->cur = NULL;
	L->head = NULL;
	L->tail = NULL;
	//linkedList pointer define end

	double in, out;
	int co;

	while (1)
	{
		printf("�߰� 1, ���� 2 : ");
		scanf("%d", &co);

		if (co == 1)
		{
			printf("�߰� �� ��带 �Է��Ͻÿ� : ");
			scanf("%lf", &in);
			insertNode(L, in);
		}
		else if (co == 2)
		{
			printf("���� �� ��带 �Է��Ͻÿ� : ");
			scanf("%lf", &out);
			deleteNode(L, out);
		}
		else
			break;

		printNode(L);

	}
	return 0;
}