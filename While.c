#include <stdio.h>

int main()
{
    int num, count_pares = 0, count_impares = 0, sum_impares = 0;
    int i = 1;
    while (i <= 1000)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            count_pares++;
        }
        else
        {
            count_impares++;
            sum_impares += num;
        }
        i++;
    }
    printf("Quantidade de números pares: %d\n", count_pares);
    if (count_impares > 0)
    {
        printf("Média dos números ímpares: %.2f\n", (float)sum_impares / count_impares);
    }
    else
    {
        printf("Não foram digitados números ímpares.\n");
    }
    return 0;
}