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

<<<<<<< HEAD
    do{
    
    printf("\n-------------------------------------------------------\n\tSISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n-------------------------------------------------------\n");

    printf("\n\n | (1) - Controle de dinheiro a recebe.\n | (2) - Controle de contas a paga.\n | (3) - Gera relatórios financeiros.\n | (4) - Folha de pagamento dos funcionários.\n | (5) - Lista de funcionários.\n | (6) - Estoque de produtos.\n | (7) - Fornecedores.\n |\n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
=======
    printf("\n______________________________________________________\n\n\tSISTEMA DE ADIMINISTRAÃ‡Ã€O DE EMPRESAS\n______________________________________________________\n");

    printf("\n\n | (1) - Controle de contas a receber.\n | (2) - Controle de contas a pagar.\n | (3) - Gera relatÃ³rios financeiros.\n | (4) - Folha de pagamento dos funcionÃ¡rios.\n | (5) - Lista de funcionÃ¡rios.\n | (6) - Estoque de produtos.\n | (7) - Fornecedores.\n |\n | INFORME O NÃšMERO DA OPÃ‡ÃƒO DESEJADA: ");
>>>>>>> 314d7f1a669d332183075538ffa547d86c788707
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

    }while (opi != 0);
    

    return 0;
}

void Controle_receber (){

}

void Controle_pagar (){

    float money1, money2, money3, money4;
    static int opi, soma1 = 0, soma2 = 0, soma3 = 0 , soma4 = 0;
    static float soma5 = 0;

    printf("\n-----------------------------------------------\n\tCONTROLE DE CONTAS A PAGA\n-----------------------------------------------\n");

    do{

        printf("\n(1) - Conta de luz.\n(2) - Conta de água.\n(3) - Conta de aluguel.\n(4) - Conta fornecedores.\n(5) - Valor total das contas deste mês.\n(0) - Retorna ao menu anterior.\n\nInforme o número da opiçáo desejada: ");
        scanf("%d", &opi);

        if (opi == 1){

            printf("\nInforme o valor da conta de luz deste mês: ");
            scanf("%f", &money1);
            soma1 = soma1 + money1;
            printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money1);
            
            }

            else if (opi == 2){

                printf("\nInforme o valor da conta de água deste mês: ");
                scanf("%f", &money2);
                soma2 = soma2 + money2;
                printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money2);

                }

                else if (opi == 3){

                    printf("\nInforme o valor da conta de aluguel deste mês: ");
                    scanf("%f", &money3);
                    soma3 = soma3 + money3;
                    printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money3);

                    }

                    else if (opi == 4){

                        printf("\nInforme o valor total a ser pago para os fornecedores deste mês: ");
                        scanf("%f", &money4);
                        soma4 = soma4 + money4;
                        printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money4);

                        }
                        else if (opi == 5){

                            soma5 = soma1 + soma2 + soma3 + soma4;

                            printf("\n------------------------------------------------------\nO valor total das contas deste mês é de : RS %.2f\n------------------------------------------------------\n", soma5);

                            }


    }while(opi != 0);

}

void Gera_relatorio (){

}

void Folha_de_pagamento(){
    float sal_func, desc_inss, sal_liqui;
    
    sal_liqui = sal_func - desc_inss;
}

void Lista_de_funcionarios (){
    int num_func;
    
    printf("\nDigite o numero de funcionarios que tem em sua empresa: \n");
    scanf("%d", &num_func);
}

void Estoque_de_produtos (){
    int cont=1000, venda_estoque, repor;
    
    printf("\nDigite quantos produtos vocÃª vendeu: n\");
    scanf("%d", &prod_estoque);
    venda_estoque = cont - prod_estoque;
    repor = cont - venda_estoque;
    
}

void Fornecedores (){

}
