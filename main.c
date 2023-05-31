#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero;

    printf("Digite um numero entre 12 e 20: ");
    scanf("%d", &numero);

    while (numero < 12 || numero > 20)
    {
        printf("Entrada invalida\nDigite um numero entre 12 e 20: ");
        scanf("%d", &numero);
    }
    printf("Numero digitado: %d", numero);
    return 0;
}
