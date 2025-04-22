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
   printf("                     *       DESAFIO SUPER TRUNFO      *                         \n");
   printf("                     ***********************************                         \n");

   printf("\n"); //para dividir os dados e melhorar a visualização;
   
   printf("                     * INFORME OS DADOS PARA A CARTA 1 *                         \n"); //Título da primeira carta;
   printf("                     ***********************************                         \n");

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //Estado;
   printf("Informe uma letra de 'A' a 'H' para indicar o primeiro estado.\n");
   printf("Estado:");
   scanf(" %c", &estado1);

   printf("\n"); //para dividir os dados e melhorar a visualização;
   
   //Código;
   printf("Informe a letra do estado mencionado anteriormente, seguida de um número de 01 a 04.\n");
   printf("Código:");
   scanf("%4s", codigo1);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //Cidade;
   printf("Informe o nome da primera cidade.\n");
   printf("Cidade:");
   scanf("%s", cidade1);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //População;
   printf("Informe o número de habitantes da cidade.\n");
   printf("População:");
   scanf("%lu", &populacao1);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //Área;
   printf("Informe a área em quilômetros quadrados (km²).\n");
   printf("Área:");
   scanf("%f", &area1);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //PIB;
   printf("Informe o Produto Interno Bruto da cidade (PIB).\n");
   printf("PIB:");
   scanf("%f", &pib1);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //Pontos Turísticos;
   printf("Informe a quantidade de pontos turísticos na cidade.\n");
   printf("Quantidade de Pontos Turísticos:");
   scanf("%d", &pontos_turisticos1);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   printf("                     * INFORME OS DADOS PARA A CARTA 2 *                         \n");
   printf("                     ***********************************                         \n");

   printf("\n");

   //Estado;
   printf("Informe uma letra de 'A' a 'H' para o segundo estado.\n");
   printf("Estado:");
   scanf(" %c", &estado2);

   printf("\n"); //para dividir os dados e melhorar a visualização;
   
   //Código;
   printf("Informe a letra do estado mencionado anteriormente, seguida de um número de 01 a 04.\n");
   printf("Código:");
   scanf("%4s", codigo2);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //Cidade;
   printf("Informe o nome da segunda cidade.\n");
   printf("Cidade:");
   scanf("%s", cidade2);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //População;
   printf("Informe o número de habitantes da cidade.\n");
   printf("População:");
   scanf("%lu", &populacao2);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //Área;
   printf("Informe a área em quilômetros quadrados (km²).\n");
   printf("Área:");
   scanf("%f", &area2);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //PIB;
   printf("Informe o Produto Interno Bruto da cidade (PIB).\n");
   printf("PIB:");
   scanf("%f", &pib2);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //Pontos Turísticos;
   printf("Informe a quantidade de pontos turísticos na cidade.\n");
   printf("Quantidade de Pontos Turísticos:");
   scanf("%d", &pontos_turisticos2);

   printf("\n"); //para dividir os dados e melhorar a visualização;

   //Impressão das cartas;
   printf("* CARTA 1 *\n");
   printf("***********\n");

   printf("\n");

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
   printf(" - Super Poder: %.2f\n", superpoder1);

   printf("\n");

   printf("* CARTA 2 *\n");
   printf("***********\n");

   printf("\n");

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
   printf(" - Super Poder: %.2f\n", superpoder2);

   printf("\n");

   printf("* COMPARAÇÃO DAS CARTAS *\n");
   printf("*************************\n");

   printf("\n");

   //População;
    printf("* POPULAÇÃO *\n");
    if (populacao1 > populacao2) {
        printf("Carta 1: %s - %lu\n", populacao1);
    } else {
        printf("Carta 2: %s - %lu\n", populacao2);
        printf("Resultado: Carta %d venceu", populacao1 > populacao2);
    }

   




   //Área;
 
   //PIB;
   
   //Pontos Turísticos;
 
   //Densidade Populacional;
   
   //PIB per Capita;

   //Super Poder;
   

   printf("\n");
    
   return 0;
}
