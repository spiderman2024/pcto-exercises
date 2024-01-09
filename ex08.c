#include <stdio.h>

int main() {
    int a;
    int b;
    printf("inserire due numeri\n");
    scanf("%d %d", &a, &b);
    if(a % b == 0) {
        printf("il numero %d è multiplo di %d\n", a , b);
    }
    else if(a % b != 0) {
        printf("il numero %d non è multiplo di %d\n", a , b);
    }

    return 0;

    }
