#include <stdio.h>

int main(){
    int opcao;

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

    //menu inicial
    printf("----------------------\n");
    printf("Adicionando cartas ...\n");
    printf("----------------------\n");

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

    printf("----------------------\n");
    printf("1. Exibir nome do Estado.\n");
    printf("2. Populacao.\n");
    printf("3. Area.\n");
    printf("4. PIB.\n");
    printf("5. Numero de pontos turisticos.\n");
    printf("6. Densidade demografica.\n");
    printf("----------------------\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    printf("----------------------\n");

    switch (opcao) {
    case 1: //apenas para exibir o nome do país.
        printf("Nome do Estado das cartas: \n");
        printf("Carta 01: %c\n", estado_01);
        printf("Carta 02: %c\n", estado_02);
        break;
    case 2: //população
        if (populacao_01 > populacao_02) {
            printf("--- Atributo Escolhido: Populacao ---\n");
            printf("Carta 01: %d\n", area_01);
            printf("Carta 02: %d\n", area_02);
            printf("Carta 01 possui o Atributo Populacao maior que Carta 02. Carta 01 VENCEU!\n");
        } else if (populacao_01 < populacao_02){
            printf("--- Atributo Escolhido: Populacao ---\n");
            printf("Carta 01: %d\n", populacao_01);
            printf("Carta 02: %d\n", populacao_02);
            printf("Carta 02 possui o Atributo Populacao maior que Carta 01. Carta 02 VENCEU!\n");
        } else {
            printf("Empate!");
        }
        break;
    case 3: //Área
        if (area_01 > area_02){
            printf("--- Atributo Escolhido: Area ---\n");
            printf("Carta 01: %.2f\n", area_01);
            printf("Carta 02: %.2f\n", area_02);
            printf("Carta 01 possui o Atributo Area maior que Carta 02. Carta 01 VENCEU!\n");
        } else if (area_01 < area_02) {
            printf("--- Atributo Escolhido: Area ---\n");
            printf("Carta 01: %.2f\n", area_01);
            printf("Carta 02: %.2f\n", area_02);
            printf("Carta 02 possui o Atributo Area maior que Carta 01. Carta 02 VENCEU!\n");
        } else {
            printf("Empate!");
        }
        break;
    case 4: //PIB
        if (pib_01 > pib_02){
            printf("--- Atributo Escolhido: PIB ---\n");
            printf("Carta 01: %.2f\n", pib_01);
            printf("Carta 02: %.2f\n", pib_02);
            printf("Carta 01 possui o Atributo PIB maior que Carta 02. Carta 01 VENCEU!\n");
        } else if (pib_01 < pib_02) {
            printf("--- Atributo Escolhido: PIB ---\n");
            printf("Carta 01: %.2f\n", pib_01);
            printf("Carta 02: %.2f", pib_02);
            printf("Carta 02 possui o Atributo PIB maior que Carta 01. Carta 02 VENCEU!\n");
        } else {
            printf("Empate!");
        }
        break;
    case 5: //numeros de pontos turisticos
        if (pontosTuristicos_01 > pontosTuristicos_02){
            printf("--- Atributo Escolhido: Pontos Turisticos ---\n");
            printf("Carta 01: %d\n", pontosTuristicos_01);
            printf("Carta 02: %d\n", pontosTuristicos_02);
            printf("Carta 01 possui o Atributo Pontos Turisticos maior que Carta 02. Carta 01 VENCEU!\n");
        } else if (pontosTuristicos_01 < pontosTuristicos_02) {
            printf("--- Atributo Escolhido: Area ---\n");
            printf("Carta 01: %d\n", pontosTuristicos_01);
            printf("Carta 02: %d\n", pontosTuristicos_02);
            printf("Carta 02 possui o Atributo Pontos Turisticos maior que Carta 01. Carta 02 VENCEU!\n");
        } else {
            printf("Empate!");
        }
        break;
    case 6: //Densidade demografica
        if (densidadePop_01 < densidadePop_02){
            printf("--- Atributo Escolhido: Densidade demografica ---\n");
            printf("Carta 01: %.2f\n", densidadePop_01);
            printf("Carta 02: %.2f\n", densidadePop_02);
            printf("Carta 01 possui o Atributo Densidade demografica menor que Carta 02. Carta 01 VENCEU!\n");
        } else if (densidadePop_01 > densidadePop_02) {
            printf("--- Atributo Escolhido: PIB ---\n");
            printf("Carta 01: %.2f\n", densidadePop_01);
            printf("Carta 02: %.2f", densidadePop_02);
            printf("Carta 02 possui o Atributo Densidade demografica menor que Carta 01. Carta 02 VENCEU!\n");
        } else {
            printf("Empate!");
        }
    
    default:
            printf("Opcao invalida!");
        break;
    }

    return 0;
}