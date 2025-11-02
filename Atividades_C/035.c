// Laço de repetição para armazenar e exibir notas de um aluno

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    float notas[7];
    int c;

    printf(" ===== Dados ===== \n");
    printf("Informe o nome do aluno: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = 0;

    for (c = 0; c < 7; c++)
    {
        printf("Informe a nota %d: ", c + 1);
        scanf("%f", &notas[c]);
    }
    
    printf(" +-+-+ Notas de %s +-+-+ \n", nome);
    for (c = 0; c < 7; c++)
    {
        printf("Nota %d: %.2f\n", c + 1, notas[c]);
    }

    return 0;
}
