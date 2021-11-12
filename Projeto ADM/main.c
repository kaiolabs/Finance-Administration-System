#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 1000

/*-------------------------------------------------------------------------------------------------------*/ 
typedef struct{                
       int   money;
       char nome[30];
}DADOS;

typedef struct{
       DADOS info[MAX];         
       int f;                   
}NODO;                          
/*-------------------------------------------------------------------------------------------------------*/ 

void cria_lista( int *fim );
void entrada_dados( DADOS *aux );
void inclui_lista( NODO *lista );
void consulta_nome( NODO lista );

void Controle_receber ();
void Controle_pagar ();
void Gera_relatorio ();
void Folha_de_pagamento();
void Estoque_de_produtos ();
void Patrocinadores ();
void Fornecedores ();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opi, CORA , Cora_cont = 0;
    
    do{

        if(Cora_cont == 0){
            printf("\n| ------------------------------------------------------------------------------------ |\n\n\t\t\tSISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n");
            printf("\n| ------------------------------------------------------------------------------------ |\n");
            printf("\n ( ^ _ ^ ) - Olá, eu sou a CORA e estou aqui para ajudar você com o que precisa!\n\n ( ^ _ ^ ) - Vamos lá então por favor digite o número ( 1 ) para começar: ");
            scanf("%d", &CORA);
            Cora_cont++;

        }else{

            system("cls"); 
            printf("\n| ------------------------------------------------------- |\n\n\t  SISTEMA DE ADIMINISTRAÇÀO DE EMPRESAS\n\n| ------------------------------------------------------- |\n");
            printf("\n | (1) - Salário dos funcionarios (folha de pagamento).\n | (2) - Controle de dinheiro a recebe.\n | (3) - Gera relatórios financeiros.\n | (4) - Controle de contas a paga.\n | (5) - Estoque de produtos.\n | (6) - Patrocinadores.\n | (7) - Fornecedores.\n |\n\n( ^ _ ^ ) - INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
            scanf("%d", &opi);

            switch (opi){

                case 1:
                    Folha_de_pagamento (); // 95% complete
                    break;
                case 2:
                    Controle_receber (); // Development process
                    break;
                case 3:
                    Gera_relatorio (); // Development process
                    break;
                case 4:
                    Controle_pagar (); // 95% complete
                    break;
                case 5:
                    Estoque_de_produtos (); // Development process
                    break;
                case 6:
                    Patrocinadores (); // 95% complete
                    break;

                case 7:
                    Fornecedores (); // Development process
                    break;
                }

        }

    }while (opi != 0);

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Controle de contas a receber

void Controle_receber (){

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Controle de contas a paga

void Controle_pagar (){

    float money1, money2, money3, money4;
    static int opi, soma1 = 0, soma2 = 0, soma3 = 0 , soma4 = 0;
    static float soma5 = 0;

    do{
        system("cls"); 
        printf("\n| ------------------------------------------------|\n\n\t    CONTROLE DE CONTAS A PAGA\n\n| ----------------------------------------------- |\n");
        printf("\n | (1) - Conta de luz.\n | (2) - Conta de água.\n | (3) - Conta de aluguel.\n | (4) - Conta fornecedores.\n | (5) - Valor total das contas deste mês.\n | (0) - Retorna ao menu anterior.\n | \n\n ( ^ _ ^ ) INFORME O NÚMERO DA OPÇÃO DESEJADA: ");
        scanf("%d", &opi);

        switch (opi){

            case 1:{

                printf("\n\n ( ^ _ ^ ) Informe o valor da conta de luz deste mês: ");
                scanf("%f", &money1);
                soma1 = soma1 + money1;
                printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money1);

                break;
            }
            case 2:{

                printf("\n\n ( ^ _ ^ ) Informe o valor da conta de água deste mês: ");
                scanf("%f", &money2);
                soma2 = soma2 + money2;
                printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money2);

                break;
            }
            case 3:{

                printf("\n\n ( ^ _ ^ ) Informe o valor da conta de aluguel deste mês: ");
                scanf("%f", &money3);
                soma3 = soma3 + money3;
                printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money3);

                break;
            }
            case 4:{

                printf("\n\n ( ^ _ ^ ) Informe o valor total a ser pago para os fornecedores deste mês: ");
                scanf("%f", &money4);
                soma4 = soma4 + money4;
                printf("\n-------------------------------------\nO valor informado foi : RS %.2f\n-------------------------------------\n", money4);

                break;
            }
            case 5:{

                soma5 = soma1 + soma2 + soma3 + soma4;
                printf("\n------------------------------------------------------\nO valor total das contas deste mês é de : RS %.2f\n------------------------------------------------------\n", soma5);

                break;
            }
        
        }

    }while(opi != 0);

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função -  Gera relatórios financeiros

void Gera_relatorio (){

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Salário dos funcionarios (folha de pagamento)

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

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Estoque de produtos.

void Estoque_de_produtos (){

    
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Patrocinadores

void Patrocinadores (){

    NODO lista;
    int aux;

    int opi, lista_cont = 0;

    do{

        system("cls");
        printf("\n | ---------------------------------------------------------------------|\n\n\t\t\t     PATROCINADORES\n\n | ---------------------------------------------------------------------|\n");
        printf("\n | (1) - Cria lista de patrocinadores.\n | (2) - Adicionar patrocinadores.\n | (3) - Consulta patrocinador.\n | (4) - Mostra lista completa de patrocinadores.\n | (0) - Retorna ao menu anterior.\n | \n\n ( ^ _ ^ ) - INFORME O NÚMERO DA OPÇÂO DESEJADA: ");
        scanf("%d", &opi);

        switch (opi){

        case 1:{

            cria_lista( &lista.f );
            lista_cont++;
            break;
        }

        case 2:{

            if( lista_cont == 0){
                system("cls");
                printf("\n | ---------------------------------------------------------------------|\n ");
                printf("\n   ( ^ _ ^ ) - Por favor primeiramente  crie a lista de patrocinadores!\n");
            }else{
                inclui_lista( &lista );
            }
            break;
        }

        case 3:{

            if( lista_cont == 0){
                system("cls");
                printf("\n | ---------------------------------------------------------------------|\n ");
                printf("\n   ( ^ _ ^ ) - Por favor primeiramente  crie a lista de patrocinadores!\n");
            }else{
                consulta_nome ( lista );
            }
            break;
        }

        case 4:{

            if( lista_cont == 0){
                system("cls");
                printf("\n | ---------------------------------------------------------------------|\n ");
                printf("\n   ( ^ _ ^ ) - Por favor primeiramente  crie a lista de patrocinadores!\n");
            }else{
                imprime_lista( lista );
            }
            break;
        }
        }

   }while ( opi != 0 );

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Função - Fornecedores

void Fornecedores (){

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// Funçóes relacionadas a banbo de dados em pilha 

void cria_lista( int *fim ){

    system("cls");
    *fim = 0;    
    printf("\n | ---------------------------------------------------------------------|\n ");
    printf( "\n\t\t\t      Lista criada!\n" );

    getchar();
}

void entrada_dados( DADOS *aux ){
	system("cls");
    printf("\n | Informe o nome do patrocinador: ");
    fflush( stdin );
    gets( aux->nome );

    printf("\n | Digite o valor que vai sé fornecido pelo de patrocinadore: ");
    fflush( stdin );     
    scanf( "%d", &aux-> money );
}

void inclui_lista( NODO *lista ){


        int i;

        if(lista -> f == MAX){
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf( "\n\t\t\t      Lista cheia! \n" );

        }else{
            DADOS aux;
            entrada_dados( &aux );

            for (i = lista -> f; i > 0; i--){
                lista -> info[i] = lista -> info [i - 1];
            }

            lista -> info[0] = aux;
            lista -> f++;
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf("\n\t\t     Registro incluído no início!\n");
        }
     

}

void imprime_lista( NODO lista ){
     
    int i;

    if( lista.f == 0 ){
        system("cls");
        printf("\n | ---------------------------------------------------------------------|\n ");
        printf( "\n\t\t\t      Lista vazia! \n" );
    }
    else{
        system("cls");
        printf("\n | -------------------------- Relatório Geral --------------------------|\n ");
	    for( i = 0 ; i < lista.f ; i++ ) { 
	         printf( "\n\tPatrocinador: [%d]", i+1 );
	         printf( "\t Nome: %s", lista.info[ i ].nome );
             printf( "\t Valor: R$ %d\n", lista.info[ i ].money );
             
	    }
    }    
    getchar();
}

void consulta_nome( NODO lista ){

        int i = 0;
        char nome[30];

        system("cls");
        printf("\n | Informe o nome a ser consultado: ");
        fflush(stdin);
        gets(nome);

        while ((i < lista.f) && strcmp(lista.info[i].nome, nome) != 0)
        {
            i++;
        }
        if(i >= lista.f){
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf("\n\t\t   Patrocinador não encontrado na lista!\n");

        }else{
            system("cls");
            printf("\n | ---------------------------------------------------------------------|\n ");
            printf( "\n\t   Patrocinador:");
	        printf( "\t Nome: %s", lista.info[ i ].nome );
            printf( "\t Valor: R$ %d\n", lista.info[ i ].money );
        }

    }   

//----------------------------------------------------------------------------------------------------------------------------------------------------------//
