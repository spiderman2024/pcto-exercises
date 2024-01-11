#include <stdio.h>

int main () {
    float x;
    float y;
    char A;
    float z;
    float u;
    float v;
    float p;
    printf("Inserire due numeri:\n");
    scanf("%f %f", &x, &y);
    
    printf("Quale operazione vuoi eseguire?\n");

    scanf("%c",  &A); {
        if (A == 97) { 
            z=x+y;
            printf("Il risultato è %f\n", z);
        } else if (A == 115) {
            u=x-y;
            printf("Il risultato è %f\n", u);
        } else if (A == 109) {
            v=x*y;
            printf("Il risultato è %f\n", v);
        } else if (A == 100) {
            p=x/y;
            printf("Il risultato è %f\n", p);
        } else {
            printf("Errore\n");
        }
    }

    return 0;
}