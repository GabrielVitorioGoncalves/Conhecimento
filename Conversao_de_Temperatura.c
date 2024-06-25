#include <stdio.h>
#include <stdlib.h>

void celsius(float cel);
void fahrenheit(float fah);

int main()
{
    printf("Programa 2  - Conversao  de temperaturas\n");

    int escolha;
    float tmp1, tmp2;

    while (1)
    {
        printf("\n1 - Fahrenheit--Celsius  ");
        printf("\n2 - Celsius-Fahrenheit ");
        printf("\n3 - Sair ");

        while (scanf("%i", &escolha) != 1)
        {
            printf("Entrada Invalida Tente Novamente: ");
            while (getchar() != '\n');
                
        }

        switch (escolha)
        {
        case 1:

            printf("Insira a tempratura: ");
            scanf("%f", &tmp1);
            celsius(tmp1);

            break;
        case 2:
            printf("Insira a tempratura: ");
            scanf("%f", &tmp2);
            fahrenheit(tmp2);

            break;
        case 3:
            break;

        default:
            printf("Entrada Invalida Tente novamente");
            break;
        }
        printf("\nDeseja fazer outra operação? (1 - Sim, 0 - Nao): ");
        int continuar;
        while (scanf("%i", &continuar) != 1 || (continuar != 1 && continuar != 0))
        {
            printf("Entrada Invalida. Tente novamente: ");
            while (getchar() != '\n')
                ;
        }

        if (continuar == 0)
        {
            printf("Saindo do programa...\n");
            break;
        }
    }
}

void celsius(float fah)
{
    float cel;
    cel = (fah - 32) * (5 / 9);
    printf("\nSua temperatura final e : %2.f\n", cel);
}

// printf("\n2 - Celsius-Fahrenheit ");
void fahrenheit(float cel)
{
    float fah;
    fah = (cel * (9 / 5)) + 32;
    printf("\nSua temperatura final e : %2.f\n", fah);
}
