#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área de definição das variáveis para armazenar as propriedades da cidade 1

  int populacao = 12300000;
  float area =  1521.11, densidade;
  float pib = 699.28, percapita;
  int pontos = 50;
  float superPoder;

  // Área de definição das variáveis para armazenar as propriedades da cidade 2

  int populacao2 = 6700000;
  float area2 = 1200.25, densidade2;
  float pib2 = 300.50, percapita2;
  int pontos2 = 30;
  float superPoder2;
  

  //Calcular a Densidade Populacional carta 1

  densidade = (float) populacao / area;
  percapita = (float) pib / populacao;

  //Calcular Super Poder carta 1

  superPoder = populacao + area + pib + pontos + percapita + (1/densidade);

  // Área para exibição dos dados da cidade carta 1

  printf("Estado: SP\n");
  printf("Código: A01\n");
  printf("Cidade: Sao Paulo\n");
  printf("População: %d\n", populacao);
  printf("Área: %.2f km\n", area);
  printf("Pib: %.2f Bilhões de reais\n", pib);
  printf("Pontos turísticos: %d\n", pontos);
  printf("Densidade populacional: %.2f Hab/km\n", densidade);
  printf("Pib per capita: %.2f Reais\n", percapita);
  printf("Super Poder carta 1: %.2f Power\n", superPoder);
  

  //Calcular a Densidade Populacional carta 2

  densidade2 = (float) populacao2 / area2;
  percapita2 = (float) pib2 / populacao2;

  //Calcular Super Poder carta 2

  superPoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + (1/densidade2);

  // Área para exibição dos dados da cidade carta 2

  printf("Estado: RJ\n");
  printf("Código: B01\n");
  printf("Cidade: Rio de Janeiro\n");
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km\n", area2);
  printf("Pib: %.2f Bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);
  printf("Densidade populacional: %.2f Hab/km\n", densidade2);
  printf("Pib per capita: %.2f Reais\n", percapita2);
  printf("Super Poder carta 2: %.2f Power\n", superPoder2);

  // Área para exibição da comparação das cartas

  printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area > area2);
  printf("Pib: Carta 1 venceu (%d)\n", pib > pib2);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos > pontos2);
  printf("Densidade: Carta 1 venceu (%d)\n", densidade < densidade2);
  printf("Pib per capita: Carta 1 venceu (%d)\n", percapita > percapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder > superPoder2);

  // Área para comparação das cartas (if/else)

  if (populacao > populacao2)
  {
    printf("Carta 1 - São Paulo (SP): %d\n", populacao);
  }else {
    printf("Carta 2 - Rio de Janeiro (RJ): %d\n", populacao2);
  }

  if (area > area2)
  {
    printf("Carta 1 - São Paulo (SP): %.2f\n", area);
  }else {
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n", area2);
  }

  if (pib > pib2)
  {
    printf("Carta 1 - São Paulo (SP): %.2f\n", pib);
  }else {
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n", pib2);
  }

  if (pontos > pontos2)
  {
    printf("Carta 1 - São Paulo (SP):%d\n", pontos);
  }else {
    printf("Carta 2 - Rio de Janeiro (RJ): %d\n", pontos2);
  }

  if (densidade < densidade2)
  {
    printf("Carta 1 - São Paulo (SP): %.2f\n", densidade);
  }else {
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f\n", densidade2);
  }

  if (percapita > percapita2)
  {
    printf("Carta 1 - São Paulo (SP): %.6f\n", percapita);
  }else {
    printf("Carta 2 - Rio de Janeiro (RJ): %.6f\n", percapita2);
  }

    if (superPoder > superPoder2)
  {
    printf("Resultado: Carta 1 - São Paulo (SP) venceu! %.2f\n", superPoder);
  }else {
    printf("Resultado: Carta 2 - Rio de Janeiro (RJ) venceu! %.2f\n", superPoder2);
  }


  
return 0;

} 
