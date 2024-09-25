#include <stdio.h>
    
char telaPrincipal(void){
    printf(" _______________________________ \n");
    printf("|.....       SIG-GYM       .....|\n");
    printf("|_______________________________|\n");
    printf("|                               |\n");
    printf("|  1. Módulo Cadastro           |\n");
    printf("|  2. Módulo Pesquisa           |\n");
    printf("|  3. Módulo Atualizar          |\n");
    printf("|  4. Módulo Deletar            |\n");
    printf("|  5. Relatórios                |\n");
    printf("|  6. Informações               |\n");
    printf("|  0. Sair                      |\n");
    printf("|_______________________________|\n\n");
}

char telaCadastro(void){
    printf(" __________________________________ \n");
    printf("|.....   MÓDULO DE CADASTRO   .....|\n");
    printf("|__________________________________|\n");
    printf("|                                  |\n");
    printf("|  1. Cadastrar Cliente            |\n");
    printf("|  2. Cadastrar Treino             |\n");
    printf("|  3. Cadastrar Funcionário        |\n");
    printf("|  4. Cadastrar Equipamento        |\n");
    printf("|  0. Menu principal               |\n");
    printf("|__________________________________|\n\n");
}

char telaPesquisar(void){
    printf(" __________________________________ \n");
    printf("|.....   MÓDULO DE PESQUISA   .....|\n");
    printf("|__________________________________|\n");
    printf("|                                  |\n");
    printf("|  1. Pesquisar Cliente            |\n");
    printf("|  2. Pesquisar Treino             |\n");
    printf("|  3. Pesquisar Funcionário        |\n");
    printf("|  4. Pesquisar Equipamento        |\n");
    printf("|  0. Menu principal               |\n");
    printf("|__________________________________|\n\n");
}

char telaAtualizar(void){
    printf(" __________________________________ \n");
    printf("|.....   MÓDULO DE ATUALIZAR  .....|\n");
    printf("|__________________________________|\n");
    printf("|                                  |\n");
    printf("|  1. Atualizar Cliente            |\n");
    printf("|  2. Atualizar Treino             |\n");
    printf("|  3. Atualizar Funcionário        |\n");
    printf("|  4. Atualizar Equipamento        |\n");
    printf("|  0. Menu principal               |\n");
    printf("|__________________________________|\n\n");
}

char telaDeletar(void){
    printf(" __________________________________ \n");
    printf("|.....   MÓDULO DE DELETAR    .....|\n");
    printf("|__________________________________|\n");
    printf("|                                  |\n");
    printf("|  1. Deletar Cliente              |\n");
    printf("|  2. Deletar Treino               |\n");
    printf("|  3. Deletar Funcionário          |\n");
    printf("|  4. Deletar Equipamento          |\n");
    printf("|  0. Menu principal               |\n");
    printf("|__________________________________|\n\n");
}

char telaRelatorios(void){
    printf(" __________________________________ \n");
    printf("|.....  MÓDULO DE RELATÓRIOS  .....|\n");
    printf("|__________________________________|\n");
    printf("|                                  |\n");
    printf("|  1. Ver todos os Clientes        |\n");
    printf("|  2. Ver todos os Treinos         |\n");
    printf("|  3. Ver todos os Funcionários    |\n");
    printf("|  4. Ver todos os Equipamentos    |\n");
    printf("|  0. Menu principal               |\n");
    printf("|__________________________________|\n\n");
}


char telaInfo(void){
    printf(" ___________________________________\n");
    printf("|.....  MÓDULO DE INFORMAÇÕES  .....|\n");
    printf("|___________________________________|\n");
    printf("|                                   |\n");
    printf("|  1. Equipe                        |\n");
    printf("|     > Anderson Gabriel            |\n");
    printf("|       > github: anderson-cruz13   |\n");
    printf("|     > Diana Rodrigues             |\n");
    printf("|       > github: dianaRodriguess   |\n");
    printf("|  0. Menu principal                |\n");
    printf("|___________________________________|\n\n");
}

void cabecalhos(char titulo[]){
    system("clear");
    int tamanhoTitulo = strlen(titulo);
    int tamanhoTotal = tamanhoTitulo + 10;
    int margem = (tamanhoTotal - tamanhoTitulo - 4) / 2;

    char linha[tamanhoTotal + 7];
    for (int i = 0; i < tamanhoTotal + 6; i++){
        linha[i] = '=';
    }
    linha[tamanhoTotal + 6] = '\0';

    char linhaTitulo[tamanhoTotal + 7];
    snprintf(linhaTitulo, sizeof(linhaTitulo), "-----%*s%s%*s-----", margem, "", titulo, margem, "");

    printf("%s\n", linha);
    printf("%s\n", linhaTitulo);
    printf("%s\n", linha);
}