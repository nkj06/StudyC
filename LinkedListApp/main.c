/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Nam Kyung Jin
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
    int num;
    struct list* next;
};

// 메인함수
int main(void)
{
    struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 };
    struct list* head = &a, * current;

    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);

    printf("list all : ");
    current = head;
    while (current != NULL)
    {
        printf("%d  ", current->num);
        current = current->next;
    }
    printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}