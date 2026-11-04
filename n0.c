#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, w;
	printf("Введите значение x\n");
	scanf("%lf", &x);
	printf("Введите значение y\n");
	scanf("%lf", &y);
	w = sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f);
	printf("Ответ: %.3f\n", w);
	return 0;
}