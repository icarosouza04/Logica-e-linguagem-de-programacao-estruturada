// Programa que exibe a tabuada do número informado

#include <stdio.h>

int main()
{
    int n, i;
	
    printf("Digite um numero para ver a tabuada completa: ");
    scanf("%d", &n);

    printf("\n--- TABUADA DO %d ---\n", n);

    // Adição
    printf("\nAdicao (+):\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d + %d = %d\n", n, i, n + i);
    }

    // Subtração
    printf("\nSubtracao (-):\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d - %d = %d\n", n, i, n - i);
    }

    // Multiplicação
    printf("\nMultiplicacao (*):\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    // Divisão (evitar divisão por zero)
    printf("\nDivisao (/):\n");
    for ( i = 1; i <= 10; i++)
    {
        float resultado = (float)n / i;
        printf("%d / %d = %.2f\n", n, i, resultado);
    }

    // Módulo (resto)
    printf("\nModulo (%%):\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d %% %d = %d\n", n, i, n % i);
    }

    return 0;
}