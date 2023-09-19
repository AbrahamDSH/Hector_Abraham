#include <stdio.h>

int main()
{
	int area;
	int altura;
	int base;
	printf("Altura: ");
	scanf_s("%i", &altura);
	printf("Base: ");
	scanf_s("%d", &base);
	area = base * altura;
	printf("El cuadro de %-10i x %-10i tiene area de %-10i", base, altura, area);
}