#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h> // �ý��� �������

/*
	���� �Լ�
*/
int main() {
	printf("Hello World!\n");
	printf("Hi second again\n");

	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	printf("%d\n", 100);
	printf("%lf\n", 3.141592);
	printf("%.1lf\n", 3.141592);
	printf("%.10lf\n", 3.141592);

	printf("%d�� %d�� ���� %d�Դϴ�. \n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	system("pause");
	return 0;
} 