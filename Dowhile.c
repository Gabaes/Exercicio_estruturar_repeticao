#include <stdio.h>

int main()
{

    float mediaImpar;
    int i = 0, num, countPar = 0, somImpar = 0;

    do
    {
        printf("digite um numero:");
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            countPar++;
        }
        else
        {
            somImpar += num;
            i++;
        }

    } while (i < 20);

    mediaImpar = somImpar / i;

    printf("os numeros pares digitados sao: %d\n", countPar);
    printf("a media dos impares sao: %f\n", mediaImpar);

    return 0;
}