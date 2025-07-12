#include <stdio.h>

int main() {
    char estado, código[4], cidade[50];
    float área, pib;
    int população, PontosTurísticos;

    //Entrada de dados (CARTA 01):

    printf("Dados da Carta 01: \n");

    printf("\nEstado (Letra de A a H): ");
    scanf(" %c", &estado);                   //Estado

    printf("Código da Carta - A letra de um estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf("%s", código);                    //Códido da carta
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);                     //Nome da cidade

    printf("População: ");
    scanf("%d", &população);                 //População

    printf("Área (em km²): ");
    scanf("%f", &área);                      //Área

    printf("PIB: ");
    scanf("%f", &pib);                       //PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &PontosTurísticos);          //Números de pontos turísticos

    //Saída de dados (CARTA 01):

    printf("\nCarta 01: \n");

    printf("\nEstado: %c\n", estado);

    printf("Código: %s\n", código);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %d\n", população);

    printf("Área (em km²): %.2f km²\n", área);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Números de Pontos Turísticos: %d\n", PontosTurísticos);

    //Entrada de dados (CARTA 02):

    printf("\nDados da Carta 02: \n");

    printf("\nEstado (Letra de A a H): ");
    scanf(" %c", &estado);                   //Estado

    printf("Código da Carta - A letra de um estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf("%s", código);                    //Códido da carta
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);                     //Nome da cidade

    printf("População: ");
    scanf("%d", &população);                 //População

    printf("Área (em km²): ");
    scanf("%f", &área);                      //Área

    printf("PIB: ");
    scanf("%f", &pib);                       //PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &PontosTurísticos);          //Números de pontos turísticos

    //Saída de dados (CARTA 02):

    printf("\nCarta 02: \n");

    printf("\nEstado: %c\n", estado);

    printf("Código: %s\n", código);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %d\n", população);

    printf("Área (em km²): %.2f km²\n", área);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Números de Pontos Turísticos: %d\n", PontosTurísticos);


    return 0;
}