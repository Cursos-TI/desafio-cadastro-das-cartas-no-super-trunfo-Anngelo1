#include <stdio.h>

int main(){
    char estado1 [50], estado2[50]; // Letra inicial do estado ex: A,B,C,H
    char CodigodaCidade1[50], CodigodaCidade2[50]; // Codigo da cidade seguido de um numero ex: 01, 02, 03 
    char Cidade1[50], Cidade2[50]; // Nome da cidade
    int Populacao1, Populacao2; // População da cidade
    float Area1, Area2; // Área em km²
    float PIB1, PIB2; // Produto interno bruto da cidade
    int PontosTuristicos1, PontosTuristicos2; // Quantidade de pontos turisticos da cidade
    float DensidadePopulacional1, DensidadePopulacional2; // Representa o número de habitantes por quilômetro quadrado
    float PibPerCapita1, PibPerCapita2; // Indica a riqueza média por pessoa na cidade
    float SuperPoder1, SuperPoder2; // é a soma de todas as caracteristicas da carta

    // Carta 1
    printf("Digite a Sigla do estado: ");
    scanf("%s", estado1);

    printf("Código da carta (Ex: 01, 02): \n"); 
    scanf("%s", CodigodaCidade1);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", Cidade1);

    printf("População da cidade: \n");
    scanf("%d", &Populacao1);

    printf("Área da cidade em km²: \n");
    scanf("%f", &Area1);

    printf("PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos1);
    

    printf("Código da Cidade: %s \n", CodigodaCidade1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População da cidade: %d \n", Populacao1);
    printf("Área da cidade em km²: %f \n", Area1);
    printf("PIB da cidade: %f \n", PIB1);
    printf("Quantidade de Pontos Turisticos: %d \n", PontosTuristicos1);

    DensidadePopulacional1 = (float) Populacao1 / Area1;

    printf("Densidade Populacional: %f\n", DensidadePopulacional1);

    PibPerCapita1 = (float) PIB1 / Populacao1;

    printf("Pib Per Capita: %f\n", PibPerCapita1);

    SuperPoder1 = (float) Populacao1 + Area1 + PIB1 +PontosTuristicos1;

    printf("Super Poder: %f\n", SuperPoder1);
    printf("\n_______________________________________\n");

    // Carta 2
    printf("Digite a Sigla do estado: ");
    scanf("%s", estado2);

    printf("Código da carta (Ex: A01, A02): \n"); 
    scanf("%s", CodigodaCidade2);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", Cidade2);

    printf("População da cidade: \n");
    scanf("%d", &Populacao2);

    printf("Área da cidade em km²: \n");
    scanf("%f", &Area2);

    printf("PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos2);
    
    
    printf("Código da Carta: %s \n", CodigodaCidade2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População da cidade: %d \n", Populacao2);
    printf("Área da cidade em km²: %f \n", Area2);
    printf("PIB da cidade: %f \n", PIB2);
    printf("Quantidade de Pontos Turisticos: %d \n", PontosTuristicos2);

    DensidadePopulacional2 = (float) Populacao2 / Area2;

    printf("Densidade Populacional: %f\n", DensidadePopulacional2);

    PibPerCapita2 = (float) PIB2 / Populacao2;

    printf("Pib Per Capita: %f\n", PibPerCapita2);

    SuperPoder2 = (float) Populacao2 + Area2 + PIB2 +PontosTuristicos2;

    printf("Super Poder: %f\n", SuperPoder2);
    
    printf("\n_______________________________________\n");

   // COMPARAÇÃO DE ATRIBUTOS
   printf("Comparação das Cartas\n");
   printf("Carta 1: 2 --- Carta 2: 2 \n");
   printf("População: %d\n", (Populacao1 > Populacao2) ? 1 : 2);
   printf("Área: %d\n", (Area1 > Area2) ? 1 : 2);
   printf("PIB: %d\n", (PIB1 > PIB2) ? 1 : 2);
   printf("Quantidade de Pontos Turisticos: %d\n", (PontosTuristicos1 > PontosTuristicos2) ? 1 : 2);
   printf("Densidade Populacional: %d (vence a menor)\n", (DensidadePopulacional1 < DensidadePopulacional2) ? 1 : 2);
   printf("Pib per capita: %d\n", (PibPerCapita1 > PibPerCapita2)  ? 1 : 2);
   printf ("Super Poder: %d\n", (SuperPoder1 > SuperPoder2)  ? 1 : 2);








    return 0;








}
