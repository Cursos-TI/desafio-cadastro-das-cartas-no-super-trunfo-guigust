#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Definindo variáveis para inserção dos dados
    //Carta 1
    char estado_1[10];
    char codigo_carta_1[5];
    char cidade_1[10];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    //Carta 2
    char estado_2[10];
    char codigo_carta_2[5];
    char cidade_2[10];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    printf("Iniciando o cadastro das cartas do Jogo:\n");
    printf(" \n");

    /*
    Fiz o desafio conforme aprendido em aulas, porém ao usar o & para apontar a variável estava apresentando problema
    Portanto, fiz a remoção do & para apontamento da variável e funcionou normal o código
    */

    // Cadastrando as cartas
    // Carta 1
    printf("Insira os dados da Carta 1\n");
    printf(" \n");
    printf("Informe o Estado: ");
    scanf("%s", estado_1);
    

    printf("Informe o Código da Carta: ");
    scanf("%s", codigo_carta_1);
    

    printf("Inorme o nome da Cidade: ");
    scanf("%s", cidade_1);

    printf("Inorme a População da cidade: ");
    scanf("%d", &populacao_1);

    printf("Inorme a Área da cidade (km²): ");
    scanf("%f", &area_1);

    printf("Inorme o PIB da cidade (R$): ");
    scanf("%f", &pib_1);

    printf("Inorme a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_1);

    printf(" \n");
    // Carta 2
    printf("Insira os dados da Carta 2\n");
    printf(" \n");
    printf("Informe o Estado: ");
    scanf("%s", estado_2);
    

    printf("Informe o Código da Carta: ");
    scanf("%s", codigo_carta_2);
    

    printf("Inorme o nome da Cidade: ");
    scanf("%s", cidade_2);

    printf("Inorme a População da cidade: ");
    scanf("%d", &populacao_2);

    printf("Inorme a Área da cidade (km²): ");
    scanf("%f", &area_2);

    printf("Inorme o PIB da cidade (R$): ");
    scanf("%f", &pib_2);

    printf("Inorme a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_2);

    // Exibindo dados das cartas cadastradas
    printf(" \n");
    printf("Exibindo dados das Cartas\n");
    printf("*************************\n");
    printf(" \n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhôes de reais\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_1);

    printf(" \n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhôes de reais\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_2);

    printf(" \n");

    return 0;
}
