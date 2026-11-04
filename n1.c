#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	double gr, w, s;
	printf("Введите значение в градусах\n");
	scanf("%lf", &gr);
	w = gr * M_PI / 180;
	s = sin(w);
	printf("Синус угла: %.0f градусов равен %.6f\n", w, s);
	return 0;
}