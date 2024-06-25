#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Programa 2 - Identificar Numeros Primos\n");

    int n1;
    // Numero Primo e todo aquele numero que e divisível por 1 e so por ele mesmo

    printf("Digite um numero inteiro: ");
    scanf("%i", &n1);
   
    if (n1<1)
    {
        printf("NUMERO MENOR QUE 1");
       

    } else if (n1 >= 1 && n1 <= 7)
    {
        if (n1 == 1 || n1 == 2 || n1 == 3 || n1 == 5 || n1 == 7)
        {
            printf("O numero e primo");
        }
        else
        {
            printf("O numero nao  e primo");
        }
    }
    else if (n1 % 2 == 0 || n1 % 3 == 0 || n1 % 5 == 0 || n1 % 7 == 0)
    {
        printf("O numero nao  e primo");
    }
    else
    {
        printf("O numero e primo");
    }
}