#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;




  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;




  // Área para entrada de dados
  printf("Cadastro da Carta:1 \n");

  printf("Digite o Nome do Estado (A a H): \n");
  scanf("%s", &estado1);

  printf("digite o codigo da carta (ex: A01): \n");
  scanf("%s", codigo1);
  
  printf("digite o nome da cidade: \n");
  scanf("%s", cidade1);
  
  printf("Digite o Numero da Populacao: \n");
  scanf("%d", &populacao1);

  printf("Digite o tamanho da Area: \n");
  scanf("%f", &area1);

  printf("Digite o valor do Pib: \n");
  scanf("%f", &pib1);

  printf("Digite o Numero de pontos turisticos: \n");
  scanf("%d", &pontosturisticos1);




  printf("Cadastro da Carta: 2 \n");

  printf("Digite o Nome do estado: \n");
  scanf("%s", &estado2);

  printf("Digite o Codigo da Carta (ex: B02): \n");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", cidade2);

  printf("Digite o Numero da Populacao: \n");
  scanf("%d", &populacao2);

  printf("Digite o Tamanho da Area: \n");
  scanf("%f", &area2);

  printf("Digite o Valor do Pib: \n");
  scanf("%f", &pib2);

  printf("Digite o Numero de Pontos Turisticos: \n");
  scanf("%d", &pontosturisticos2);




  // Área para exibição dos dados da cidade
  printf("Carta 1 \n");
  printf("Estado: %c\n", estado1);
  printf("Codigo da Carta: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %.2d\n", populacao1);
  printf("Area: %.2f Km²\n", area1);
  printf("Pib: %.2f Bilhoes de Reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);




  printf("Carta 2 \n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da Carta: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populcao: %d\n", populacao2);
  printf("Area: %.2f Km²\n", area2);
  printf("Pib: %.2f Bilhoes de Reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);


  return 0;
} 
