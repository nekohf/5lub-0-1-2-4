#include <stdio.h>

int main()
{
    printf("123\n"); 
    printf("1\n2\n3\n");
    printf("\t1\n\t\t2\n\t\t\t3\n");
    printf("%d %d %d %d\n", 1, 2, 3, 4);
    printf("%1d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);
    printf("%10.3f\n", 12.234657);
    printf("%10.5f\n", 12.234657);
    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
    printf("7 / 5 = %d\n", 7 / 5);
    printf("2000 * 4 = %d\n", 2000 * 4);
    printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000.);
    printf("%d разделить %d равно %d\n", 5., 2000000., 5. / 2000000.);
    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000.);
    printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000.);
    printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000.);
    return 0;
}

#include <stdio.h>

int main()
{
    int N = 14;
    int K = 35;

    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", N * 60 + K);
    printf("До полуночи осталось %d часов и %d минут\n", 23 - N, 59 - K);
    printf("С 8.00 прошло %d секунд\n", ((N - 8) * 3600) + (K * 60));
    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", (float)N / 24, (float)K / 60);

    return 0;
}

#include <stdio.h>

int main()
{
    double n = 15.0;
    double L = 4.0;
    int k = 6;
    int m = 3;

    printf("Исходные данные:\n");
    printf("n = %+6.1f\n", n);
    printf("L = %+6.1f\n", L);
    
    printf("\nРезультат:\n");
    printf("n / L = %-*.*f\n", k + m + 1, m, n / L);

    return 0;
}

#include <stdio.h>

int main()
{
    double n = 123.0;
    double L = 7.0;
    int k = 5;
    int m = 2;

    printf("Исходные данные:\n");
    printf("n = %+8.1f\n", n);
    printf("L = %+8.1f\n", L);
    
    printf("\nРезультат:\n");
    printf("n / L = %-*.*f\n", k + m + 2, m, n / L);

    return 0;
}
