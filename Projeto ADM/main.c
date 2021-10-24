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

   int opi,

    printf("\n------------------------------------\n\tFolha de pagamentos\n------------------------------------\n");

    do{
        printf("\n | (1) - Salário do funcionário.\n | (2) - Desconto do INSS.\n | (3) - Salário final dos Funcionarios.\n | (4) - Adicionar funcionários.\n | (0) - Retorna ao menu anterior.\n | \n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
        scanf("%d", &opi);


        if(opi == 2){

            printf("\n | Digite o salário do funcionário: ");
            scanf("%f", &sal);

            if(sal<=1100){
                Inss_cal1 = sal*7.5/100;
                printf("\n | O desconto do INSS será de: R$ %.2f\n", Inss_cal1);
                }

                else if(1100<=sal<=2.203){
                    Inss_cal2=sal*9/100;
                    printf("\n | O desconto do INSS será de: R$ %.2f\n", Inss_cal2);
                    }

                    else if(2.203<=sal<=3.305){
                        Inss_cal3=sal*12/100;
                        printf("\n | O desconto do INSS será de: R$ %.2f\n", Inss_cal3);
                        }

                        else if(3.305<=sal<=6.433){
                            Inss_cal4=sal*14/100;
                            printf("\n | O desconto do INSS será de: R$ %.2f\n", Inss_cal4);
                            }

        }

        if(opi == 3){
        printf("\n | Digite o salário do funcionário: ");
        scanf("%f", &sal);
            
            if(Inss_cal1){
                sal_liq1=sal-Inss_cal1;
                printf("\n | O salário total do funcionário será de: R$ %.2f", sal_liq1);
                }

                else if(Inss_cal2){
                    sal_liq2=sal-Inss_cal2;
                    printf("\n | O salário total do funcionário será de: R$ %.2f", sal_liq2);
                    }

                    else if(Inss_cal3){
                        sal_liq3=sal-Inss_cal3;
                        printf("\n | O salário total do funcionário será de: R$ %.2f", sal_liq3);
                        }

                        else if(Inss_cal4){
                            sal_liq4=sal-Inss_cal4;
                            printf("\n | O salário total do funcionário será de: R$ %.2f", sal_liq4);
                            }
        }

        if(opi == 1){
            printf("\n | Digite o salário do funcionário: ");
            scanf("%f", &sal);
            }
    }while(opi != 0);
}

void Lista_de_funcionarios (){
   int num_func = 0, i;
   static char nome_func[1000]; 
   printf("\n------------------------------------\n\tLista de funcionarios\n------------------------------------\n"); 
   do{
        if(opi == 4){
                printf("Digite a quantidade de funcionarios que você deseja adicionar: \n");
                scanf("%d", &num_func);
                
                for(i = 1; i<= num_func; i++){
                    printf("Digite o nome do %d° funcionario: \n", i);
                    scanf("%s", &nome_func);
                    printf("nome de funcionarios: %s\n", num_func);
                }
                
        }
   }while(opi != 0);
}

void Estoque_de_produtos (){
    static produtos=1000, prod_vend, total_est, produtos_rep;
    int opi;
   
    printf("\n------------------------------------\n\tEstoque de produtos\n------------------------------------\n");
    do{
        printf("\n | (1) - Quantidade máxima de produtos no estoque.\n | (2) - Quantos produtos total no estoque.\n | (3) - Quantos produtos precisam ser repostos.\n | (0) - Retorna ao menu anterior.\n | \n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
        scanf("%d", &opi);
        
        if(opi == 1){
            printf("\n | A quantidade máxima de produtos no estoque são: %d\n", produtos);
            }
            else if(opi == 2){
                printf("Digite a quantidade de produtos que a sua empresa vendeu: \n");
                scanf("d", &prod_vend);
            
                total_est = produtos - prod_vend;
                printf("A quantidade total de produtos no estoque é de: %d\n", total_est);
            }
                else if(opi == 3){
                    produtos_rep = produtos - total_est;
                    printf("O total de produtos a repor será de: %d\n", produtos_rep);
                }
    }while(opi != 0);
}

void Fornecedores (){

}
