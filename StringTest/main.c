#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main() {

	char fruit[20] = "Strawberry";

	printf("µþ±â : %s\n", fruit);
	printf("µþ±âÀë : %s %s\n", fruit, "Jam");
	strcpy(fruit, "banana");
	printf("¹Ù³ª³ª : %s\n", fruit);

	system("pause");
	return 0;
} 