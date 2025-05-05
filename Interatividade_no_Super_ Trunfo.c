#include <stdio.h>
#include <string.h>

//Estrutura Carta

typedef struct 
{
    char nome[30];
    int populacao;
    int carta;
    float area;
    float pib;
    int pontosturisticos;
    float densidadedeografica;
    
} Carta;

//Comparação
void compararcartas(carta c1, carta c2, int escolha){
    printf("\ncomparando: %s vs %s\n", c1.nome,c2.nome);

    switch (escolha){
    case 1:
        printf("Nome do pais:\n");
        printf("%s vs %s\n", c1.nome,c2.nome);
        printf("Atributo não é usado para comparação direta.\n");
        break;
    case 2:
         printf(" populacao: \n");
         printf("%d (de %s) vs %d (de %s)\n", c1.populacao, c1.nome, c2.populacao,c1.nome);
         if (c1.populacao > c2.populacao)
             printf(" Vencedor: $s\n", c1.nome);
        else if (c2.populacao > c1.populacao)
             printf("Vencedor: %s\n", c2.nome);
        else
         printf("Empate!\n");
        break;
    case 3:
    printf("Área:\n");
    printf("%.2f km² (de %s) vs %.2f km² (de %s)\n", c1.area, c1.nome, c2.area, c2.nome);
    if (c1.area > c2.area)
        printf("Vencedor: %s\n", c1.nome);
    else if (c2.area > c1.area)
        printf("Vencedor: %s\n", c2.nome);
    else
        printf("Empate!\n");
    break;
    case 4:
            printf("PIB:\n");
            printf("%.2f bilhões (de %s) vs %.2f bilhões (de %s)\n", c1.pib, c1.nome, c2.pib, c2.nome);
            if (c1.pib > c2.pib)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pib > c1.pib)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Número de Pontos Turísticos:\n");
            printf("%d (de %s) vs %d (de %s)\n", c1.pontosTuristicos, c1.nome, c2.pontosTuristicos, c2.nome);
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pontosTuristicos > c1.pontosTuristicos)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Densidade Demográfica:\n");
            printf("%.2f hab/km² (de %s) vs %.2f hab/km² (de %s)\n", c1.densidadeDemografica, c1.nome, c2.densidadeDemografica, c2.nome);
            if (c1.densidadeDemografica < c2.densidadeDemografica)
                printf("Vencedor: %s (menor densidade vence)\n", c1.nome);
            else if (c2.densidadeDemografica < c1.densidadeDemografica)
                printf("Vencedor: %s (menor densidade vence)\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }
}

int main(){

    Carta pais1= {"Brasil", 213000000, 8515767.0, 1440.0, 10, 25.0};
    Carta pais2 = {"Canadá", 38000000, 9984670.0, 1800.0, 7, 3.8};

    int opcao;
    
    printf("=== SUPER TRUNFO - COMPARAÇÃO DE PAÍSES ===\n\n");

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Nome do País\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de Pontos Turísticos\n");
    printf("6 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    compararCartas(pais1, pais2, opcao);

    return 0;
}
