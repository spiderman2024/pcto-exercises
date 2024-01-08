#include <stdio.h>

int main () {
    int a;
    int b;
    int modulo;
    printf("inserire due numeri:\n");
    scanf("%d %d", &a, &b);
    modulo = a % b;
    printf("il modulo dei due numeri risulta : %d\n", modulo);

    return 0;
}