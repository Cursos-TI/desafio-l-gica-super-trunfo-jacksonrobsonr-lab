#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {

        char estado_carta1, estado_carta2;                      //Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
        int codigo_carta1, codigo_carta2;                       //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
        char cidade_carta1[20], cidade_carta2[20];              //Nome da Cidade: O nome da cidade. Tipo: char[] (string)
        int n_habitantes_carta1, n_habitantes_carta2;           //População: O número de habitantes da cidade. Tipo: int
        float area_carta1, area_carta2;                         //Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
        float pib_carta1, pib_carta2;                           //PIB: O Produto Interno Bruto da cidade. Tipo: float
        int turismo_carta1, turismo_carta2;                     //Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
        int opcao_menu_inicial,opcao_menu_inicial2;             //variavel para armazenar a escolha do atributo
        float densidade_carta1, densidade_carta2;               //Densidade Populacional
        float pib_perc_carta1, pib_perc_carta2;                 //variavel para armazenar pib per capita       
        long int super_poder_carta1, super_poder_carta2;        //variavel para armazenar o super poder da carta
        float soma_carta1, soma_carta2;                         //soma dos dois atributos                
        float valor_atributo1_carta1, valor_atributo2_carta1, valor_atributo1_carta2, valor_atributo2_carta2;
        char nome_atributo1[40], nome_atributo2[40];

//entrada de dados da carta 1
printf("Insira as informações da carta 1\n");
printf("________________________________\n");

        printf("Insira a letra de 'A' a 'H' que representa seu estado da sua primeira carta: ");
        scanf(" %c", &estado_carta1);
        printf("Inserir o código da carta: ");
        scanf(" %d", &codigo_carta1);
        printf("Insira o nome da cidade: ");
        scanf(" %s", &cidade_carta1);
        printf("Insira o número de habitantes da cidade: ");
        scanf(" %d", &n_habitantes_carta1);
        printf("Insira a área da cidade em quilômetros quadrados: ");
        scanf(" %f", &area_carta1);
        printf("Insira o Produto Interno Bruto da cidade: ");
        scanf(" %f", &pib_carta1);
        printf("Insira quantidade de pontos turísticos na cidade: ");
        scanf(" %d", &turismo_carta1);

//entrada de dados da carta 2
printf("\n\nInsira as informações da carta 2\n");
printf("________________________________\n");

        printf("Insira a letra de 'A' a 'H' que representa seu estado da sua segunda carta: ");
        scanf(" %c", &estado_carta2);
        printf("Inserir o código da carta: ");
        scanf(" %d", &codigo_carta2);
        printf("Insira o nome da cidade: ");
        scanf(" %s", &cidade_carta2);
        printf("Insira o número de habitantes da cidade: ");
        scanf(" %d", &n_habitantes_carta2);
        printf("Insira a área da cidade em quilômetros quadrados: ");
        scanf(" %f", &area_carta2);
        printf("Insira o Produto Interno Bruto da cidade: ");
        scanf(" %f", &pib_carta2);
        printf("Insira quantidade de pontos turísticos na cidade: ");
        scanf(" %d", &turismo_carta2);

densidade_carta1 = n_habitantes_carta1 / area_carta1;        //Calcular a Densidade Populacional da carta 1
densidade_carta2 = n_habitantes_carta2 / area_carta2;        //Calcular a Densidade Populacional da carta 2
pib_perc_carta1 = pib_carta1 / n_habitantes_carta1;          //Calcular o PIB per Capita da carta 1
pib_perc_carta2 = pib_carta2 / n_habitantes_carta2;          //Calcular o PIB per Capita da carta 2
super_poder_carta1 = n_habitantes_carta1 + area_carta1 + pib_carta1 + turismo_carta1 + pib_perc_carta1 + (1.0f / densidade_carta1);     //Calcular o super poder da carta 1
super_poder_carta2 = n_habitantes_carta2 + area_carta2 + pib_carta2 + turismo_carta2 + pib_perc_carta2 + (1.0f / densidade_carta2);     //Calcular o super poder da carta 2

//menu de escolha de atributo
printf("Escolha dois atributos diferentes para comparar?\n\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Número de Pontos turísticos\n");
printf("5 - Densidade Demográfica\n\n");
printf("Qual o primeiro atributo: ");
scanf("%d",&opcao_menu_inicial);

do {
printf("Qual o segundo atributo: ");
scanf("%d",&opcao_menu_inicial2);
if (opcao_menu_inicial == opcao_menu_inicial2){
     printf("Opcao repetida! Tente novamente.\n");   
}
} while (opcao_menu_inicial == opcao_menu_inicial2);

switch (opcao_menu_inicial){ // estrutura de comparação do primeiro atributo
        case 1:{
                valor_atributo1_carta1 = n_habitantes_carta1;
                valor_atributo1_carta2 = n_habitantes_carta2;
                strcpy(nome_atributo1, "População");          
                break;}
        case 2:{
                valor_atributo1_carta1 = area_carta1;
                valor_atributo1_carta2 = area_carta2; 
                strcpy(nome_atributo1, "Área");
                break;}
        case 3:{
                valor_atributo1_carta1 = pib_carta1;
                valor_atributo1_carta2 = pib_carta2;
                strcpy(nome_atributo1, "PIB");
                break;}
        case 4:{
                valor_atributo1_carta1 = turismo_carta1;
                valor_atributo1_carta2 = turismo_carta2;
                strcpy(nome_atributo1, "Pontos_turísticos");
                break;}
        case 5:{
                valor_atributo1_carta1 = densidade_carta1;
                valor_atributo1_carta2 = densidade_carta2;
                strcpy(nome_atributo1, "Densidade_Demográfica");
                break;}
}

switch (opcao_menu_inicial2){ // estrutura de comparação do segundo atributo
        case 1:{
                valor_atributo2_carta1 = n_habitantes_carta1;
                valor_atributo2_carta2 = n_habitantes_carta2;
                strcpy(nome_atributo2, "População");  
                break;}
        case 2:{
                valor_atributo2_carta1 = area_carta1;
                valor_atributo2_carta2 = area_carta2;
                strcpy(nome_atributo2, "Área"); 
                break;}
        case 3:{
                valor_atributo2_carta1 = pib_carta1;
                valor_atributo2_carta2 = pib_carta2;
                strcpy(nome_atributo2, "PIB"); 
                break;}
        case 4:{
                valor_atributo2_carta1 = turismo_carta1;
                valor_atributo2_carta2 = turismo_carta2;
                strcpy(nome_atributo2, "Pontos_turísticos"); 
                break;}
        case 5:{
                valor_atributo2_carta1 = densidade_carta1;
                valor_atributo2_carta2 = densidade_carta2;
                strcpy(nome_atributo2, "Densidade_Demográfica");
                break;}
}
soma_carta1 = valor_atributo1_carta1 + valor_atributo2_carta1;
soma_carta2 = valor_atributo1_carta2 + valor_atributo2_carta2;

if (soma_carta1>soma_carta2){
        //carta 1 ganha
        printf("O nome dos dois locais:\n");  //solicitação 6.1
        printf("Carta 1 - %s\n", cidade_carta1);
        printf("Carta 2 - %s\n\n", cidade_carta2);
        printf("Atributos escolhidos:\n"); // solicitação 6.2
        printf("Atributo 1 - %s\n", nome_atributo1);
        printf("Atributo 2 - %s\n\n", nome_atributo2);
        printf("Valores dos atributos de cada carta:\n"); //solicitação 6.3
        printf("Carta 1\n");
        printf("Atributo %s: %.2f\n",nome_atributo1, valor_atributo1_carta1);
        printf("Atributo %s: %.2f\n",nome_atributo2, valor_atributo2_carta1);
        printf("Carta 2\n");
        printf("Atributo %s: %.2f\n",nome_atributo1, valor_atributo1_carta2);
        printf("Atributo %s: %.2f\n\n",nome_atributo2, valor_atributo2_carta2);
        printf("A soma dos dois atributos escolhidos são:\n"); //solicitação 6.4
        printf("Carta 1: %.2f\n", soma_carta1);
        printf("Carta 2: %.2f\n\n\n", soma_carta2);
        printf("A CARTA 1 VENCEU\n\n\n"); // solicitação 6.5
} else if (soma_carta1<soma_carta2) {
        //carta 2 ganha
        printf("O nome dos dois locais:\n");  //solicitação 6.1
        printf("Carta 1 - %s\n", cidade_carta1);
        printf("Carta 2 - %s\n\n", cidade_carta2);
        printf("Atributos escolhidos:\n"); // solicitação 6.2
        printf("Atributo 1 - %s\n", nome_atributo1);
        printf("Atributo 2 - %s\n\n", nome_atributo2);
        printf("Valores dos atributos de cada carta:\n"); //solicitação 6.3
        printf("Carta 1\n");
        printf("Atributo %s: %.2f\n",nome_atributo1, valor_atributo1_carta1);
        printf("Atributo %s: %.2f\n",nome_atributo2, valor_atributo2_carta1);
        printf("Carta 2\n");
        printf("Atributo %s: %.2f\n",nome_atributo1, valor_atributo1_carta2);
        printf("Atributo %s: %.2f\n\n",nome_atributo2, valor_atributo2_carta2);
        printf("A soma dos dois atributos escolhidos são:\n"); //solicitação 6.4
        printf("Carta 1: %.2f\n", soma_carta1);
        printf("Carta 2: %.2f\n\n\n", soma_carta2);
        printf("A CARTA 2 VENCEU\n\n\n"); // solicitação 6.5

} else {
        //empate
        printf("O nome dos dois locais:\n");  //solicitação 6.1
        printf("Carta 1 - %s\n", cidade_carta1);
        printf("Carta 2 - %s\n\n", cidade_carta2);
        printf("Atributos escolhidos:\n"); // solicitação 6.2
        printf("Atributo 1 - %s\n", nome_atributo1);
        printf("Atributo 2 - %s\n\n", nome_atributo2);
        printf("Valores dos atributos de cada carta:\n"); //solicitação 6.3
        printf("Carta 1\n");
        printf("Atributo %s: %.2f\n",nome_atributo1, valor_atributo1_carta1);
        printf("Atributo %s: %.2f\n",nome_atributo2, valor_atributo2_carta1);
        printf("Carta 2\n");
        printf("Atributo %s: %.2f\n",nome_atributo1, valor_atributo1_carta2);
        printf("Atributo %s: %.2f\n\n",nome_atributo2, valor_atributo2_carta2);
        printf("A soma dos dois atributos escolhidos são:\n"); //solicitação 6.4
        printf("Carta 1: %.2f\n", soma_carta1);
        printf("Carta 2: %.2f\n\n\n", soma_carta2);
        printf("EMPATE\n\n\n"); // solicitação 6.5
}
}