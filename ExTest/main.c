#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h> // 시스템 헤더파일

/*
	메인 함수
*/
int main() {
	printf("[제어문자]\n");
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	printf("\n[정수와 실수의 출력]\n");
	printf("%d\n", 10);
	printf("%lf\n", 3.141592);
	printf("%.1lf\n", 3.141592);
	printf("%.10lf\n", 3.141592);

	printf("%d과 %d의 합은 %d입니다. \n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	printf("\n[10진수, 8진수, 16진수]\n");
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);
	printf("%x\n", 12);
	printf("%X\n", 12);

	printf("\n[지수 형태의 실수 상수]\n");
	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	printf("\n[문자와 문자열 데이터의 출력]\n");
	printf("%c\n", 'A');
	printf("%s\n", "ABC");
	printf("%c은 %s입니다. \n", '1', "first");

	system("pause");
	return 0;
}