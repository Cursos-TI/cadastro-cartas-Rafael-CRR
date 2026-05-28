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
  float area2;
  float pib2;
  int pontosturisticos2;




  // Área para entrada de dados
  printf("digite seu estado: \n");
  scanf("%c", &estado1);

  printf("codigo da carta: \n");
  scanf("%s", &codigo1);

  printf("digite sua cidade: \n");
  scanf("%s", &cidade1);

  printf("digite sua populacao: \n");
  scanf("%d", &populacao1);

  printf("digite sua area: \n");
  scanf("%f", &area1);

  printf("digite seu pib: \n");
  scanf("%f", &pib1);

  printf("digite os pontos turisticos: \n");
  scanf("%d", &pontosturisticos1);












  // Área para exibição dos dados da cidade

return 0;
} 
