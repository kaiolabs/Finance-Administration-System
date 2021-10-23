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
    do{
    
    printf("\n-------------------------------------------------------\n\tSISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n-------------------------------------------------------\n");

    printf("\n | (1) - Controle de dinheiro a recebe.\n | (2) - Controle de contas a paga.\n | (3) - Gera relatórios financeiros.\n | (4) - Folha de pagamento dos funcionários.\n | (5) - Lista de funcionários.\n | (6) - Estoque de produtos.\n | (7) - Fornecedores.\n |\n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
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

        printf("\n | (1) - Conta de luz.\n | (2) - Conta de água.\n | (3) - Conta de aluguel.\n | (4) - Conta fornecedores.\n | (5) - Valor total das contas deste mês.\n | (0) - Retorna ao menu anterior.\n | \n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
        scanf("%d", &opi);

        if (opi == 1){

            printf("\n | Informe o valor da conta de luz deste mês: ");
            scanf("%f", &money1);
            soma1 = soma1 + money1;
            printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money1);
            
            }

            else if (opi == 2){

                printf("\n | Informe o valor da conta de água deste mês: ");
                scanf("%f", &money2);
                soma2 = soma2 + money2;
                printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money2);

                }

                else if (opi == 3){

                    printf("\n | Informe o valor da conta de aluguel deste mês: ");
                    scanf("%f", &money3);
                    soma3 = soma3 + money3;
                    printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money3);

                    }

                    else if (opi == 4){

                        printf("\n | Informe o valor total a ser pago para os fornecedores deste mês: ");
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
    static float sal, Inss_cal1, Inss_cal2, Inss_cal3, Inss_cal4, sal_liq1, sal_liq2, sal_liq3, sal_liq4;
    int opi;
    
    printf("*********************\n");
    printf("*Folha de pagamentos*\n");
    printf("*********************\n");
    
   
    do{
        printf("\n |(1) - Salario do funcionário.\n |(2) - Desconto do INSS.\n |(3) - Salario final dos Funcionarios.\n |(4) - Adicionar funcionarios.\n |(0) - Retorna ao menu anterior.\n");
        scanf("%d", &opi);
        
        if(opi==1){
            printf("Digite o salrio do funcionario: ");
            scanf("%f", &sal);
            }
        if(opi==2){
                else if(sal<=1100){
                    Inss_cal1 = sal*7.5/100;
                    printf("O salário do funcionario será de: %f", Inss_cal1);
                }
                    else if(1100<=sal<=2.203){
                        Inss_cal2=sal*9/100;
                        printf("O salário do funcionario será de: %f", Inss_cal2);
                    }
                        else if(2.203<=sal<=3.305){
                            Inss_cal3=sal*12/100;
                            printf("O salário do funcionario será de: %f", Inss_cal3);
                        }
                            else if(3.305<=sal<=6.433){
                                Inss_cal4=sal*14/100;
                                printf("O salário do funcionario será de: %f", Inss_cal4);
                            }
        }
        if(opi==3){
            if(Inss_cal1)[
                sal_liq1=Inss_cal1-sal;
                printf("O salario final do funcionario será de: %f", sal_liq1);
            }
                else if(Inss_cal2){
                    sal_liq2=Inss_cal2-sal;
                    printf("O salario final do funcionario será de: %f", sal_liq2);
                }
                    else if(Inss_cal3){
                        sal_liq3=Inss_cal3-sal;
                        printf("O salario final do funcionario será de: %f", sal_liq3);
                    }
                        else if(Inss_cal4){
                            sal_liq4=Inss_cal4-sal;
                            printf("O salario final do funcionario será de: %f", sal_liq4);
                        }
        }
              
        
    }while(opi != 0);
}

void Lista_de_funcionarios (){

}

void Estoque_de_produtos (){

    
}

void Fornecedores (){

}
