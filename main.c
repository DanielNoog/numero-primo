#include <stdio.h>
#include <stdlib.h>

// PROGRAMA PARA VERIFICAR SE O NÚMERO É PRIMO OU NÃO

int main()
{
    int num1, num2, i, a;

    printf("\n Digite o primeiro valor:\n");
    scanf("%d", &num1);
    printf("\n Digite o segundo valor:\n");
    scanf("%d", &num2);

    for(i = num1; i <= num2; i++)
    {
        for(a = 2; a < i; a++)

        if(i % a == 0)
        {
        break;
        }

        if(i == a)
        {
            printf("\n%d - Numero primo\n", i);
        }
        else
        {
            printf("\n%d - Nao primo", i);
        }
    }

    return 0;
}
