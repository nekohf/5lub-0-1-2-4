#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	double x, t, a, b, y;
	printf("Введите значение x:\n");
	scanf("%lf", &x);
	t = 3.0;
	a = 1.0 / t + pow(x, 3);
	b = t * t * (sqrt(fabs(a + x)));
	y = pow(log(fabs(b + a * a)), 5);
	printf("x = %.1f * %.e-3\n", x);
	printf("y = %.2f\n", y);
	return 0;
}