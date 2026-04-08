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

   
  // Interface com o usuário — exibição do MENU

  int opcao;
    
  printf("*** Jogo SuperTrunfo ***\n");
  printf("Escolha o atributo para comparação:\n");
  printf("1. populacao\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. pontos\n");
  printf("5. densidade\n");
  printf("6. percapita\n");
  printf("7. superPoder\n");
  printf("Escolha: ");
  scanf("%d", &opcao);
  
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
  
  // Área para comparação das cartas estrutura (Switch)

  switch (opcao)
  {
  case 1:
    printf("\n*** Comparando População ***\n");
    printf("%s: %d habitantes\n", jogador1, populacao);
    printf("%s: %d habitantes\n", jogador2, populacao2);

    if (populacao > populacao2)
    {
        printf("Resultado: %s venceu!\n", jogador1);
    } else if (populacao2 > populacao) {
        printf("Resultado: %s venceu!\n", jogador2);
    } else {
      printf("Resultado: Empate!\n");
    }
    break;
  case 2:
    printf("\n*** Comparando Área ***\n");
    printf("%s: %.2f Km\n", jogador1, area);
    printf("%s: %.2f Km\n", jogador2, area2);

    if (area > area2)
    {
        printf("Resultado: %s venceu!\n", jogador1);
    } else if (area2 > area) {
        printf("Resultado: %s venceu!\n", jogador2);
    } else {
      printf("Resultado: Empate!\n");
    }
    break;
  case 3:
    printf("\n*** Comparando Pib ***\n");
    printf("%s: %.2f Bilhões de reais\n", jogador1, pib);
    printf("%s: %.2f Bilhões de reais\n", jogador2, pib2);

    if (pib > pib2)
    {
        printf("Resultado: %s venceu!\n", jogador1);
    } else if (pib2 > pib) {
        printf("Resultado: %s venceu!\n", jogador2);
    } else {
      printf("Resultado: Empate!\n");
    }
    break;
  case 4:
    printf("\n*** Comparando Pontos Turisticos ***\n");
    printf("%s: %d Pontos\n", jogador1, pontos);
    printf("%s: %d Pontos\n", jogador2, pontos2);

    if (pontos > pontos2)
    {
        printf("Resultado: %s venceu!\n", jogador1);
    } else if (pontos2 > pontos) {
        printf("Resultado: %s venceu!\n", jogador2);
    } else {
      printf("Resultado: Empate!\n");
    }
    break;
  case 5:
    printf("\n*** Comparando Densidade Populacional ***\n");
    printf("%s: %.2f Densidade\n", jogador1, densidade);
    printf("%s: %.2f Densidade\n", jogador2, densidade2);

    if (densidade < densidade2)
    {
        printf("Resultado: %s venceu!\n", jogador1);
    } else if (densidade2 < densidade) {
        printf("Resultado: %s venceu!\n", jogador2);
    } else {
      printf("Resultado: Empate!\n");
    }
    break;
  case 6:
    printf("\n*** Comparando Pib Per Capita ***\n");
    printf("%s: %.2f Reais\n", jogador1, percapita);
    printf("%s: %.2f Reais\n", jogador2, percapita2);

    if (percapita > percapita2)
    {
        printf("Resultado: %s venceu!\n", jogador1);
    } else if (percapita2 > percapita) {
        printf("Resultado: %s venceu!\n", jogador2);
    } else {
      printf("Resultado: Empate!\n");
    }
    break;
  case 7:
    printf("\n*** Comparando Super Poder ***\n");
    printf("%s: %.2f Poder\n", jogador1, superPoder);
    printf("%s: %.2f Poder\n", jogador2, superPoder2);

    if (superPoder > superPoder2)
    {
        printf("Resultado: %s venceu!\n", jogador1);
    } else if (superPoder2 > superPoder) {
        printf("Resultado: %s venceu!\n", jogador2);
    } else {
      printf("Resultado: Empate!\n");
    }
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
