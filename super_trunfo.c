#include <stdio.h>

int main() {
    char estado, codigo[4], cidade[50];
    float area, pib, DensidadePopulacional, pibPerCapita;
    int populacao, PontosTuristicos;

    //Entrada de dados (CARTA 01):

    printf("Dados da Carta 01: \n");

    printf("\nEstado (Letra de A a H): ");
    scanf(" %c", &estado);                   //Estado

    printf("Código da Carta - A letra de um estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf("%s", &codigo);                    //Códido da carta
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);                     //Nome da cidade

    printf("População: ");
    scanf("%d", &populacao);                 //População

    printf("Área (em km²): ");
    scanf("%f", &area);                      //Área

    printf("PIB: ");
    scanf("%f", &pib);                       //PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos);          //Números de pontos turísticos

    DensidadePopulacional = populacao / area;

    pibPerCapita = pib / populacao;

    //Saída de dados (CARTA 01):

    printf("\nCarta 01: \n");

    printf("\nEstado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("Área (em km²): %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Números de Pontos Turísticos: %d\n", PontosTuristicos);

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    //Entrada de dados (CARTA 02):

    printf("\nDados da Carta 02: \n");

    printf("\nEstado (Letra de A a H): ");
    scanf(" %c", &estado);                   //Estado

    printf("Código da Carta - A letra de um estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf("%s", &codigo);                    //Códido da carta
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);                     //Nome da cidade

    printf("População: ");
    scanf("%d", &populacao);                 //População

    printf("Área (em km²): ");
    scanf("%f", &area);                      //Área

    printf("PIB: ");
    scanf("%f", &pib);                       //PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos);          //Números de pontos turísticos

    DensidadePopulacional = populacao / area;     //Cálculo da Densidade Populacional

    pibPerCapita = pib / populacao;              //Cálculo do PIB per Capita

    //Saída de dados (CARTA 02):

    printf("\nCarta 02: \n");

    printf("\nEstado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("Área (em km²): %.2f km²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Números de Pontos Turísticos: %d\n", PontosTuristicos);

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita);


    return 0;
}