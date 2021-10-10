#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Controle_receber ();
void Controle_pagar ();
void Gera_relatorio ();
void Folha_de_pagamento();
void Lista_de_funcionarios ();
void Estoque_de_produtos ();
void Fornecedores ();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opi;

    printf("\n______________________________________________________\n\n\tSISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n______________________________________________________\n");

    printf("\n\n | (1) - Controle de contas a receber.\n | (2) - Controle de contas a pagar.\n | (3) - Gera relatórios financeiros.\n | (4) - Folha de pagamento dos funcionários.\n | (5) - Lista de funcionários.\n | (6) - Estoque de produtos.\n | (7) - Fornecedores.\n |\n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
    scanf("%d", &opi);


    if(opi == 1){

        Controle_receber ();

    }
        else if(opi == 2){
            
            Controle_pagar ();

        }
            else if (opi == 3){

                Gera_relatorio ();

            }
                else if (opi == 4){

                    Folha_de_pagamento ();

                }
                    else if (opi == 5){

                        Lista_de_funcionarios ();

                    }
                        else if (opi == 6){

                            Estoque_de_produtos ();

                        }
                            else if(opi == 7){

                                Fornecedores ();

                            }

    return 0;
}

void Controle_receber (){

}

void Controle_pagar (){

}

void Gera_relatorio (){

}

void Folha_de_pagamento(){

}

void Lista_de_funcionarios (){

}

void Estoque_de_produtos (){

}

void Fornecedores (){

}