#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Definindo variáveis para inserção dos dados
    // Carta 1
    char estado_1[10];
    char codigo_carta_1[5];
    char cidade_1[10];
    unsigned long int populacao_1; // Alterado devido ao nivel mestre
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // variáveis para calculo de PIB per Capita e Densidade Populacional
    float densidade_1;
    float pib_percapita_1;

    // Variável criada para determinar o super poder
    float super_poder_1;

    // Carta 2
    char estado_2[10];
    char codigo_carta_2[5];
    char cidade_2[10];
    unsigned long int populacao_2; // Alterado devido ao nivel mestre
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    // variáveis para calculo de PIB per Capita e Densidade Populacional
    float densidade_2;
    float pib_percapita_2;

    // Variável criada para determinar o super poder
    float super_poder_2;

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
    scanf("%lu", &populacao_1);

    printf("Inorme a Área da cidade (km²): ");
    scanf("%f", &area_1);

    printf("Inorme o PIB da cidade (R$): ");
    scanf("%f", &pib_1);

    printf("Inorme a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_1);

    printf("*-*-Carta 01 cadastrada com sucesso-*-*\n");

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
    scanf("%lu", &populacao_2);

    printf("Inorme a Área da cidade (km²): ");
    scanf("%f", &area_2);

    printf("Inorme o PIB da cidade (R$): ");
    scanf("%f", &pib_2);

    printf("Inorme a quantidade de Pontos Turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_2);

    printf("*-*-Carta 02 cadastrada com sucesso-*-*\n");

    // Calculando Densidade e PIB per Capita (Carta 1)
    densidade_1 = (float)populacao_1 / area_1;
    pib_percapita_1 = ((pib_1 * 1000000000) / populacao_1);

    // Calculando Densidade e PIB per Capita (Carta 2)
    densidade_2 = populacao_2 / area_2;
    pib_percapita_2 = ((pib_2 * 1000000000) / populacao_2);

    //  Calculando Super Poder para Carta 1
    super_poder_1 = (float)populacao_1 + area_1 + pib_1 + (float)pontos_turisticos_1 + pib_percapita_1 + (1.0F / densidade_1);

    // Calculando Super Poder para Carta 2
    super_poder_2 = (float)populacao_2 + area_2 + pib_2 + (float)pontos_turisticos_2 + pib_percapita_2 + (1.0F / densidade_2);

    // Exibindo dados das cartas cadastradas
    printf(" \n");
    printf("*************************\n");
    printf("Exibindo dados das Cartas\n");
    printf("*************************\n");
    printf(" \n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_carta_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhôes de reais\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita_1);
    printf("Super Poder: %.2f\n", super_poder_1); // Super Poder / Super Trunfo (Carta 1)

    printf(" \n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhôes de reais\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita_2);
    printf("Super Poder: %.2f\n", super_poder_2); // Super Poder / Super Trunfo  (Carta 2)

    
    // Comparação de Cartas
    printf("\n");
    printf("**********************\n");
    printf("Comparação de Cartas:\n");
    printf("**********************\n");
    printf("\n");
    printf("População: Carta 1 venceu (%d)\n", populacao_1 > populacao_2);
    printf("Área: Carta 1 venceu (%d)\n", area_1 > area_2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_1 > pib_2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos_1 > pontos_turisticos_2);
    // Para Densidade Populacional, o MENOR valor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_1 < densidade_2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_percapita_1 > pib_percapita_2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_1 > super_poder_2);

    printf(" \n");
    printf("***Fim da aplicação\n");

    return 0;
}
