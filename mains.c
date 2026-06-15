#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf(" Cadastro da Carta 1 /n");
    prinft("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%[^/n]", nomeCidade1);

    printf(" Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("/n");


    printf(" Cadastro da Carta 2 /n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%[^/n]", nomeCidade2);

    printf(" Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("/n");

    printf("       CARTAS CADASTRADAS      \n");
    
    printf("Cart 1: /n");
    printf("Estado: %c /n", estado1);
    printf("Código: %s /n", codigo1);
    printf("Nome da Cidade: %s /n", nomeCidade1);
    printf("População: %d /n", populacao1);
    printf("Área: %.2f km /n", area1);
    printf("PIB: %.2f bilhões /n", pib1);
    printf("Pontos Turísticos: %d /n", pontosTuristicos1);

    printf("Cart 2: /n");
    printf("Estado: %c /n", estado2);
    printf("Código: %s /n", codigo2);
    printf("Nome da Cidade: %s /n", nomeCidade2);
    printf("População: %d /n", populacao2);
    printf("Área: %.2f km /n", area2);
    printf("PIB: %.2f bilhões /n", pib2);
    printf("Pontos Turísticos: %d /n", pontosTuristicos2);

    return 0;


}