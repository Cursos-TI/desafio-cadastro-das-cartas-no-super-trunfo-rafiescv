#include <stdio.h>

int main() {
    //Dados para a carta 1;
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

   //Dados para a carta 2;
   char estado2;
   char codigo2[4];
   char cidade2[50];
   unsigned long int populacao2;
   float area2;
   float pib2;
   int pontos_turisticos2;

   //Título inicial do desafio;
   printf("\n                   *       DESAFIO SUPER TRUNFO      *                         \n");
   printf("                     ***********************************                         \n");

   //Título da primeira carta;
   printf("\n                   * INFORME OS DADOS PARA A CARTA 1 *                         \n");
   printf("                     ***********************************                         \n");


   //Estado;
   printf("Informe uma letra de 'A' a 'H' para indicar o primeiro estado.\n");
   printf("Estado: ");
   scanf(" %c", &estado1);
   
   printf("\n"); //para dividir os dados;
   
   //Código;
   printf("Informe a letra do estado mencionado anteriormente, seguida de um número de 01 a 04.\n");
   printf("Código:");
   scanf("%4s", codigo1);

   printf("\n");

   //Cidade;
   printf("Informe o nome da primera cidade.\n");
   printf("Cidade:");
   scanf("%s", cidade1);

   printf("\n");

   //População;
   printf("Informe o número de habitantes da cidade.\n");
   printf("População:");
   scanf("%lu", &populacao1);

   printf("\n");

   //Área;
   printf("Informe a área em quilômetros quadrados (km²).\n");
   printf("Área:");
   scanf("%f", &area1);

   printf("\n");

   //PIB;
   printf("Informe o Produto Interno Bruto da cidade (PIB).\n");
   printf("PIB:");
   scanf("%f", &pib1);

   printf("\n");

   //Pontos Turísticos;
   printf("Informe a quantidade de pontos turísticos na cidade.\n");
   printf("Quantidade de Pontos Turísticos:");
   scanf("%d", &pontos_turisticos1);

   printf("\n                   * INFORME OS DADOS PARA A CARTA 2 *                         \n");
   printf("                     ***********************************                         \n");

   //Estado;
   printf("Informe uma letra de 'A' a 'H' para o segundo estado.\n");
   printf("Estado:");
   scanf(" %c", &estado2);

   printf("\n");
   
   //Código;
   printf("Informe a letra do estado mencionado anteriormente, seguida de um número de 01 a 04.\n");
   printf("Código:");
   scanf("%4s", codigo2);

   printf("\n");

   //Cidade;
   printf("Informe o nome da segunda cidade.\n");
   printf("Cidade:");
   scanf("%s", cidade2);

   printf("\n");

   //População;
   printf("Informe o número de habitantes da cidade.\n");
   printf("População:");
   scanf("%lu", &populacao2);

   printf("\n");

   //Área;
   printf("Informe a área em quilômetros quadrados (km²).\n");
   printf("Área:");
   scanf("%f", &area2);

   printf("\n");

   //PIB;
   printf("Informe o Produto Interno Bruto da cidade (PIB).\n");
   printf("PIB:");
   scanf("%f", &pib2);

   printf("\n");

   //Pontos Turísticos;
   printf("Informe a quantidade de pontos turísticos na cidade.\n");
   printf("Quantidade de Pontos Turísticos:");
   scanf("%d", &pontos_turisticos2);

   printf("\n");

   //Impressão das cartas;
   printf("\n                     *            CARTA 01             *                       \n");
   printf("                       ***********************************                       \n");


   //Cálculo da densidade populacional por meio da divisão da população pela área;
   float densidade_populacional1 = (float) populacao1 / area1;

   //Cálculo do pib per capita por meio da divisão do pib pela população;
   float pibpercapita1 = (pib1 * 1000000000) / (float) populacao1;

   //Inverso e soma;
   float superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pibpercapita1 + (1/densidade_populacional1);

   printf("- Estado: %c\n", estado1);
   printf("- Código:%4s\n", codigo1);
   printf("- Cidade: %s\n", cidade1);
   printf("- Populacação: %lu habitantes\n", populacao1);
   printf("- Área: %.2f km²\n", area1);
   printf("- PIB: %.2f bilhões de reais\n", pib1);
   printf("- Pontos Turísticos: %d\n", pontos_turisticos1);
   printf("- Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
   printf("- PIB per Capita: %.2f reais\n", pibpercapita1);
   printf("- Super Poder: %.2f\n", superpoder1);


   printf("\n                     *            CARTA 02             *                       \n");
   printf("                       ***********************************                       \n");

   //Cálculo da densidade populacional por meio da divisão da população pela área;
   float densidade_populacional2 = (float) populacao2 / area2;

   //Cálculo do pib per capita por meio da divisão do pib pela população;
   float pibpercapita2 = (pib2 * 1000000000) / (float) populacao2;

   //Inverso e soma;
   float superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pibpercapita2 + (1/densidade_populacional2);

   printf("- Estado: %c\n", estado2);
   printf("- Código:%4s\n", codigo2);
   printf("- Cidade: %s\n", cidade2);
   printf("- Populacação: %lu habitantes\n", populacao2);
   printf("- Área: %.2f km²\n", area2);
   printf("- PIB: %.2f bilhões de reais\n", pib2);
   printf("- Pontos Turísticos: %d\n", pontos_turisticos2);
   printf("- Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
   printf("- PIB per Capita: %.2f reais\n", pibpercapita2);
   printf("- Super Poder: %.2f\n", superpoder2);

   printf("\n                     *      COMPARAÇÃO DAS CARTAS      *                         \n");
   printf("                       ***********************************                         \n");


   int opcao; 

   printf("\nEscolha o PRIMEIRO para comparar:\n");
   printf(" 1. População\n 2. Área\n 3. PIB\n 4. Pontos Turísticos\n 5. Densidade Populacional\n");
   printf("\nDigite a sua escolha:");
   scanf("%d", &opcao);

   switch (opcao) {
   case 1: 
    printf("\nPOPULAÇÃO\n");
    printf("*********\n");
    printf("- Cidade %s: %lu habitantes\n", cidade1, populacao1);
    printf("- Cidade %s: %lu habitantes\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
       printf("- Parabéns, %s! Você ganhou.\n", cidade1);
    } else if (populacao2 > populacao1) {
       printf("- Parabéns, %s! Você ganhou.\n", cidade2);
    } else {
       printf("# Empate! Ninguém levou a melhor. #\n");
    }
    break;
   case 2: 
    printf("\nÁREA\n");
    printf("****\n");
    printf("- Cidade %s: %.2f km²\n", cidade1, area1);
    printf("- Cidade %s: %.2f km²\n", cidade2, area2);

    if (area1 > area2) {
        printf("- Parabéns, %s! Você ganhou.\n", cidade1);
    } else if (area2 > area1) { 
        printf("- Parabéns, %s! Você ganhou.\n", cidade2);
    } else {
        printf("# Empate! Ninguém levou a melhor. #\n");
    }
    break;
    default:
       printf("Opção inválida. Tente novamente.\n");
    break;
   }
   

  
    
   return 0;
}
