// Programa em C que lê 10 números inteiros e informa a quantidade de números pares e ímpares.

#include <stdio.h>

int main()
{
    int numerospares, numerosimpares, numero, contador;

    numerospares = 0;
    numerosimpares = 0;
    contador = 0;

    for (contador = 1; contador <= 10; contador++)
    {
        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            numerospares++;
        }
        else
        {
            numerosimpares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", numerospares);
    printf("Quantidade de numeros impares: %d\n", numerosimpares);

    return 0;
}