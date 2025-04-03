#include <stdio.h>

int main() {

    char estado1, estado2;
    char codigo1 [4], codigo2 [4];
    char cidade1 [20], cidade2 [20];
    int populacao1, populacao2, pontoturistico1, pontoturistico2; 
    float area1, area2, pib1, pib2;

    printf ("Digite o estado: ");
    scanf("%c",&estado1);
    
    printf ("Digite o codigo: ");
    scanf("%3s",&codigo1);

    printf ("Digite a cidade (sem espaço): ");
    scanf("%s",&cidade1);

    printf ("Digite o numero de habitantes: ");
    scanf("%d",&populacao1);

    printf ("Digite a area em km2: ");
    scanf("%f",&area1);

    printf ("Digite o pib: ");
    scanf("%f",&pib1);

    printf ("Digite a quantidade de pontos turisticos: ");
    scanf("%d",&pontoturistico1);

    printf ("Agora vamos registrar as informações da carta 2\n" "Digite o estado: ");
    scanf( " %c",&estado2);

    printf ("Digite o codigo: ");
    scanf("%3s",&codigo2);

    printf ("Digite a cidade (sem espaço): ");
    scanf(" %s",&cidade2);

    printf ("Digite o numero de habitantes: ");
    scanf("%d",&populacao2);

    printf ("Digite a area (em km2): ");
    scanf("%f",&area2);

    printf ("Digite o pib: ");
    scanf("%f",&pib2);

    printf ("Digite a quantidade de pontos turisticos: ");
    scanf("%d",&pontoturistico2);

printf("\n=================================================\n");


  printf("Carta 1 \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Numeros de pontos turisticos: %d \n", pontoturistico1);

printf("\n=================================================\n");

  printf("Carta 2 \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Numeros de pontos turisticos: %d \n", pontoturistico2);

    return 0;
}
