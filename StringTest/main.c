#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {

	char fruit[20] = "Strawberry";

	printf("���� : %s\n", fruit);
	printf("������ : %s %s\n", fruit, "Jam");
	strcpy(fruit, "banana");
	printf("�ٳ��� : %s\n", fruit);

	system("pause");
	return 0;
} 