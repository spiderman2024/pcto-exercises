#include <stdio.h>

int main () {
    int a;
    printf("inserire una temperatura in celsius\n");
    scanf("%d", &a);
    if(a < -273.15) {
        printf("Errore, la temperatura inserita è minore dello zero assoluto\n");
    }
    int b;
    b = a * 9/5 + 32;
    if(a >= -273.15) {printf("la temperatura in Fahrenheit è %d\n", b);
    }
    int c;
    c = a + 273.15;
    if(a >= -273.15) {printf("la temperatura in Kelvin è %d\n", c);
    }
   
    return 0;

}