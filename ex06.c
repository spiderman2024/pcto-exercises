#include <stdio.h>

int main() 
{
    int numero;
    printf("inserire un numero:\n");
    scanf("%d", &numero);
    printf("il numero inserito è : %d\n", numero);


    if (numero %2 == 0) {
        printf("il numero è neutro\n");
    }

    else if(numero %2 != 0) {
        printf("il numero è dispari\n");
    }

    else if(numero %2 == 0) {
        printf("il numero è pari\n");
    }

       return 0;
}