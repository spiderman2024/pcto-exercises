#include <stdio.h>

int main () {
    int n;
    printf("inserisci un numero\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
       printf("ciao");
    }
    return 0;
}