#include <stdio.h>

int main() {
    char estado01, codigo01[4], cidade01[50], carta01[20] = "Carta 01";
    char estado02, codigo02[4], cidade02[50], carta02[20] = "Carta 02";

    float area01, pib01, DensidadePopulacional01, pibPerCapita01, inverso01, superpoder01;
    float area02, pib02, DensidadePopulacional02, pibPerCapita02, inverso02, superpoder02;

    int PontosTuristicos01;
    int PontosTuristicos02;

    int escolhaJogador;

    unsigned long int populacao01;
    unsigned long int populacao02;

    printf("=== Jogo Super Trunfo! ===\n");

    //Entrada de dados (CARTA 01):

    printf("\nDados da Carta 01: \n");

    printf("\nEstado (Letra de A a H): ");
    scanf(" %c", &estado01);                   //Estado

    printf("Código da Carta - A letra de um estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf("%s", codigo01);                    //Códido da carta
    
    printf("Nome da cidade: ");
    scanf("%s", cidade01);                     //Nome da cidade

    printf("População: ");
    scanf("%lu", &populacao01);                 //População

    printf("Área (em km²): ");
    scanf("%f", &area01);                      //Área

    printf("PIB: ");
    scanf("%f", &pib01);                       //PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos01);          //Números de pontos turísticos

    DensidadePopulacional01 = populacao01 / area01;

    pibPerCapita01 = (pib01 * 1000000000.0f) / populacao01;

    inverso01 = 1 / DensidadePopulacional01;    //Inverso da densidade populacional (quanto menor densidade, maior o poder)

    superpoder01 = (float)populacao01 + area01 + pib01 + (float)PontosTuristicos01 + pibPerCapita01 + inverso01;    //Super Poder

    //Entrada de dados (CARTA 02):

    printf("\nDados da Carta 02: \n");

    printf("\nEstado (Letra de A a H): ");
    scanf(" %c", &estado02);                   //Estado

    printf("Código da Carta - A letra de um estado seguida de um número de 01 a 04 (ex:A01, B03): ");
    scanf("%s", codigo02);                    //Códido da carta
    
    printf("Nome da cidade: ");
    scanf("%s", cidade02);                     //Nome da cidade

    printf("População: ");
    scanf("%lu", &populacao02);                 //População

    printf("Área (em km²): ");
    scanf("%f", &area02);                      //Área

    printf("PIB: ");
    scanf("%f", &pib02);                       //PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos02);          //Números de pontos turísticos

    DensidadePopulacional02 = populacao02 / area02;     //Cálculo da Densidade Populacional

    pibPerCapita02 = (pib02 * 1000000000.0f) / populacao02;              //Cálculo do PIB per Capita

    inverso02 = 1 / DensidadePopulacional02;           //Inverso da densidade populacional (quanto menor densidade, maior o poder)

    superpoder02 = (float)populacao02 + area02 + pib02 + (float)PontosTuristicos02 + pibPerCapita02 + inverso02;         //Super Poder

    //Comparação de Cartas:
    
    printf("\nEscolha uma opção para comparar atributos ou ver informações das cartas:\n");
    printf("\n1. Informações da (Carta 01)\n");
    printf("2. Informações da (Carta 02)\n");
    printf("3. Atributo: População\n");
    printf("4. Atributo: Área\n");
    printf("5. Atributo: PIB\n");
    printf("6. Atributo: Pontos Turísticos\n");
    printf("7. Atributo: Densidade Populacional\n");
    printf("8. Atributo: PIB per Capita\n");
    printf("9. Atributo: Super Poder\n");
    printf("\nEscolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) {
        case 1:
        
         //Saída de dados (CARTA 01):

        printf("\nCarta 01:\n");
    
        printf("\nEstado: %c\n", estado01);
    
        printf("Código: %s\n", codigo01);
    
        printf("Nome da Cidade: %s\n", cidade01);
    
        printf("População: %lu\n", populacao01);
    
        printf("Área (em km²): %.2f km²\n", area01);
    
        printf("PIB: %.2f bilhões de reais\n", pib01);
    
        printf("Números de Pontos Turísticos: %d\n", PontosTuristicos01);
    
        printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional01);

        printf("PIB per Capita: %.2f reais\n", pibPerCapita01);

        break;

        case 2:

        //Saída de dados (CARTA 02):

        printf("\nCarta 02:\n");
    
        printf("\nEstado: %c\n", estado02);

        printf("Código: %s\n", codigo02);
    
        printf("Nome da Cidade: %s\n", cidade02);
    
        printf("População: %lu\n", populacao02);
    
        printf("Área (em km²): %.2f km²\n", area02);
    
        printf("PIB: %.2f bilhões de reais\n", pib02);
    
        printf("Números de Pontos Turísticos: %d\n", PontosTuristicos02);
    
        printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional02);
    
        printf("PIB per Capita: %.2f reais\n", pibPerCapita02);

        break;

        case 3:

        //Atributo: População

        if (populacao01 > populacao02) {
        printf("\nAtributo: (População):\n");

        printf("\nCarta 01 - %s : %lu\n", cidade01, populacao01);
        
        printf("\nCarta 02 - %s : %lu\n", cidade02, populacao02);

        printf("\nResultado: Carta 01 (%s) venceu!\n", cidade01);
        }
        else if (populacao02 > populacao01) {
        printf("\nAtributo: (População):\n");

        printf("\nCarta 01 - %s: %lu\n", cidade01, populacao01);
        
        printf("\nCarta 02 - %s: %lu\n", cidade02, populacao02);

        printf("\nResultado: Carta 02 (%s) venceu!\n", cidade02);
        }
        else {
            printf("Empatou!");
        }
        break;

        case 4:

        //Atributo: Área

        if (area01 > area02) {
        printf("\nAtributo: (Área):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, area01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, area02);

        printf("\nResultado: Carta 01 (%s) venceu!\n", cidade01);
        }
        else if (area02 > area01) {
        printf("\nAtributo: (Área):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, area01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, area02);

        printf("\nResultado: Carta 02 (%s) venceu!\n", cidade02);
        }
        else {
            printf("Empatou!");
        }

        break;
        
        case 5:

        //Atributo: PIB

        if (pib01 > pib02) {
        printf("\nAtributo: (PIB):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, pib01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, pib02);

        printf("\nResultado: Carta 01 (%s) venceu!\n", cidade01);
        }
        else if (pib02 > pib01) {
        printf("\nAtributo: (PIB):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, pib01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, pib02);

        printf("\nResultado: Carta 02 (%s) venceu!\n", cidade02);
        }
        else {
            printf("Empatou!");
        }

        break;

        case 6:

        //Atributo: Pontos Turísticos
    
        if (PontosTuristicos01 > PontosTuristicos02) {
        printf("\nAtributo: (Pontos Turísticos):\n");

        printf("\nCarta 01 - %s: %d\n", cidade01, PontosTuristicos01);

        printf("\nCarta 02 - %s: %d\n", cidade02, PontosTuristicos02);

        printf("\nResultado: Carta 01 (%s) venceu!\n", cidade01);
        }
        else if (PontosTuristicos02 > PontosTuristicos01) {
        printf("\nAtributo: (Pontos Turísticos):\n");

        printf("\nCarta 01 - %s: %d\n", cidade01, PontosTuristicos01);

        printf("\nCarta 02 - %s: %d\n", cidade02, PontosTuristicos02);

        printf("\nResultado: Carta 02 (%s) venceu!\n", cidade02);
        }
        else{
            printf("Empatou!");
        }

        break;

        case 7:

        //Atributo: Densidade Populacional

        if (DensidadePopulacional01 < DensidadePopulacional02) {
        printf("\nAtributo: (Densidade Populacional):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, DensidadePopulacional01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, DensidadePopulacional02);

        printf("\nResultado: Carta 01 (%s) venceu!\n", cidade01);
        }
        else if (DensidadePopulacional02 < DensidadePopulacional01) {
        printf("\nAtributo: (Densidade Populacional):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, DensidadePopulacional01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, DensidadePopulacional02);

        printf("\nResultado: Carta 02 (%s) venceu!\n", cidade02);
        }
        else{
            printf("Empatou!");
        }

        break;

        case 8:

        //Atributo: PIB per Capita
    
        if (pibPerCapita01 > pibPerCapita02) {
        printf("\nAtributo: (PIB per Capita):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, pibPerCapita01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, pibPerCapita02);

        printf("\nResultado: Carta 01 (%s) venceu!\n", cidade01);
        }
        else if (pibPerCapita02 > pibPerCapita01) {
        printf("\nAtributo: (PIB per Capita):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, pibPerCapita01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, pibPerCapita02);

        printf("\nResultado: Carta 02 (%s) venceu!\n", cidade02);
        }
        else {
            printf("Empatou!");
        }

        break;

        case 9:

        //Atributo: Super Poder
    
        if (superpoder01 > superpoder02) {
        printf("\nAtributo: (Super Poder):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, superpoder01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, superpoder02);

        printf("\nResultado: Carta 01 (%s) venceu!\n", cidade01);
        }
        else if (superpoder02 > superpoder01) {
        printf("\nAtributo: (Super Poder):\n");

        printf("\nCarta 01 - %s: %.2f\n", cidade01, superpoder01);

        printf("\nCarta 02 - %s: %.2f\n", cidade02, superpoder02);

        printf("\nResultado: Carta 02 (%s) venceu!\n", cidade02);
        }
        else {
            printf("Empatou!");
        }

        break;

        default:
        printf("Opção invalida!\n");
    }

    return 0;
}