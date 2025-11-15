// Programa que exibe a tabuada do número informado
// Modularizado com `int` (retornam um valor inteiro)


#include <stdio.h>

// Função de adição
int tabuadaAdicao(int n)
{
	int i;

    printf("\nAdicao (+):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d + %d = %d\n", n, i, n + i);
    }
    return 0;
}


// Função de subtração
int tabuadaSubtracao(int n)
{
	int i;

    printf("\nSubtracao (-):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d - %d = %d\n", n, i, n - i);
    }
    return 0;
}


// Função de multiplicação
int tabuadaMultiplicacao(int n)
{
	int i;

    printf("\nMultiplicacao (*):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}


// Função de divisão
int tabuadaDivisao(int n)
{
	int i;

    printf("\nDivisao (/):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d / %d = %.2f\n", n, i, (float)n / i);
    }
    return 0;
}


// Função de módulo
int tabuadaModulo(int n)
{
	int i;

    printf("\nModulo (%%):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d %% %d = %d\n", n, i, n % i);
    }
    return 0;
}


// Função principal
int main()
{
    int numero;

    printf("Digite um numero para gerar a tabuada completa: ");
    scanf("%d", &numero);

    printf("\n--- TABUADA DO %d ---\n", numero);

    tabuadaAdicao(numero);
    tabuadaSubtracao(numero);
    tabuadaMultiplicacao(numero);
    tabuadaDivisao(numero);
    tabuadaModulo(numero);

    return 0;
}
