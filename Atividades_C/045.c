// Programa que exibe a tabuada do número informado
// Modularizado com `void` (não retornam valores)

#include <stdio.h>

// Função para adição
void tabuadaAdicao(int n)
{
	int i;

    printf("\nAdicao (+):\n");

    for ( i = 1; i <= 10; i++)
    {
        printf("%d + %d = %d\n", n, i, n + i);
    }
}


// Função para subtração
void tabuadaSubtracao(int n)
{
	int i;

    printf("\nSubtracao (-):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d - %d = %d\n", n, i, n - i);
    }
}


// Função para multiplicação
void tabuadaMultiplicacao(int n)
{
	int i;

    printf("\nMultiplicacao (*):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}


// Função para divisão
void tabuadaDivisao(int n)
{
	int i;

    printf("\nDivisao (/):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d / %d = %.2f\n", n, i, (float)n / i);
    }
}


// Função para módulo
void tabuadaModulo(int n)
{
	int i;

    printf("\nModulo (%%):\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d %% %d = %d\n", n, i, n % i);
    }
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