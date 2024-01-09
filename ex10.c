#include <stdio.h>

int main () {
    float a;
    float b;
    float c;
    printf("inserire le misure dei lati del triangolo\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a == b == c) {printf("il triangolo è equilatero\n");
    }
    if(a == b && b != c) {printf("il triangolo è isoscele\n");
    }
    if(a != b && b != c && a != c) {printf("il triangolo è scaleno\n");
    }

    return 0;
}