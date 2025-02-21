#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    printf("TEMA: PAISES\n");
    char estado;
    int População;
    float Área;
    float PIB;
    int pontos_turisticos;

    printf("Digite a Inicial do seu estado: \n");
    scanf("%s", &estado);
    printf("o estado: %s", estado);

    printf("Digite o Numero de População: \n");
    scanf("%d", &População);

    printf("Digite o Numero de Áreas: \n");
    scanf("%f", &Área);

    printf("digite a Renda da cidade: \n");
    scanf("%f", &PIB);

    printf("digite o numero de pontos turisticos da cidade: \n");
    scaf("%d", &pontos_turisticos);

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
