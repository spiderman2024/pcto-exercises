#include <stdio.h>

int main ()
{
    float a;
    float b;
    float somma;
    float sottrazione;
    float moltiplicazione;
    float divisione;

    printf("inserire due numeri:\n");
    scanf("%f %f", &a, &b);
    somma = a + b;
    sottrazione = a - b;
    moltiplicazione = a * b;
    divisione = a / b;
    printf("i due numeri sommati danno : %f + %f = %f\n", a, b, somma );
    printf("i due numeri sottratti danno : %f - %f = %f\n", a, b, sottrazione);
    printf("i due numeri moltiplicati danno : %f * %f = %f\n", a, b, moltiplicazione);
    printf("i due numeri divisi danno : %f / %f = %f\n", a, b, divisione);
    
    return 0;
}