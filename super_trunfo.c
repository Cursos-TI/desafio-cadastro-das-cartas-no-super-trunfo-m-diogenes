#include <stdio.h>

int main() {
    char estado, codigo[4], cidade[50];
    char carta01[20] = "Carta 01";
    char carta02[20] = "Carta 02";

    float area01, pib01, DensidadePopulacional01, pibPerCapita01, inverso01, superpoder01;
    float area02, pib02, DensidadePopulacional02, pibPerCapita02, inverso02, superpoder02;

    int PontosTuristicos01;
    int PontosTuristicos02;

    unsigned long int populacao01;
    unsigned long int populacao02;

    //Entrada de dados (CARTA 01):

    printf("Dados da Carta 01: \n");

    printf("\nEstado (Letra de A a H): ");
    scanf(" %c", &estado);                   //Estado

    printf("Código da Carta - A letra de um estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf("%s", &codigo);                    //Códido da carta
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);                     //Nome da cidade

    printf("População: ");
    scanf("%u", &populacao01);                 //População

    printf("Área (em km²): ");
    scanf("%f", &area01);                      //Área

    printf("PIB: ");
    scanf("%f", &pib01);                       //PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos01);          //Números de pontos turísticos

    DensidadePopulacional01 = populacao01 / area01;

    pibPerCapita01 = pib01 / populacao01;

    inverso01 = 1 / DensidadePopulacional01;    //Inverso da densidade populacional (quanto menor densidade, maior o poder)

    superpoder01 = (float)populacao01 + area01 + pib01 + (float)PontosTuristicos01 + pibPerCapita01 + inverso01;    //Super Poder

    //Saída de dados (CARTA 01):

    printf("\nCarta 01: \n");

    printf("\nEstado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %u\n", populacao01);

    printf("Área (em km²): %.2f km²\n", area01);

    printf("PIB: %.2f bilhões de reais\n", pib01);

    printf("Números de Pontos Turísticos: %d\n", PontosTuristicos01);

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional01);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita01);

    //Entrada de dados (CARTA 02):

    printf("\nDados da Carta 02: \n");

    printf("\nEstado (Letra de A a H): ");
    scanf(" %c", &estado);                   //Estado

    printf("Código da Carta - A letra de um estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf("%s", &codigo);                    //Códido da carta
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);                     //Nome da cidade

    printf("População: ");
    scanf("%u", &populacao02);                 //População

    printf("Área (em km²): ");
    scanf("%f", &area02);                      //Área

    printf("PIB: ");
    scanf("%f", &pib02);                       //PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos02);          //Números de pontos turísticos

    DensidadePopulacional02 = populacao02 / area02;     //Cálculo da Densidade Populacional

    pibPerCapita02 = pib02 / populacao02;              //Cálculo do PIB per Capita

    inverso02 = 1 / DensidadePopulacional02;           //Inverso da densidade populacional (quanto menor densidade, maior o poder)

    superpoder02 = (float)populacao02 + area02 + pib02 + (float)PontosTuristicos02 + pibPerCapita02 + inverso02;         //Super Poder

    //Saída de dados (CARTA 02):

    printf("\nCarta 02: \n");

    printf("\nEstado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %u\n", populacao02);

    printf("Área (em km²): %.2f km²\n", area02);

    printf("PIB: %.2f bilhões de reais\n", pib02);

    printf("Números de Pontos Turísticos: %d\n", PontosTuristicos02);

    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional02);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita02);

    //Comparação de Cartas:
    
    printf("\nComparação das Cartas: \n");

    printf("\nPopulação: %s venceu (%d)\n", carta01, (populacao01 > populacao02));

    printf("Área: %s venceu (%d)\n", carta01, (area01 > area02));

    printf("PIB: %s venceu (%d)\n", carta01, (pib01 > pib02));

    printf("Pontos Turísticos: %s venceu (%d)\n", carta01, (PontosTuristicos01 > PontosTuristicos02));

    printf("Densidade Populacional: %s venceu (%d)\n", carta02, (DensidadePopulacional01 < DensidadePopulacional02));

    printf("PIB per Capita: %s venceu (%d)\n", carta01, (pibPerCapita01 > pibPerCapita02));

    printf("Super Poder: %s venceu (%d)", carta01, (superpoder01 > superpoder02));


    return 0;
}