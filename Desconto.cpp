#include <iostream>
#include <stdio.h>

int main(int argc, char ** argv) {

    float desc, por;
    int valor, cal;
    printf("Digite o valor: ");
    scanf("%d",&valor);

    printf("\nDigite o valor do desconto em (%): ");
    scanf("%f",&desc);
    por = (desc/100)*valor;
    cal = valor - por;

    printf("O desconto foi: %.1f",por);
    printf("\nO valor da compra foi %d como o desconto de %.1f%: ",valor, desc);
    printf("\n o preco final foi de : %d", cal);



    return 0;
}
//
// Created by lucas on 09/03/2024.
//
