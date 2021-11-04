#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Controle_receber ();
void Controle_pagar ();
void Gera_relatorio ();
void Folha_de_pagamento();
void Estoque_de_produtos ();
void Fornecedores ();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opi;
    
    do{
    system("cls"); 
    printf("\n-------------------------------------------------------\n\tSISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n-------------------------------------------------------\n");
    printf("\n | (1) - Controle de dinheiro a recebe.\n | (2) - Controle de contas a paga.\n | (3) - Gera relatórios financeiros.\n | (4) - Salário dos funcionarios (folha de pagamento)\n | (5) - Estoque de produtos.\n | (6) - Fornecedores.\n |\n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
    scanf("%d", &opi);


    switch (opi){

        case 1:
            Controle_receber ();
            break;
        case 2:
            Controle_pagar ();
            break;
        case 3:
            Gera_relatorio ();
            break;
        case 4:
            Folha_de_pagamento ();
            break;
        case 5:
            Estoque_de_produtos ();
            break;
        case 6:
            Fornecedores ();
            break;
        }

    }while (opi != 0);

}

void Controle_receber (){

}

void Controle_pagar (){

    float money1, money2, money3, money4;
    static int opi, soma1 = 0, soma2 = 0, soma3 = 0 , soma4 = 0;
    static float soma5 = 0;

    do{
        system("cls"); 
        printf("\n-----------------------------------------------\n\tCONTROLE DE CONTAS A PAGA\n-----------------------------------------------\n");
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

    int opi, opi_funcionarios, add_funcionario, remove_funcionario, quant_funcionarios = 0, verificador_de_bonus = 0, sal[quant_funcionarios], verificador_de_salario = 0, x, y, z;
    float cal_bonus,  cal_inss, bonus_porcentagem, salario_final;
    float desconto_inss = 7.5;

    do{
        system("cls"); 
        printf("\n-------------------------------------------\n\t    Folha de pagamentos\n-------------------------------------------\n");
        printf("\n | (1) - Bonificação.\n | (2) - Desconto do INSS.\n | (3) - Quantidade de funcionários.\n | (4) - Salário bruto dos Funcionarios.\n | (5) - Salário líquido dos Funcionarios.\n | (6) - Adicionar salário dos funcionários.\n | (0) - Retorna ao menu anterior.\n | \n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
        scanf("%d", &opi);

        // Quantidade de funcionários.

        if(opi == 3){

                do{
                    
                    printf("\n | (1) - Adicionar  funcionários\n | (2) - Remove funcionários.\n | (3) - Quantidade de funcionários.\n | (0) - Retorna ao menu anterior.\n | \n | INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
                    scanf("%d", &opi_funcionarios);

                    if(opi_funcionarios == 1){

                        system("cls"); 
                        printf("\n | Quantos funcionários você deseja adiconar: ");
                        scanf("%d", &add_funcionario);

                        quant_funcionarios = quant_funcionarios + add_funcionario;

                        system("cls");
                        printf("\n | Foi adicionado %d funcionários.\n", add_funcionario);
                        }
                        else if(opi_funcionarios == 2){

                            system("cls"); 
                            printf("\n | Quantos funcionários você deseja remove: ");
                            scanf("%d", &remove_funcionario);

                            quant_funcionarios = quant_funcionarios - remove_funcionario;

                            system("cls");
                            printf("\n | Foi removido %d funcionários.\n", remove_funcionario);
                            }
                            else if(opi_funcionarios == 3){

                                system("cls"); 
                                printf("\n | A quantidade de funcionários é: %d\n", quant_funcionarios);

                                }




                }while(opi_funcionarios != 0);
                system("cls"); 

        }

            // Adicionar salário dos funcionários.

            else if(opi == 6){

                if(quant_funcionarios > 0){
                    system("cls");
                    for(x = 0; x < quant_funcionarios; x++){
                            printf("\n | Digite o salário do %d° funcionário: ", x+1);
                            scanf("%d", &sal[x]);
                            verificador_de_salario++;
                            }

                            system("cls"); 
                            printf("\n-----------------------------------------------------------------"); 
                            for(y = 0; y < quant_funcionarios; y++){
                                printf("\n | O salário do %d° funcionário é: %d", y+1, sal[y]);
                            }
                            printf("\n-----------------------------------------------------------------\n"); 
                            
                }
                else{
                    system("cls");
                    printf("\n | Por favor primeiramente informe a quantidade de funcionários!\n");
                }
                    
                }
                // Bonificação.

                else if(opi == 1){

                    if(quant_funcionarios > 0){

                        if(verificador_de_salario > 0){

                            system("cls");
                            printf("\n | Informa em porcentagem a gratificação para os funcionários: ");
                            scanf("%f", &bonus_porcentagem);

                            system("cls");
                            printf("\n-----------------------------------------------------------------"); 
                            for(z = 0; z < quant_funcionarios; z++){
                                cal_bonus =  sal[z] * bonus_porcentagem / 100;
                                printf("\n | A bonificação do %d° funcionários será de: R$ %.2f", z+1, cal_bonus);
                                verificador_de_bonus++;
                                }
                            printf("\n-----------------------------------------------------------------\n");

                         }
                         else{
                             system("cls");
                             printf("\n | Por favor primeiramente adicionar o salário dos funcionários!\n");
                         }
                    }
                    else{
                        system("cls");
                        printf("\n | Por favor primeiramente informe a quantidade de funcionários!\n");
                    }
                }
                    // Desconto do INSS.

                    else if(opi == 2){

                        if(quant_funcionarios > 0){

                            if(verificador_de_salario > 0){

                                system("cls");
                                printf("\n-----------------------------------------------------------------");
                                for(z = 0; z < quant_funcionarios; z++){
                                    cal_inss =  sal[z] * desconto_inss / 100;
                                    printf("\n | O desconto do INSS do %d° funcionários será de: R$ %.2f", z+1, cal_inss);
                                    }
                                printf("\n-----------------------------------------------------------------\n");

                            }
                            else{
                                system("cls");
                                printf("\n | Por favor primeiramente adicionar o salário dos funcionários!\n");
                            }
                        }
                        else{
                            system("cls");
                            printf("\n | Por favor primeiramente informe a quantidade de funcionários!\n");
                        }
                    }  
                        //Salário final dos Funcionarios.
                        else if(opi == 5){

                        if(quant_funcionarios > 0){

                            if(verificador_de_salario > 0){

                                if(verificador_de_bonus > 0){

                                        system("cls");
                                        printf("\n-----------------------------------------------------------------");
                                        for(z = 0; z < quant_funcionarios; z++){
                                            salario_final = sal[z] + ( sal[z] * bonus_porcentagem / 100) - (sal[z] * desconto_inss / 100);
                                            printf("\n | O Salário líquido dos Funcionarios %d° será de: R$ %.2f", z+1, salario_final);
                                            }
                                        printf("\n-----------------------------------------------------------------\n");
                                }
                                else{
                                    system("cls");
                                    printf("\n | Por favor primeiramente adicionar a bonificação dos funcionários!\n");
                                }
                            }
                            else{
                                system("cls");
                                printf("\n | Por favor primeiramente adicionar o salário dos funcionários!\n");
                            }
                        }
                        else{
                            system("cls");
                            printf("\n | Por favor primeiramente informe a quantidade de funcionários!\n");
                        }
                    }
                        // Salário bruto
                        else if(opi == 4){

                            if(verificador_de_salario > 0){

                                system("cls"); 
                                printf("\n-----------------------------------------------------------------");
                                for(y = 0; y < quant_funcionarios; y++){
                                    printf("\n | O salário bruto do %d° funcionário é: R$ %d", y+1, sal[y]);
                                    }
                                printf("\n-----------------------------------------------------------------\n");
                                        
                            }
                            else{
                                system("cls");
                                printf("\n | Por favor primeiramente adicionar o salário dos funcionários!\n");
                            }

                            }            

    }while(opi != 0);
    
}

void Estoque_de_produtos (){

    
}

void Fornecedores (){

}
