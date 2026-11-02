/*
 Единицы массы пронумерованы следующим образом: 1 — килограмм,
2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер. Дан номер едини-
цы массы (целое число в диапазоне 1–5) и масса тела в этих единицах
(вещественное число). Найти массу тела в килограммах.
 Выполнил: Мартиросян Сергей, группа: 201ИС-25
 */
#include <stdio.h>
int main (void) {
    int a; // номер единицы
    float b; // масса тела
    scanf ("%d", &a);
    scanf ("%f", &b);
    switch (a) {
        case 1:
            printf ("%f\n", b);
            break;
        case 2:
            printf ("%f\n", b / 1000000);
            break;
        case 3:
            printf ("%f\n", b / 1000);
            break;
        case 4:
            printf ("%f\n", b * 1000);
            break;
        case 5:
            printf ("%f\n", b * 100);
            break;
        default:
            printf ("Error\n");
            
            
    }
    
    
    
    return 0;
}
