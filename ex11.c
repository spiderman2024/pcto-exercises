#include <stdio.h>

int main () {
    int a;
    int primo = 1;
    printf("inserire un numero\n");
    scanf("%d", &a);
    for(int i = 2 ; i < a ; i ++) {
        if(a % i == 0) {
        primo = 0;
        }
    }
    if(primo == 1) {
        printf("il numero è primo\n");
    }
    else if( primo == 0) {
        printf("il numero non è primo\n");
    }
    return 0;
}