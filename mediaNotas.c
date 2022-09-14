#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    float nota, soma = 0, media;

    printf("Digite o numero de notas: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    media = soma / n;
    printf("A media das notas e: %.2f\n", media);

    return 0;
}