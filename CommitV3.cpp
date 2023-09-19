#include <stdio.h>
#include <math.h>
const double PI = 3.14159265358979323846;

int main()
{
	double radio, ar;
	int area;
	int lado, lado1;
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
    printf_s("radio del circulo: ");
	scanf_s("%lf", &radio);


	ar = PI * pow(radio, 2);

	printf("El area del circulo con radio %.2lf es: %.2lf\n", radio, ar);
	printf("El cuadro de %-10i x %-10i tiene area de %-10i", lado, lado1, area);
	printf("El rectangulo de %-10i x %-10i tiene area de %-10i", base, altura, a);
}