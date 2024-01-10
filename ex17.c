#include <stdio.h>

void ft_fattoriale(int numero)
{
    int res = 1;

    if (numero < 0) {
        printf("Errore: Il fattoriale non è definito per numeri negativi.\n");
        return;
    }

    if (numero == 0 || numero == 1) {
        printf("Il risultato è 1\n");
        return;
    }

    while (numero > 1) {
        res *= numero;
        numero--;
    }

    printf("Il risultato è %d\n", res);
}

int main()
{
    int numero;

    printf("Inserire un numero: ");
    scanf("%d", &numero);

    ft_fattoriale(numero);

    return 0;
}
