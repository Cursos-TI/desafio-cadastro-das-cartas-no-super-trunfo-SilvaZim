#include <stdio.h>

int main(){
    char estado;
    int população[50];
    float Área,pib;
    int pontosTuristicos[50];
    char codigo_carta[10];
    char cidade[20];

    printf("Digite a Área: \n");
    scanf("%f", &Área);

    printf("Qual é o estado: \n");
    scanf("%s", &estado);

    printf("Código da carta: \n");
    scanf("%s", &codigo_carta);

    printf("Qual o PIB: \n");
    scanf("%f", &pib);
    
    printf("total de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Qual é a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Estado: %s - Código Da Carta: %s - Cidade: %s\n", estado, codigo_carta, cidade);
    printf("Total de Habitantes: %d - Pontos Turisticos: %d - Qual o PIB: %f - Qual a Aréa: %f", população, pontosTuristicos, pib, Área);



    return 0;



}