#include <stdio.h>

int main() {

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int pontoturistico1, pontoturistico2;
    unsigned long int populacao1, populacao2; 
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // Coleta da carta 1
    printf("Digite o estado (UF): ");
    scanf("%2s", estado1);
    
    printf("Digite o código: ");
    scanf("%3s", codigo1);

    printf("Digite a cidade (sem espaço): ");
    scanf("%19s", cidade1);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico1);

    // Coleta da carta 2
    printf("\nAgora vamos registrar as informações da carta 2\n");

    printf("Digite o estado (UF): ");
    scanf("%2s", estado2);

    printf("Digite o código: ");
    scanf("%3s", codigo2);

    printf("Digite a cidade (sem espaço): ");
    scanf("%19s", cidade2);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico2);


    //calculos

    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 * 1000000000 / (float)populacao1; // Convertendo bilhões para reais
    superpoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontoturistico1 + pibpercapita1 + (1.0f / densidade1);


    printf("\n================ CARTA 1 ================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontoturistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);

    
    //calculos

    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000 / (float)populacao2;
    superpoder2 = populacao2 + area2 + (pib2 * 1000000000.0f) + pontoturistico2 + pibpercapita2 + (1.0f / densidade2);
  

    printf("\n================ CARTA 2 ================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontoturistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);

    //comparações

    int venceu_populacao = populacao1 > populacao2;
    int venceu_area = area1 > area2;
    int venceu_pib = pib1 > pib2;
    int venceu_turismo = pontoturistico1 > pontoturistico2;
    int venceu_densidade = densidade1 < densidade2; // menor densidade vence
    int venceu_pibpercapita = pibpercapita1 > pibpercapita2;
    int venceu_superpoder = superpoder1 > superpoder2;

    //resultados

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", venceu_populacao);
    printf("Área: Carta 1 venceu (%d)\n", venceu_area);
    printf("PIB: Carta 1 venceu (%d)\n", venceu_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceu_turismo);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceu_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceu_pibpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceu_superpoder);

    return 0;
}
