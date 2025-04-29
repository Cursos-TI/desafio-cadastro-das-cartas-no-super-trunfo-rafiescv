#include <stdio.h>

int main() {
    //Declaração de veriáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

   //Declaração de variáveis da carta 2
   char estado2;
   char codigo2[4];
   char cidade2[50];
   unsigned long int populacao2;
   float area2;
   float pib2;
   int pontos_turisticos2;

   //Título inicial do jogo super trunfo
   printf("\n                   *       DESAFIO SUPER TRUNFO      *                         \n");
   printf("                     ***********************************                         \n");

   //Título para a entrada de dados da PRIMEIRA carta 
   printf("\n                   * INFORME OS DADOS PARA A CARTA 1 *                         \n");
   printf("                     ***********************************                         \n");

   //Estado
   printf("Informe uma letra de 'A' a 'H' para indicar o primeiro estado.\n");
   printf("Estado: ");
   scanf(" %c", &estado1); //O %c lê apenas um caractere
   
   printf("\n"); //Para dividir os dados
   
   //Código
   printf("Informe a letra do estado mencionado anteriormente, seguida de um número de 01 a 04.\n");
   printf("Código:");
   scanf("%4s", codigo1); //O %4s lê uma string de até 4 caracteres

   printf("\n"); //Para dividir os dados

   //Cidade
   printf("Informe o nome da primera cidade.\n");
   printf("Cidade:");
   scanf("%s", cidade1); //O %s lê uma cadeia de caracteres

   printf("\n"); //Para dividir os dados

   //População
   printf("Informe o número de habitantes da cidade.\n");
   printf("População:");
   scanf("%lu", &populacao1); //O %lu lê números inteiros 

   printf("\n"); //Para dividir os dados

   //Área
   printf("Informe a área em quilômetros quadrados (km²).\n");
   printf("Área:");
   scanf("%f", &area1); //O %f lê um número de ponto flutuante

   printf("\n"); //Para dividir os dados

   //PIB
   printf("Informe o Produto Interno Bruto da cidade (PIB).\n");
   printf("PIB:");
   scanf("%f", &pib1); //O %f lê um número de ponto flutuante

   printf("\n"); //Para dividir os dados

   //Pontos Turísticos
   printf("Informe a quantidade de pontos turísticos na cidade.\n");
   printf("Quantidade de Pontos Turísticos:");
   scanf("%d", &pontos_turisticos1); //O %d lê um número inteiro no formato decimal

   //Título para a entrada de dados da SEGUNDA carta 
   printf("\n                   * INFORME OS DADOS PARA A CARTA 2 *                         \n");
   printf("                     ***********************************                         \n");

   //Estado
   printf("Informe uma letra de 'A' a 'H' para o segundo estado.\n");
   printf("Estado:");
   scanf(" %c", &estado2);

   printf("\n"); //Para dividir os dados
   
   //Código
   printf("Informe a letra do estado mencionado anteriormente, seguida de um número de 01 a 04.\n");
   printf("Código:");
   scanf("%4s", codigo2);

   printf("\n"); //Para dividir os dados

   //Cidade
   printf("Informe o nome da segunda cidade.\n");
   printf("Cidade:");
   scanf("%s", cidade2);

   printf("\n"); //Para dividir os dados

   //População
   printf("Informe o número de habitantes da cidade.\n");
   printf("População:");
   scanf("%lu", &populacao2);

   printf("\n"); //Para dividir os dados

   //Área
   printf("Informe a área em quilômetros quadrados (km²).\n");
   printf("Área:");
   scanf("%f", &area2);

   printf("\n"); //Para dividir os dados

   //PIB
   printf("Informe o Produto Interno Bruto da cidade (PIB).\n");
   printf("PIB:");
   scanf("%f", &pib2);

   printf("\n"); //Para dividir os dados

   //Pontos Turísticos
   printf("Informe a quantidade de pontos turísticos na cidade.\n");
   printf("Quantidade de Pontos Turísticos:");
   scanf("%d", &pontos_turisticos2);

   printf("\n"); //Para dividir os dados

   //Impressão dos dados da carta 1
   printf("\n                     *            CARTA 01             *                       \n");
   printf("                       ***********************************                       \n");

   //Cálculo da densidade populacional por meio da divisão da população pela área
   float densidade_populacional1 = (float) populacao1 / area1; 

   //Cálculo do pib per capita por meio da divisão do pib pela população
   float pibpercapita1 = (pib1 * 1000000000) / (float) populacao1;

   //Cálculo do super poder através da soma dos atributos numéricos 
   float superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pibpercapita1 + (1/densidade_populacional1);

   printf("- Estado: %c\n", estado1);                                           //Imprime o estado
   printf("- Código:%4s\n", codigo1);                                           //Imprime o código
   printf("- Cidade: %s\n", cidade1);                                           //Imprime a cidade
   printf("- Populacação: %lu habitantes\n", populacao1);                       //Imprime a populaçao
   printf("- Área: %.2f km²\n", area1);                                         //Imprime a área
   printf("- PIB: %.2f bilhões de reais\n", pib1);                              //Imprime o pib
   printf("- Pontos Turísticos: %d\n", pontos_turisticos1);                     //Imprime os pontos turísticos
   printf("- Densidade Populacional: %.2f hab/km²\n", densidade_populacional1); //Imprime a densidade populacional
   printf("- PIB per Capita: %.2f reais\n", pibpercapita1);                     //Imprime o pib per capita
   printf("- Super Poder: %.2f\n", superpoder1);                                //Imprime o super poder

   //Impressão dos dados da carta 2
   printf("\n                     *            CARTA 02             *                       \n");
   printf("                       ***********************************                       \n");

   //Cálculo da densidade populacional por meio da divisão da população pela área
   float densidade_populacional2 = (float) populacao2 / area2;

   //Cálculo do pib per capita por meio da divisão do pib pela população
   float pibpercapita2 = (pib2 * 1000000000) / (float) populacao2;

   //Cálculo do super poder através da soma dos atributos numéricos 
   float superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pibpercapita2 + (1/densidade_populacional2);

   printf("- Estado: %c\n", estado2);                                           //Imprime o estado
   printf("- Código:%4s\n", codigo2);                                           //Imprime o código
   printf("- Cidade: %s\n", cidade2);                                           //Imprime a cidade
   printf("- Populacação: %lu habitantes\n", populacao2);                       //Imprime a população
   printf("- Área: %.2f km²\n", area2);                                         //Imprime a área
   printf("- PIB: %.2f bilhões de reais\n", pib2);                              //Imprime o pib
   printf("- Pontos Turísticos: %d\n", pontos_turisticos2);                     //Imprime os pontos turísticos
   printf("- Densidade Populacional: %.2f hab/km²\n", densidade_populacional2); //Imprime a densidade populacional
   printf("- PIB per Capita: %.2f reais\n", pibpercapita2);                     //Imprime o pib per capita
   printf("- Super Poder: %.2f\n", superpoder2);                                //Imprime o super poder

   //Comparações das cartas através dos atributos escolhidas do jogador 
   printf("\n                     *      COMPARAÇÃO DAS CARTAS      *                         \n");
   printf("                       ***********************************                         \n");

   int opcao1, opcao2;
   int resultado1, resultado2;

   //Menu interativo: Opção 01
   printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
   printf("******************************************\n");
   printf(" 1. População\n");
   printf(" 2. Área\n");
   printf(" 3. PIB\n");
   printf(" 4. Pontos Turísticos\n");
   printf(" 5. Densidade Populacional (O menor vence)\n");
   printf(" 6. PIB per Capita\n");
   printf(" 7. Super Poder\n");
   printf("\nDigite a sua escolha (entre 1 e 7):");
   scanf("%d", &opcao1);
   
   printf("\n"); //Para dividir os dados

   switch (opcao1)
   {
   case 1: //A maior população vence 
       printf("POPULAÇÃO\n");
       printf("*********\n");
       printf("Carta 1 - %s: %lu habitantes\n", cidade1, populacao1);
       printf("Carta 2 - %s: %lu habitantes\n", cidade2, populacao2);
       resultado1 = populacao1 > populacao2 ? 1 : 0;
       break;
    case 2: //A maior área vence
       printf("ÁREA\n");
       printf("****\n");
       printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
       printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
       resultado1 = area1 > area2 ? 1 : 0;
       break;
    case 3: //O maior PIB vence
       printf("PIB\n");
       printf("***\n");
       printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
       printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);
       resultado1 = pib1 > pib2 ? 1 : 0;
       break;
    case 4: //O maior quantidade de pontos turísticos vence
       printf("PONTOS TURÍSTICOS\n");
       printf("*****************\n");
       printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
       printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
       resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0; 
       break;
    case 5: //A menor desnidade populacional vence
       printf("DENSIDADE POPULACIONAL\n");
       printf("**********************\n");
       printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional1);
       printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional2);
       printf("Obs: O menor vence.\n");
       resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
       break;
    case 6: //O maior pib per capita vence
      printf("PIB PER CAPITA\n");
      printf("**************\n");
      printf("Carta 1 - %s: %.2f reais\n", cidade1, pibpercapita1);
      printf("Carta 2 - %s: %.2f reais\n", cidade2, pibpercapita2);
      resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
      break;
    case 7: //O maior super poder vence
      printf("SUPER PODER\n");
      printf("***********\n");
      printf("Carta 1 - %s: %.2f\n", cidade1, superpoder1);
      printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
      resultado1 = superpoder1 > superpoder2 ? 1 : 0;
       break;
   default: //Opção inválida 
       printf("Opção inválida.");
    break;
   }

//Menu interativo: Opção 02
printf("\nEscolha o SEGUNDO atributo para comparar:\n");
printf("*****************************************\n");
printf(" 1. População\n");
printf(" 2. Área\n");
printf(" 3. PIB\n");
printf(" 4. Pontos Turísticos\n");
printf(" 5. Densidade Populacional (O menor vence)\n");
printf(" 6. PIB per Capita\n");
printf(" 7. Super Poder\n");
printf("\nDigite a sua escolha (entre 1 e 7):");
scanf("%d", &opcao2);

if (opcao1 == opcao2) 
{
  printf("\n# NÃO É PERMITIDO REPETIR O PRIMEIRO ATRIBUTO ESCOLHIDO #\n");
} else { 
  
switch (opcao2)
{
case 1: //A maior população vence 
    printf("POPULAÇÃO\n");
    printf("*********\n");
    printf("Carta 1 - %s: %lu habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu habitantes\n", cidade2, populacao2);
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
 case 2: //A maior área vence
    printf("ÁREA\n");
    printf("****\n");
    printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
    resultado2 = area1 > area2 ? 1 : 0;
    break;
 case 3: //O maior PIB vence
    printf("PIB\n");
    printf("***\n");
    printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, pib1);
    printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, pib2);
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;
 case 4: //O maior quantidade de pontos turísticos vence
    printf("PONTOS TURÍSTICOS\n");
    printf("*****************\n");
    printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
    resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0; 
    break;
 case 5: //A menor desnidade populacional vence
    printf("DENSIDADE POPULACIONAL\n");
    printf("**********************\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional1);
    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional2);
    printf("Obs: O menor vence.\n");
    resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    break;
 case 6: //O maior pib per capita vence
   printf("PIB PER CAPITA\n");
   printf("**************\n");
   printf("Carta 1 - %s: %.2f reais\n", cidade1, pibpercapita1);
   printf("Carta 2 - %s: %.2f reais\n", cidade2, pibpercapita2);
   resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
   break;
 case 7: //O maior super poder vence
   printf("SUPER PODER\n");
   printf("***********\n");
   printf("Carta 1 - %s: %.2f\n", cidade1, superpoder1);
   printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
   resultado2 = superpoder1 > superpoder2 ? 1 : 0;
    break;
default: //Opção inválida 
    printf("Opção inválida.");
 break;
}
}
//Resultado da comparação dos atributos
printf("\n⚔️  RESULTADO DO DUELO DE COMPARAÇÃO ⚔️\n");
printf("***************************************\n");
if (resultado1 == 1 && resultado2 == 1) {
    printf("Carta 1 -> %s: VENCEU!!!", cidade1);
} else if (resultado1 == 0 && resultado2 == 0) {
    printf("Carta 2 -> %s: VENCEU!!!", cidade2);
} 

return 0;
}
