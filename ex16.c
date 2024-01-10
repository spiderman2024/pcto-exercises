#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int res;

    res = nb;

    if(power < 0)
            return (0);
    if(power == 0)
            return (1);
    while(power-- > 1)
    {
            res *= nb;
    }
    return (res);
}

int main () 
{
    int numero;
    int potenza;
    
    printf("inserire un numero\n");
    scanf("%d", &numero);
    printf("inserire una potenza\n");
    scanf("%d", &potenza);
    printf("il risultato è: %d",ft_iterative_power(numero, potenza));
}



 