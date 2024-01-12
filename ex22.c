#include <stdio.h>

int main ()
{
    int a;
    while(a != 0) {
    printf("Inserisci un numero:\n");
    scanf("%d", &a);
    if(a > 0) {
        printf("Il numero è positivo.\n");
    }
    if(a < 0){
        printf("Il numero è negativo.\n");
    }
    if(a == 0) {
        printf("Programma terminato.\n");
    }
    }
    return 0;
}