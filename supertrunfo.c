#include <stdio.h>

int main(){
    char Estado; // Nome do estado representado por uma letra de "A" a "H"
    char Codigo[4]; // Letra inicial do estado seguido de um numero ex: A01, A02, A03 
    char Cidade [50]; // Nome da cidade
    int Populacao; // População da cidade
    float Area; // Área em km²
    float PIB; // Produto interno bruto da cidade
    int PontosTuristicos; // Quantidade de pontos turisticos da cidade
    float DensidadePopulacional; // Representa o número de habitantes por quilômetro quadrado
    float PibPerCapita; // Indica a riqueza média por pessoa na cidade
    
    printf("Estado (Letra de 'A' a 'H'): \n");
    scanf("%c", &Estado);

    printf("Código da carta (Ex: A01, A02): \n"); 
    scanf("%s", Codigo);

    printf("Nome da cidade (Sem espaços): \n");
    scanf("%s", Cidade);

    printf("População da cidade: \n");
    scanf("%d", &Populacao);

    printf("Área da cidade em km²: \n");
    scanf("%f", &Area);

    printf("PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos);
    

    printf("Nome do Estado: %c \n", Estado);
    printf("Código da Carta: %s \n", Codigo);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("População da cidade: %d \n", Populacao);
    printf("Área da cidade em km²: %f \n", Area);
    printf("PIB da cidade: %f \n", PIB);
    printf("Quantidade de Pontos Turisticos: %d \n", PontosTuristicos);

    DensidadePopulacional = (float) Populacao / Area;

    printf("DensidadePopulacional: %f\n", DensidadePopulacional);

    PibPerCapita = (float) PIB / Populacao;

    printf("PibPerCapita: %f", PibPerCapita);


    




    return 0;

























}