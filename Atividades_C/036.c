// Laço de repetição para exibir a tabuada de um número

#include <stdio.h>

int main()
{
    int num, c;

    printf("Digite um numero para exibir sua tabuada: ");
    scanf("%d", &num);

    printf(" =-=-= Tabuada de multiplicação =-=-= \n", num);
    for (c = 1; c <= 10; c++)
    {
        printf("%d x %d = %d\n", num, c, num * c);
    }
}
