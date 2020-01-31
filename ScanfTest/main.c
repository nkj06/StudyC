#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int age;
	double height;

	char grade;
	char name[20];

	printf("나이와 키를 입력하세요 : ");
	scanf("%d %lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	printf("학점 입력 : ");
	scanf(" %c", &grade); // char가 그 전에 공백을 인식해서 %c앞에 공백 넣어줘야 함

	printf("이름 입력 : ");
	scanf("%s", name);

	printf("%s의 학점은 %c 입니다.\n", name, grade);

	system("pause");
	return 0;
} 