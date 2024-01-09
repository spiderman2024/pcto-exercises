#include <stdio.h>

int main() {
    int età;
    char paese;
    printf("inserire la propria età\n");
    printf("inserire il proprio paese\n");
    scanf("%d %c", &età, &paese);


    if(età >= 18 && paese == 'I') {
        printf("l'utente può prendere la patente\n");
    }
    else if(età < 18 && paese == 'I') {
        printf("l'utente non può prendere la patente\n");
    }
    if(età >= 16 && paese == 'S') {
        printf("l'utente può prendere la patente\n");
    }
    else if(età < 16 && paese == 'S') {
         printf("l'utente non può prendere la patente\n");
    }
    return 0;

}