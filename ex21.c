#include <stdio.h>

int main () 
{
    char Y;
    char N;
    char t;
    char (d)[100];
    char (e)[100];
    printf("Benvenut*\n");
    printf("Vuoi effettuare una segnalazione? Se si inserisci Y, se no inserisci N.\n");
    scanf("%c", &Y); {
    if(Y == 89) 
    {
        printf("Che tipo di segnalazione?\n a)Strada buia\n b)Strada con senzatetto\n c)Strada non accessibile\n");
        scanf(" %c", &t);
        printf("Inserisci indirizzo:\n");
        scanf("%s", d);
        printf("Perfetto, %s è stata segnalata.\n", d);
    }
    if(Y == 78) 
    {
        printf("Vuoi sapere la strada più sicura per tornare a casa? Se si inserisci Y, se no inserisci N.\n");
        scanf(" %c", &N);
            if(N == 89) 
            {
                printf("Inserire indirizzo di destinazione:\n");
                scanf("%s", e);
                printf("La strada più sicura per arrivare a %s è [mappa].\n", e);
            } 
            else if(N == 78) 
            {
                printf("Errore. Ch vuo' a me??\n");
            }
    } 
    }
    return 0;
}
