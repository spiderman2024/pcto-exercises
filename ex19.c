#include <stdio.h>

int main () {
    int let;
    printf("scrivi una lettera:\n");
    scanf("%lc", &let);
    if(let < 65 && 91 <= let < 97) {
        printf("bucchin a mammt miett' na lettr'\n");
    }
    else if(let == 97 || let == 101 || let == 105 || let == 111 || let == 117 || let == 65 || let == 69 || let == 73 || let == 79 || let == 85) {
        printf("La lettera è una vocale\n");
    } else {
        printf("La lettera è una consonante\n");
    }
    return 0;
}