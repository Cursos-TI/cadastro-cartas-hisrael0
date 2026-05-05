#include <stdio.h>

int main(){
    //variaveis da carta 01.
    char estado_01;
    char codigoCarta_01 [50];
    char nomeCidade_01 [50];
    int populacao_01;
    float area_01;
    float pib_01;
    int pontosTuristicos_01;
    float densidadePop_01;
    float pibPerCapita_01;

    //variaveis carta 02
    char estado_02;
    char codigoCarta_02 [50];
    char nomeCidade_02 [50];
    int populacao_02;
    float area_02;
    float pib_02;
    int pontosTuristicos_02;
    float densidadePop_02;
    float pibPerCapita_02;

    //Leitura carta 01
    printf("--- CARTA 01 ---\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado_01);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta_01);

    printf("O nome da cidade: ");
    scanf("%s", nomeCidade_01);

    printf("O numero de habitantes da cidade: ");
    scanf("%d", &populacao_01);

    printf("Digite a area (em km2) da cidade em quilometros quadrados: ");
    scanf("%f", &area_01);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib_01);

    printf("A quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontosTuristicos_01);

    //Leitura carta 02
    printf("--- CARTA 02 ---\n");
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado_02);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta_02);

    printf("O nome da cidade: ");
    scanf("%s", nomeCidade_02);

    printf("O numero de habitantes da cidade: ");
    scanf("%d", &populacao_02);

    printf("Digite a area (em km2) da cidade em quilometros quadrados: ");
    scanf("%f", &area_02);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib_02);

    printf("A quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontosTuristicos_02);

    //calculo da densidade populacional e PIB per capita - carta 01
    densidadePop_01 = populacao_01 / area_01;
    pibPerCapita_01 = pib_01 / populacao_01;

    //calculo da densidade populacional e PIB per capita - carta 01
    densidadePop_02 = populacao_02 / area_02;
    pibPerCapita_02 = pib_02 / populacao_02;

    //Mostrando a carta 01 para o usuario.
    printf("\n--- INFORMACOES CARTA 01 ---\n");
    printf("Estado: %c\n", estado_01);
    printf("Código: %s\n", codigoCarta_01);
    printf("Nome da Cidade: %s\n", nomeCidade_01);
    printf("População: %d\n", populacao_01);
    printf("Área: %.2f\n", area_01);
    printf("PIB: %.2f\n", pib_01);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_01);
    printf("Densidade Populacional: %.2f\n", densidadePop_01);
    printf("PIB per capita: %.2f", pibPerCapita_01);

    //Mostrando a carta 02 para o usuario.
    printf("\n--- INFORMACOES CARTA 02 ---\n");
    printf("Estado: %c\n", estado_02);
    printf("Codigo: %s\n", codigoCarta_02);
    printf("Nome da Cidade: %s\n", nomeCidade_02);
    printf("Populacao: %d\n", populacao_02);
    printf("Area: %.2f\n", area_02);
    printf("PIB: %.2f\n", pib_02);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos_02);
    printf("Densidade Populacional: %.2f\n", densidadePop_02);
    printf("PIB per capita: %.2f", pibPerCapita_02);

    return 0;
}