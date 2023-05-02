#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int num1, contpar = 0, contimpar = 0, som_impar = 0;
    float a = 0;

    for (a = 0; a < 1000; a++)
    {

        printf("Digite o número:");
        scanf("%d", &num1);

        if (num1 % 2 == 0)
        {
            contpar++;
        }
        else
        {
            contimpar++;
            som_impar += num1;
        }
    }

    printf("Quantidade de números pares: %d\n", contpar);
    printf("Média dos números ímpares: %.2f\n", (float)som_impar / contimpar);

    return 0;
}