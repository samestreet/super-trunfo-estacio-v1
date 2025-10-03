#include <stdio.h>

int main(void) {

    // Definição da primeira carta
    char carta1_estado = 'A';
    char carta1_codigo[] = "A01";
    char carta1_nome[] = "São Paulo";
    unsigned long int carta1_populacao = 12325000;
    float carta1_area = 1521.11;
    float carta1_pib = 699.28;
    int carta1_pontos_turisticos = 50;
    float carta1_densidade_populacional = carta1_populacao / carta1_area;
    float carta1_pib_per_capita = (carta1_pib * 1000000000) / carta1_populacao;
    float carta1_super_poder = 
        carta1_populacao + 
        carta1_area + 
        carta1_pib + 
        carta1_pontos_turisticos + 
        carta1_densidade_populacional + 
        carta1_pib_per_capita;
    
    // Definição da segunda carta
    char carta2_estado = 'B';
    char carta2_codigo[] = "B02";
    char carta2_nome[] = "Rio de Janeiro";
    unsigned long int carta2_populacao = 6748000;
    float carta2_area = 1200.25;
    float carta2_pib = 300.50;
    int carta2_pontos_turisticos = 30;
    float carta2_densidade_populacional = carta2_populacao / carta2_area;
    float carta2_pib_per_capita = (carta2_pib * 1000000000) / carta2_populacao;
    float carta2_super_poder = 
        carta2_populacao + 
        carta2_area + 
        carta2_pib + 
        carta2_pontos_turisticos + 
        carta2_densidade_populacional + 
        carta2_pib_per_capita;

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
    printf("Super Poder: %.2f\n", carta2_super_poder);

    printf("\nComparação das Cartas\n");
    
    int carta1_populacao_venceu = carta1_populacao > carta2_populacao;
    int carta1_area_venceu = carta1_area > carta2_area;
    int carta1_pib_venceu = carta1_pib > carta2_pib;
    int carta1_pontos_turisticos_venceu = carta1_pontos_turisticos > carta2_pontos_turisticos;
    int carta1_densidade_populacional_venceu = carta1_densidade_populacional < carta2_densidade_populacional;
    int carta1_pib_per_capita_venceu = carta1_pib_per_capita > carta2_pib_per_capita;
    int carta1_super_poder_venceu = carta1_super_poder > carta2_super_poder;

    if(carta1_populacao_venceu) {
        printf("População: Carta 1 venceu (%d)\n", carta1_populacao_venceu);
    } else {
        printf("População: Carta 2 venceu (%d)\n", carta1_populacao_venceu);
    } 

    if(carta1_area_venceu) {
        printf("Área: Carta 1 venceu (%d)\n", carta1_area_venceu);
    } else {
        printf("Área: Carta 2 venceu (%d)\n", carta1_area_venceu);
    }

    if(carta1_pib_venceu) {
        printf("PIB: Carta 1 venceu (%d)\n", carta1_pib_venceu);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", carta1_pib_venceu);
    }

    if(carta1_pontos_turisticos_venceu) {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1_pontos_turisticos_venceu);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", carta1_pontos_turisticos_venceu);
    }

    if(carta1_densidade_populacional_venceu) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1_densidade_populacional_venceu);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", carta1_densidade_populacional_venceu);
    }

    if(carta1_pib_per_capita_venceu) {
        printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1_pib_per_capita_venceu);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", carta1_pib_per_capita_venceu);
    }

    if(carta1_super_poder_venceu) {
        printf("Super Poder: Carta 1 venceu (%d)\n", carta1_super_poder_venceu);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", carta1_super_poder_venceu);
    }

    return 0;
}