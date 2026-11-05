#include <stdio.h>
int main(void)
{
    int altura = 4;
    for (int i = 1; i <= altura; i++)
    {
        // Espacios de la izquierda
        for (int j = 0; j < altura - i; j++)
    {
            printf(" ");
    }
    // primer bloque de #
    for (int k = 0; k < i; k++)
    {
        printf("#");
    }
    // separacion entre los bloques
    printf("  ");
    // segundo bloque de #
    for (int l = 0; l < i; l
    ++)
    {
        printf("#");
    }
    // Salto de linea
    printf("\n");
}
}

