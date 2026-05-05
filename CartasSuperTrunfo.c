#include <stdio.h>

//variaveis da carta 01.
    char estado_01;
    char codigoCarta_01 [50];
    char nomeCidade_01 [50];
    int populacao_01;
    float area_01;
    float pib_01;
    int pontosTuristicos_01;

int main() {
//variaveis da carta 01.
    char estado_01;
    char codigoCarta_01 [50];
    char nomeCidade_01 [50];
    int populacao_01;
    float area_01;
    float pib_01;
    int pontosTuristicos_01;

    //variaveis carta 02
    char estado_02 [50];
    char codigoCarta_02 [50];
    char nomeCidade_02 [50];
    int populacao_02;
    float area_02;
    float pib_02;
    int pontosTuristicos_02;

    //Leitura carta 01
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%c", &estado_01);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta_01);

    printf("O nome da cidade: ");
    scanf("%", nomeCidade_01);

    printf("O número de habitantes da cidade: ");
    scanf("%d",&populacao_01);

    printf("Digite a área (em km²) da cidade em quilômetros quadrados: ");
    scanf("%f", &area_01);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib_01);

    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos_01);

    //Leitura carta 02
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%c", &estado_02);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta_02);

    printf("O nome da cidade: ");
    scanf("%", nomeCidade_02);

    printf("O número de habitantes da cidade: ");
    scanf("%d",&populacao_02);

    printf("Digite a área (em km²) da cidade em quilômetros quadrados: ");
    scanf("%f", &area_02);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib_02);

    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicos_02);

    //Mostrando a carta 01 para o usuario.
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado_02);
    printf("Código: %s\n", codigoCarta_02);
    printf("Nome da Cidade: %s\n", nomeCidade_02);
    printf("População: %d\n", populacao_02);
    printf("Área: %.f\n", area_02);
    printf("PIB: %.f\n", pib_02);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_02);

    //Mostrando a carta 02 para o usuario.
    printf("\n--- Carta 02 ---\n");
    printf("Estado: %c\n", estado_02);
    printf("Código: %s\n", codigoCarta_02);
    printf("Nome da Cidade: %s\n", nomeCidade_02);
    printf("População: %d\n", populacao_02);
    printf("Área: %.f\n", area_02);
    printf("PIB: %.f\n", pib_02);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos_02);

    return 0;
} 
