#include <stdio.h>
int main()
{
	int area;
	int lado,lado1;
	int a;
	int altura;
	int base;
	printf("Lado: ");
	scanf_s("%i", &lado);
	printf("lado 2: ");
	scanf_s("%d", &lado1);
	area = lado * lado1;
	printf("Altura: ");
	scanf_s("%i", &altura);
	printf("Base: ");
	scanf_s("%d", &base);
	a = base * altura;
	printf("El cuadro de %-10i x %-10i tiene area de %-10i", lado, lado1, area);
	printf("El rectangulo de %-10i x %-10i tiene area de %-10i", base, altura, a);
}