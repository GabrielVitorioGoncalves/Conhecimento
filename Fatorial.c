#include <stdio.h>
#include <stdlib.h>

void fatorial(int fat);

int main (){

int num1;

printf("Programa 4 - Calculo Fatorial");

printf("\nInsira um numero inteiro: ");
scanf("%i", &num1);

fatorial(num1);


}


void fatorial(int fat){

    int i = fat, resultado;

    int j = 0;

    for(j = 1;i>j; j++ ){
        if (j == 1)
        {
            resultado  =  j * i;
        }
        
        resultado = resultado * j;
    }


    printf("O resultado fatorial e: %i", resultado);


}
