#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int a, b;
	double area;
	double perimetr;
	printf("введите длину стороны А в см:");
	scanf("%d", &a);

	printf("введите длину стороны B в см:");
	scanf("%d", &b);
	area = a + b;
	perimetr = 2 * (a + b);
	printf("Площадь прямоугольника: %2.f\n", area);
	printf("Периметр прямоугольника: %2.f\n", perimetr);

	return 0;
}