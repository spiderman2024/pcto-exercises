#include <stdio.h>
#include <math.h>

int ft_sqrt(int num) {
    if (num >= 0) {
        for (int i = 1; i <= num/2; i++) {
            if ( i * i == num){
                return i;
            }
        }
    }
    return -1;
}
void ft_delta ( int a, int b, int c) {
    float dis = b * b - 4 * a *c;
    float risoluzione1;
    float risoluzione2;
   if(dis < 0) {
        printf("Errore, il discriminante è negativo, di conseguenza l'equazione non ammette soluzioni reali\n");
    } else {
        double risoluzione1, risoluzione2;

        risoluzione1= ( - b + ft_sqrt(dis)) / (2 * a);
        risoluzione2= ( - b - ft_sqrt(dis)) / (2 * a);
        if(dis == 0) {
            printf("L'equazione ha una soluzione: %.2f\n", risoluzione1);
        } else {
            printf("L'equazione ha due soluzioni: %.2f e %.2f\n", risoluzione1, risoluzione2);
        }
    }
}
int main () {
    int a;
    int b;
    int c;
    printf("Inserire il valore dei coefficienti a b e c, rispettivamente in ordine\n");
    scanf("%d %d %d", &a, &b, &c);
    ft_delta(a, b, c);
    return 0;
}

