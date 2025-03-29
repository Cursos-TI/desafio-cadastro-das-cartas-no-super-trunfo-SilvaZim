#include <stdio.h>

int main(){
    // Definindo variáveis para armazenar os dados da carta
    char estado[30];  
    char codigo_carta[5];  
    char cidade[50];  
    int Populacao;
    float Area_km2;
    float PIB;
    int Pontos_Turisticos;  

    // Cadastro da primeira carta
    printf("Digite o estado da carta 1: \n");
    scanf("%s", estado);  

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade da carta 1: \n");
    getchar();  
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &Populacao);

    printf("Digite a área em km² da carta 1: \n");
    scanf("%f", &Area_km2);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &Pontos_Turisticos);

    // Exibindo os dados da primeira carta
    printf("\nDados inseridos para a carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Cidade: %s", cidade);  
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area_km2);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", Pontos_Turisticos);

    
    printf("\nDigite o estado da carta 2: \n");
    scanf("%s", estado);  

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade da carta 2: \n");
    getchar();  
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &Populacao);

    printf("Digite a área em km² da carta 2: \n");
    scanf("%f", &Area_km2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &Pontos_Turisticos);

    // Exibindo os dados da segunda carta
    printf("\nDados inseridos para a carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Cidade: %s", cidade);  
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area_km2);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", Pontos_Turisticos);

    
    return 0;

    // Tentei fazer de muitas formas, mas sempre estava dando error pesquisei um pouco sobre, e essa
    // foi a maneira que deu certo para mim, estou com algumas dúvidas poís sinto que não consigo
    // encontrar erros no meu próprio código, mas mesmo assim não deixei de tentar!!
    // programação não é exatamente minha área, mas irei se empenhar ao máximo para absorver conhecimentos.
    // muito satisfatório quando um código se encaixa perfeitamente sem erros, estou a curti a vibe !!



}