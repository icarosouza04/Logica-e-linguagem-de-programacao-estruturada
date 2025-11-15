// Ler números até digitar 0 (do...while)

#include <stdio.h>
 
int main()
{ 
    int n; 
    do
    { 
        printf("\nDigite um número (0 para sair): "); 
        scanf("%d", &n);
    }
    while (n != 0); 
 
    return 0; 
}
