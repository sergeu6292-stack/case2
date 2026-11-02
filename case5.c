/*
 Арифметические действия над числами пронумерованы следующим
 образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление. Дан
 номер действия N (целое число в диапазоне 1–4) и вещественные числа A
 и B (B не равно 0). Выполнить над числами указанное действие и вывести
 результат.
 Выполнил: Мартиросян Сергей, группа: 201ИС-25
 */
#include <stdio.h>
int main (void) {
    int N;
    printf ("N = ");
    scanf ("%d", &N);
    double A;
    printf ("A = ");
    scanf ("%lf", &A);
    double B;
    printf ("B = ");
    scanf ("%lf", &B);
    if (B != 0)
        switch (N) {
            case 1:
                printf ("%lf", A + B);
                break;
            case 2:
                printf ("%lf", A - B);
                break;
            case 3:
                printf ("%lf", A * B);
                break;
            case 4:
                printf ("%lf", A / B);
                break;
            default:
                printf ("Error\n");
                break;
        }
    else {
        printf ("B не равен нулю\n");
    }
    return 0;
}
