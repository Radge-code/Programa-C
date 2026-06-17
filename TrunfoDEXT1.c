#include <stdio.h>

// Desafio do Super-Trunfo
//Autor: Edgar Buono

int main() {
    
    //Vou declarar as variáveis para guardar e mostrar o resultado

    int descricao1, descricao2;

    //Carta1
    char pais1[60];
    char cidade1[70];
    float populacao1, area1, pib1;
    int pontosTuristicos1; 

    //Carta2
    char pais2[60];
    char cidade2[70];
    float populacao2, area2, pib2;
    int pontosTuristicos2;

// Cadastro de Cartas

    printf("Digite o nome do primeiro País: ");
    scanf(" %s", pais1);
    printf("Digite o nome da primeira Cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população da primeira Cidade: ");
    scanf(" %f", &populacao1);
    printf("Digite a área da primeira Cidade: ");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira Cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da primeira Cidade: ");
    scanf("%d", &pontosTuristicos1);

    //Cadastro da segunda Carta

    printf("\nDigite o nome do segundo País: ");
    scanf(" %s", pais2);
    printf("Digite o nome da segunda Cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população da segunda Cidade: ");
    scanf(" %f", &populacao2);
    printf("Digite a área da segunda Cidade: ");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda Cidade: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da segunda Cidade: ");
    scanf(" %d", &pontosTuristicos2);

    

    //Retorno das cartas para o Nivel básico do código

     printf("Abaixo veja as informações das cartas cadastradas:\n ");

     printf("\nCarta 1:\n");
     printf("País: %s\n", pais1);
     printf("Cidade: %s\n", cidade1);
     printf("População: %f\n", populacao1);
     printf("Área: %f\n", area1);
     printf("PIB: %.3f\n", pib1);
     printf("Pontos Turistiscos: %d\n", pontosTuristicos1);

return 0;















}
