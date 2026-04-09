/**
 * @file logicaSuperTrunfo.c
 * @brief Desafio Super Trunfo - Jogo de comparação de cartas 
 * @author João Paulo
 * @date 08/04/2026
 */

#include <stdio.h>

int main() {

  // Área de definição das variáveis para armazenar as propriedades da cidade 1

  char jogador1[] = "São Paulo";
  int populacao = 12300000;
  float area =  1521.11, densidade;
  float pib = 699.28, percapita;
  int pontos = 50;
  float superPoder;

  // Área de definição das variáveis para armazenar as propriedades da cidade 2

  char jogador2[] = "Rio de Janeiro";
  int populacao2 = 6700000;
  float area2 = 1200.25, densidade2;
  float pib2 = 300.50, percapita2;
  int pontos2 = 30;
  float superPoder2;
   
  // Área de definição variável opção Interface

  int opcao1, opcao2;

  // Variável para comparação

  float valorAtributo1carta1, valorAtributo1carta2;
  float valorAtributo2carta1, valorAtributo2carta2;

  // Interface com o usuário — exibição de MENUS - Inicio do Jogo
  
  // Escolha de atributo 1
  printf("*** Jogo SuperTrunfo ***\n");
  printf("Escolha o primeiro atributo:\n");
  printf("1. populacao\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. pontos\n");
  printf("5. densidade\n");
  printf("6. percapita\n");
  printf("7. superPoder\n");
  scanf("%d", &opcao1);

  // Escolha de atributo 2
  printf("Escolha o segundo atributo:\n");
  printf("1. populacao\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. pontos\n");
  printf("5. densidade\n");
  printf("6. percapita\n");
  printf("7. superPoder\n");
  scanf("%d", &opcao2);

  // Verificação se atributos são iguais — if + return 0

  if (opcao1 == opcao2)
  {
    printf("Você escolheu o mesmo atributo!\n");

    return 0;
  }
  
  
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
  
  // Área para comparação das cartas estrutura (Switch) carta 1

  switch (opcao1)
  {
  case 1:
    valorAtributo1carta1 = populacao;
    valorAtributo1carta2 = populacao2;
    break;
  case 2:
    valorAtributo1carta1 = area;
    valorAtributo1carta2 = area2;
    break;
  case 3:
    valorAtributo1carta1 = pib;
    valorAtributo1carta2 = pib2;
    break;
  case 4:
    valorAtributo1carta1 = pontos;
    valorAtributo1carta2 = pontos2;
    break;
  case 5:
    valorAtributo1carta1 = densidade;
    valorAtributo1carta2 = densidade2;
    break;
  case 6:
    valorAtributo1carta1 = percapita;
    valorAtributo1carta2 = percapita2;
    break;
  case 7:
    valorAtributo1carta1 = superPoder;
    valorAtributo1carta2 = superPoder2;
    break;
  default:
    printf("Opção inválida!\n");
    break;

    }
  

  // Área para comparação das cartas estrutura (Switch) carta 2

  switch (opcao2)
  {
  case 1:
    valorAtributo2carta1 = populacao;
    valorAtributo2carta2 = populacao2;
    break;
  case 2:
    valorAtributo2carta1 = area;
    valorAtributo2carta2 = area2;
    break;
  case 3:
    valorAtributo2carta1 = pib;
    valorAtributo2carta2 = pib2;
    break;
  case 4:
    valorAtributo2carta1 = pontos;
    valorAtributo2carta2 = pontos2;
    break;
  case 5:
    valorAtributo2carta1 = densidade;
    valorAtributo2carta2 = densidade2;
    break;
  case 6:
    valorAtributo2carta1 = percapita;
    valorAtributo2carta2 = percapita2;
    break;
  case 7:
    valorAtributo2carta1 = superPoder;
    valorAtributo2carta2 = superPoder2;
    break;
  default:
    printf("Opção inválida!\n");
    break;

    }

  /* -------------------------------------------------------
  Área para comparação das cartas com (if/else) 

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

*/

  
return 0;

} 
