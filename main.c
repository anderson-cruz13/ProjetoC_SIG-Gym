#include <stdio.h>
#include <stdlib.h>
#include "view/interface.c"

void limparTela(void){
    system("clear");
}

void gerenciarTelas(char opcao){
    switch (opcao){
    limparTela();
    case '1':
        telaCadastro();
        break;
    case '2':
        telaPesquisar();
        break;
    case '3':
        telaAtualizar();
        break;
    case '4':
        telaDeletar();
        break;
    case '5':
        telaRelatorios();
        break;
    case '6':
        telaInfo();
        break;
    default:
        break;
    }
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