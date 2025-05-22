#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, pib_per_capita1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2, pib_per_capita2;

    // Leitura dos dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Leitura dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos resultados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &opcao);

    printf("\nResultado da Comparacao:\n");
    if (opcao == 1) {
        if (populacao1 > populacao2)
            printf("Carta 1 venceu pela maior populacao!\n");
        else if (populacao2 > populacao1)
            printf("Carta 2 venceu pela maior populacao!\n");
        else
            printf("Empate em populacao!\n");
    } else if (opcao == 2) {
        if (area1 > area2)
            printf("Carta 1 venceu pela maior area!\n");
        else if (area2 > area1)
            printf("Carta 2 venceu pela maior area!\n");
        else
            printf("Empate em area!\n");
    } else if (opcao == 3) {
        if (pib1 > pib2)
            printf("Carta 1 venceu pelo maior PIB!\n");
        else if (pib2 > pib1)
            printf("Carta 2 venceu pelo maior PIB!\n");
        else
            printf("Empate em PIB!\n");
    } else if (opcao == 4) {
        if (pontos1 > pontos2)
            printf("Carta 1 venceu pelo maior numero de pontos turisticos!\n");
        else if (pontos2 > pontos1)
            printf("Carta 2 venceu pelo maior numero de pontos turisticos!\n");
        else
            printf("Empate em pontos turisticos!\n");
    } else if (opcao == 5) {
        if (densidade1 < densidade2)
            printf("Carta 1 venceu pela menor densidade populacional!\n");
        else if (densidade2 < densidade1)
            printf("Carta 2 venceu pela menor densidade populacional!\n");
        else
            printf("Empate em densidade populacional!\n");
    } else {
        printf("Opcao invalida!\n");
    }
    return 0;
}