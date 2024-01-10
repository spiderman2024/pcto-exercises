#include <stdio.h>

int main() {
    int numero;
    int somma = 0;
    int contatore = 0;

    printf("Inserisci una sequenza di dieci numeri interi positivi (termina con un numero negativo):\n");

    do {
       
        scanf("%d", &numero);

        
        if (numero >= 0) {
           
            somma += numero;
            contatore++;

        
            float media = (float)somma / contatore;
            printf("Media: %.2f\n", media);
        }

    } while (numero >= 0);

    printf("Programma terminato.\n");

    return 0;
}