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
    unsigned long int super_poder_carta_01;

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
    unsigned long int super_poder_carta_02;

    //variaveis de comparação
    unsigned long int resultado_carta_01;
    unsigned long int resultado_carta_02;


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

    //calculo super poder
    super_poder_carta_01 = (unsigned long long ) populacao_01 + area_01 + pib_01 + pontosTuristicos_01 + pibPerCapita_01 + (1 / densidadePop_01);
    super_poder_carta_02 = (unsigned long long ) populacao_02 + area_02 + pib_02 + pontosTuristicos_02 + pibPerCapita_02 + (1 / densidadePop_02);

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
    printf("Super poder: %u\n", super_poder_carta_01);

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
    printf("Super poder: %u\n", super_poder_carta_02);

    //comparando cartas
    /*printf("\n--- COMPARANDO CARTAS !!! ---");
    printf(" (0 = falso / 1 = verdade)\n");
    printf("Populacao da Carta 01 é maior que populacao da Carta 02: %u\n", populacao_01 > populacao_02);
    printf("Area da Carta 01 é maior que a area da Carta 02: %u\n", area_01 > area_02);
    printf("PIB da Carta 01 é menor que o PIB da Carta 02: %u\n", pib_01 < pib_02);
    printf("Numero de Pontos Turisticos da Carta 01 é igual ao numero de pontos turisticos da Carta 02: %u\n", pontosTuristicos_01 == pontosTuristicos_02);
    printf("Densidade Populacional da Carta 01 é menor que a densidade populacional da Carta 02: %u\n", densidadePop_01 < densidadePop_02);
    printf("PIB per capita da Carta 01 é menor que o PIB per capita da Carta 02: %u\n", pibPerCapita_01 < pibPerCapita_02);
    printf("Super poder da Carta 1 é maior do Super poder da Carta 02: %u\n", super_poder_carta_01 > super_poder_carta_02);*/

    printf("--- Comparação de cartas (Atributo: Populacao.) ---\n");
    printf("Carta 1 - %c (%s): %d.\n", estado_01, codigoCarta_01, populacao_01);
    printf("Carta 2 - %c (%s): %d.\n", estado_02, codigoCarta_02, populacao_02);
    if (populacao_01 > populacao_02){
        printf("Carta 1 - %c (%s) venceu!.\n", estado_01, codigoCarta_01);
    } else {
        printf("Carta 2 - %c (%s) venceu!.\n", estado_02, codigoCarta_02);
    }

    return 0;
}