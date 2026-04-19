#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int min = 1;
  unsigned int max = 100000000;
  int comparisonType;

  int card,  numberOfTouristAttractions;
  char state;
  char cardCode[5];
  char city[60];
  double pib, superPower;
  unsigned int populationNumber;
  float areaInKm, populationDensity, pibPerCapita;

  int card2, numberOfTouristAttractions2;
  char state2;
  char cardCode2[5];
  char city2[60];
  unsigned int populationNumber2;
  double pib2, superPower2, areaInKm2, populationDensity2, pibPerCapita2;

  
  // Escolhendo como os atributos vão ser comparados
  printf("Qual atributo será usado para comparar as cartas?\n");
  printf("População: 1\n");
  printf("Área em km: 2\n");
  printf("PIB: 3\n");
  printf("Número de pontos turísticos: 4\n");
  printf("Densidade Populacional: 5\n");
  printf("PIB per capita: 6\n");
  printf("Super poder: 7\n");
  printf("Todos os atributos: 8\n");
  printf("Escolha a opção: ");
  scanf("%d", &comparisonType);


  // Verificando se o a opção é valida
  if(comparisonType < 1 || comparisonType > 8){
    printf("Opção invalida!\n");
    return 0;
  }

  // Criando a 1° carta (Carta do usuário)
  printf("--- Crie as cartas para o Super Trunfo ---\n");

  printf("Digite o número da carta: \n");
  scanf("%d", &card);

  printf("Digite a primeira letra do estado: \n");
  scanf(" %c", &state);

  printf("Digite o código da carta: \n");
  scanf("%s", cardCode);

  getchar();

  printf("Digite o nome da cidade: \n");
  fgets(city, sizeof(city), stdin);
  city[strcspn(city, "\n")] = '\0';

  printf("População: \n");
  scanf("%u", &populationNumber);

  printf("Área da cidade em km²: \n");
  scanf("%f", &areaInKm);

  printf("Qual o PIB: \n");
  scanf("%lf", &pib);

  printf("Quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numberOfTouristAttractions);

  populationDensity = populationNumber / areaInKm;
  pibPerCapita = pib / populationNumber;

  printf("=========================================== \n");
  
  // Escolhendo apenas o estado, código e nome da 2° carta (carta do computado)
  printf("--- Escolha o nome para a segunda carta ---\n");

  // Número da carta
  card2 = card + 1;
  
  printf("Digite a primeira letra do estado \n");
  scanf(" %c", &state2);

  printf("Digite o código da carta: \n");
  scanf("%s", cardCode2);

  getchar();

  printf("Digite o nome da cidade: \n");
  fgets(city2, sizeof(city2), stdin);
  city2[strcspn(city2, "\n")] = '\0';

  // O computador vai gerar o restante dos dados Aleatoriamente

  // População: 
  populationNumber2 = (rand() % (max - min + 1) + min);

  // Área da cidade em km²:
  areaInKm2 = (double)(rand() % (max - min + 1) + min);

  //Qual o PIB: 
  pib2 = (double)(rand() % (max - min + 1) + min);

  //Quantidade de pontos turísticos na cidade: 
  numberOfTouristAttractions2 = (rand() % (100 - min + 1) + min);

  populationDensity2 = populationNumber2 / areaInKm2;
  pibPerCapita2 = pib2 / populationNumber2;


  // Calculando o super poder de cada carta
  superPower = (double)populationNumber + areaInKm + pib + numberOfTouristAttractions + pibPerCapita + (1.0 / populationDensity);
  superPower2 = (double)populationNumber2 + areaInKm2 + pib2 + numberOfTouristAttractions2 + pibPerCapita2 + (1.0 / populationDensity2);


  // Mostrando os dados das duas cartas
  printf("=========================================== \n"); 
  printf("=== Resultados ===\n"); 

  printf("Carta: %d\n", card); 
  printf("Estado: %c\n", state);
  printf("Código da Carta: %s\n", cardCode);
  printf("Cidade: %s\n", city);
  printf("População: %u\n", populationNumber);
  printf("Área em Km²: %.2f km²\n", areaInKm);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turísticos: %d\n", numberOfTouristAttractions);
  printf("Densidade Populacional: %.2f hab/km²\n", populationDensity);
  printf("PIB per Capita: R$%.2f\n", pibPerCapita);
  printf("Super Poder: %.2f\n", superPower);


  printf("===========================================\n");

  printf("Carta: %d\n", card2); 
  printf("Estado: %c\n", state2);
  printf("Código da Carta: %s\n", cardCode2);
  printf("Cidade: %s\n", city2);
  printf("População: %u\n", populationNumber2);
  printf("Área em Km²: %.2f km²\n", areaInKm2);
  printf("PIB: R$ %.2f\n", pib2); 
  printf("Pontos Turísticos: %d\n", numberOfTouristAttractions2);
  printf("Densidade Populacional: %.2f hab/km²\n", populationDensity2);
  printf("PIB per Capita: R$%.2f\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPower);

  printf("===========================================\n");

  printf("--- Duelo das cartas ---\n");
  printf("%s vs ", city);
  printf("%s\n", city2);

  switch (comparisonType){
    case 1: { 
      printf("Atributo a ser comparado: População\n");
      if( populationNumber > populationNumber2){
      printf("Carta %d - (%s) Venceu!\n", card, city);

      } else if( populationNumber == populationNumber2){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
      } 
      break;
    }

    case 2: {
      printf("Atributo a ser comparado: Área em Km²\n");
      if( areaInKm > areaInKm2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        
      } else if( areaInKm == areaInKm2){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
      }

      break;
    }
  
    case 3: {
      printf("Atributo a ser comparado: PIB\n");
      if( pib > pib2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        
      } else if( pib == pib2){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
      }
      break;
    }

    case 4: {
      printf("Atributo a ser comparado: Número de pontos turísticos\n");
      if( numberOfTouristAttractions > numberOfTouristAttractions2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        
      } else if( numberOfTouristAttractions == numberOfTouristAttractions2){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
      }
      break;
    }

    case 5: {
      printf("Atributo a ser comparado: Densidade Populacional\n");
      if( populationDensity < populationDensity2){
        printf("Carta %d - (%s) Venceu!\n", card, city);

      } else if(populationDensity ==  populationDensity2 ){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
      }
      break;
    }

    case 6: {

      printf("Atributo a ser comparado: PIB per Capita\n"); 
      if( pibPerCapita > pibPerCapita2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
         
      } else if (pibPerCapita ==  pibPerCapita2 ){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
        
      }
      break;
    }

    case 7: {
      printf("Atributo a ser comparado: Super Poder\n"); 
      if( superPower > superPower2){
        printf("Carta %d - (%s) Venceu!\n", card, city);

      } else if( superPower ==  superPower2 ){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
      }
      break;
    }

    case 8: {
      int cardResult = 0;
      int cardResult2 = 0;

      printf("Atributo a ser comparado: !!Todos!!\n"); 

      printf("População:\n");
      if( populationNumber > populationNumber2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        cardResult += 1;

      } else if( populationNumber == populationNumber2){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
        cardResult2 += 1;
      } 

      printf("Área em Km²:\n");
      if( areaInKm > areaInKm2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        cardResult += 1;

      } else if( areaInKm == areaInKm2){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
        cardResult2 += 1;
      }

      printf("PIB:\n");
      if( pib > pib2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        cardResult += 1;
        
      } else if( pib == pib2){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
        cardResult2 += 1;
      }

      printf("Número de pontos turísticos:\n");
      if( numberOfTouristAttractions > numberOfTouristAttractions2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        cardResult += 1;
        
      } else if( numberOfTouristAttractions == numberOfTouristAttractions2){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
        cardResult2 += 1;
      }

      printf("Densidade Populacional: \n");
      if( populationDensity < populationDensity2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        cardResult += 1;

      } else if(populationDensity ==  populationDensity2 ){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
        cardResult2 += 1;
      }

      printf("PIB per Capita: ");
      if( pibPerCapita > pibPerCapita2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        cardResult += 1;
        
      } else if (pibPerCapita ==  pibPerCapita2 ){
        printf("Empate!! as duas cartas são iguais!\n");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
        cardResult2 += 1;
      }

      printf("Super Poder: ");
      if( superPower > superPower2){
        printf("Carta %d - (%s) Venceu!\n", card, city);
        cardResult += 1;
      } else if( superPower ==  superPower2 ){
        printf("Empate!! as duas cartas são iguais!\n");
      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
        cardResult2 += 1;
      }

      printf("--- Placar Final ---\n");
      printf("Carta %d - Pontos: %d\n", card, cardResult);
      printf("Carta %d - Pontos: %d\n", card2, cardResult2);

      printf("Resultado: ");
      if(cardResult > cardResult2){
        printf("Carta %d - (%s) Venceu!\n", card, city);

      } else if(cardResult == cardResult2){
        printf("!!EMPATE!!");

      } else {
        printf("Carta %d - (%s) Venceu!\n", card2, city2);
      }
      break;
    }

    default:{
      printf("Algo deu errado....");
      break;
    }
  }
  
return 0;
} 
