#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a = 2;
    char b = 'y';
    //
    if(a == 1){
        printf("\nOpcao escolha: 1\n");

    }else if(a == 2){
        printf("\nOpcao escolha: 2\n");
    }else if(a == 3){
        printf("\nOpcao escolha: 3\n");
    }else {
        printf("\nOpcao invalida\n");
    }
    //switch case char
    switch(b){
    case 'x':
            printf("\nA letra eh x\n");
            break;
    default:
            printf("\nOpcao invalida\n");
            break;


    }
    //mesmo codigo de cima "if" adaptado para switch
    switch(a){
    case 1:
            printf("\na opcao eh 1\n");
            break;
    case 2:
            printf("\na opcao eh 2\n");
            break;
    case 3:
            printf("\na opcao eh 3\n");
            break;

    default:
            printf("\nOpcao invalida\n");
            break;
    }
    return 0;
}
