#include <stdio.h>
int main(){


    //carta 1
    char estado1 [3];
    char codigo1 [30];
    char cidade1 [40];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;


    //carta 2
    char estado2 [3];
    char codigo2 [30];
    char cidade2 [40];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //entrada e saida da carta 1
    
    printf("Cadastro da Carta 1\n\n");

    printf("Digite o Estado: ");
    scanf("%2s", &estado1);
    printf("Estado: %2s\n\n", estado1);

    printf("Digite o codigo da Carta: ");
    scanf("%s", &codigo1);
    printf("Codigo da Carta 1: %s\n\n", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade1);
    printf("Nome da Cidade: %s\n\n", cidade1);

    printf("Digite o Numero de Habitantes: ");
    scanf("%d", &populacao1); //Não le os apos o ponto, dijitar o numero inuteiro.
    printf("Numero de Habitantes: %d\n\n", populacao1);

    printf("Digite a Area em (Km): ");
    scanf("%f", &area1);
    printf("Tamanho da Cidade: %.2f\n\n", area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("O PIB da cidade: %.2f\n\n", pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos1); //Não le os apos o ponto, dijitar o numero inuteiro.
    printf("Pontos Turisticos: %d\n\n", pontos1);

    //entrada e sainda da carta 2

    printf("Cadastro da Carta 2\n\n");

    printf("Digite o Estado: ");
    scanf("%2s", &estado2);
    printf("Estado: %2s\n\n", estado2);

    printf("Digite o codigo da Carta: ");
    scanf("%s", &codigo2);
    printf("Codigo da Carta 2: %s\n\n", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("Nome da Cidade: %s\n\n", cidade2);

    printf("Digite o Numero de Habitantes: ");
    scanf("%d", &populacao2); //Não le os apos o ponto, dijitar o numero inuteiro.
    printf("Numero de Habitantes: %d\n\n", populacao2);

    printf("Digite a Area (Km): ");
    scanf("%f", &area2);
    printf("Tamanho da Cidade: %.2f\n\n", area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("O PIB da cidade: %.2f\n\n", pib2);

    printf("Digite a quantidades de pontos turisticos: ");
    scanf("%d", &pontos2); //Não le os apos o ponto, dijitar o numero inuteiro.
    printf("Pontos Turisticos: %d\n\n", pontos2);

 



    return 0;


}