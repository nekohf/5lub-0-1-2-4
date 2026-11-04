#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y, z, f, q, i;
	printf("Введите x y z\n");
	scanf("%lf %lf %lf", &x, &y, &z);
	f = pow(y + pow(x - 1.0, 1.0 / 3.0), 0.25);
	q = fabs(x - y) * ((pow((sin(z)), 2)) + tan(z));
	i = f / q;
	printf("f = %.5f\n", i); //вводить через запятую
	return 0;
}