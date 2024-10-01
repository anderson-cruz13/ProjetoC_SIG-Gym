#include <stdio.h>
#include <stdlib.h>
#include "view/interface.c"

void limparBuffer(void){
    int buffer;
    while((buffer = getchar()) != '\n' && buffer != EOF);
}

int main(void){
    char opcao;

    do {
        limparTela();
        opcao = telaPrincipal();

        if(opcao == '0'){
            printf("Saindo...\n");
            break;
        } else if(opcao == '1' || opcao == '2' || opcao == '3' 
            || opcao == '4' || opcao == '5' || opcao == '6'){
            gerenciarTelas(opcao);
        }

    } while(1);

    return 0;
}