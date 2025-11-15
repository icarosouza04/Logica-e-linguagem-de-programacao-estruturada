// Contar quantos números positivos o usuário digitou
 
#include <stdio.h>

int main()
{
    int i; 
    int numero, positivos = 0; 

    for (i = 1; i <= 5; i++)
    { 
        printf("Digite um número: "); 
        scanf("%d", &numero); 
 
        if (numero > 0)
            positivos++; 
    }

    printf("Você digitou %d números positivos.\n", positivos);

    return 0; 
}
