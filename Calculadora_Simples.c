#include <stdio.h>
#include <stdlib.h>

void somar();
void Multiplicacao();
void subtracao();
void divisao();
int main()
{

    int escolha;

    while (1)
    {
        printf("Programa 1 - Calculadora Simples");

        printf("\nEscolha a operacao que deseja fazer: ");
        printf("\n1 - Soma");
        printf("\n2 - Subtracao");
        printf("\n3 - Divisão");
        printf("\n4 - Multiplicacao");
        printf("\n5 - Sair do Programa\n");

        while ((scanf("%i", &escolha) != 1))
        {
            printf("Entrada Invalida tente novamente");
            fflush(stdin);
        }

        switch (escolha)
        {
        case 1:
            somar();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            divisao();
            break;
        case 4:
            Multiplicacao();
            break;
        case 5:
            printf("Saindo Do programa....\n");
            break;

        default:
            printf("Opcao Invalida tente novamente");

            fflush(stdin);
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
    return 0;
}

void somar()
{
    float a, b, result;
    printf("Digite os dois numeros que deseja somar:");
    scanf("%f %f", &a, &b);

    result = a + b;

    printf("O resultado de %.f + %.f = %.f", a, b, result);
}
void Multiplicacao()
{
    float a, b, result;
    printf("Digite os dois numeros que deseja multiplicar: ");
    scanf("%f %f", &a, &b);

    result = a * b;

    printf("O resultado de %.2f * %.2f = %.2f\n", a, b, result);
}
void subtracao()
{
    float a, b, result;
    printf("Digite os dois numeros que deseja subtrair: ");
    scanf("%f %f", &a, &b);

    result = a - b;

    printf("O resultado de %.2f - %.2f = %.2f\n", a, b, result);
}
void divisao()
{
    float a, b, result;
    printf("Digite os dois numeros que deseja dividir: ");
    scanf("%f %f", &a, &b);

    if (b != 0)
    {
        result = a / b;
        printf("O resultado de %.2f / %.2f = %.2f\n", a, b, result);
    }
    else
    {
        printf("Erro: Divisao por zero nao permitida.\n");
    }
}