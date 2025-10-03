#include <stdio.h>

int main(void) {

    // Definição da primeira carta
    char carta1_estado = 'A';
    char carta1_codigo[] = "A01";
    char carta1_nome[] = "São Paulo";
    int carta1_populacao = 12325000;
    float carta1_area = 1521.11;
    float carta1_pib = 699.28;
    int carta1_pontos_turisticos = 50;
    float carta1_densidade_populacional = carta1_populacao / carta1_area;
    float carta1_pib_per_capita = (carta1_pib * 1000000000) / carta1_populacao;
    
    // Definição da segunda carta
    char carta2_estado = 'B';
    char carta2_codigo[] = "B02";
    char carta2_nome[] = "Rio de Janeiro";
    int carta2_populacao = 6748000;
    float carta2_area = 1200.25;
    float carta2_pib = 300.50;
    int carta2_pontos_turisticos = 30;
    float carta2_densidade_populacional = carta2_populacao / carta2_area;
    float carta2_pib_per_capita = (carta2_pib * 1000000000) / carta2_populacao;

    printf("Super Trunfo - Cidades\n");
    
    printf("------------------------\n");

    printf("Carta 1: %s\n", carta1_nome);
    printf("Estado: %c\n", carta1_estado);
    printf("Código: %s\n", carta1_codigo);
    printf("População: %d\n", carta1_populacao);
    printf("Área: %.2f\n", carta1_area);
    printf("PIB: %.2f\n", carta1_pib);
    printf("Pontos Turísticos: %d\n", carta1_pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta1_densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta1_pib_per_capita);

    printf("------------------------\n");

    printf("Carta 2: %s\n", carta2_nome);
    printf("Estado: %c\n", carta2_estado);
    printf("Código: %s\n", carta2_codigo);
    printf("População: %d\n", carta2_populacao);
    printf("Área: %.2f\n", carta2_area);
    printf("PIB: %.2f\n", carta2_pib);
    printf("Pontos Turísticos: %d\n", carta2_pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta2_densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta2_pib_per_capita);

    return 0;
}