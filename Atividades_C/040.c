// Somar números de 1 a 100 (while)

#include <stdio.h>

int main()
{ 
    int i = 1, soma = 0;

    while (i <= 100)
    { 
        soma += i;
        i++;
    }

    printf("Soma = %d", soma);

    return 0; 
}
