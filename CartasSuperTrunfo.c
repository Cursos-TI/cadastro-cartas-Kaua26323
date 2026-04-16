#include <stdio.h>
#include <string.h>

int main() {
  int card,  numberOfTouristAttractions;
  char state;
  char cardCode[5];
  char city[60];
  double pib, superPower;
  unsigned int cardResult;
  unsigned long int populationNumber;
  float areaInKm, populationDensity, pibPerCapita;

  int card2, numberOfTouristAttractions2;
  char state2;
  char cardCode2[5];
  char city2[60];
  double pib2, superPower2;
  unsigned int cardResult2;
  unsigned long int populationNumber2;
  float areaInKm2, populationDensity2, pibPerCapita2;

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

  printf("Número de habitantes: \n");
  scanf("%lu", &populationNumber);

  printf("Área da cidade em km²: \n");
  scanf("%f", &areaInKm);

  printf("Qual o PIB: \n");
  scanf("%lf", &pib);

  printf("Quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numberOfTouristAttractions);

  populationDensity = populationNumber / areaInKm;
  pibPerCapita = pib / populationNumber;

  printf("=========================================== \n");

  printf("--- Crie a segunda carta para o Super Trunfo ---\n");

  printf("Digite o número da carta:: \n");
  scanf("%d", &card2);
  
  printf("Digite a primeira letra do estado \n");
  scanf(" %c", &state2);

  printf("Digite o código da carta: \n");
  scanf("%s", cardCode2);

  getchar();

  printf("Digite o nome da cidade: \n");
  fgets(city2, sizeof(city2), stdin);
  city2[strcspn(city2, "\n")] = '\0';

  printf("Número de habitantes: \n");
  scanf("%lu", &populationNumber2);

  printf("Área da cidade em km²: \n");
  scanf("%f", &areaInKm2);

  printf("Qual o PIB: \n");
  scanf("%lf", &pib2);

  printf("Quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numberOfTouristAttractions2);

  populationDensity2 = populationNumber2 / areaInKm2;
  pibPerCapita2 = pib2 / populationNumber2;


  printf("=========================================== \n"); 
  printf("=== Resultados ===\n"); 

  printf("Carta: %d\n", card); 
  printf("Estado: %c\n", state);
  printf("Código da Carta: %s\n", cardCode);
  printf("Cidade: %s\n", city);
  printf("Número de habitantes: %lu\n", populationNumber);
  printf("Área em Km²: %.2f km²\n", areaInKm);
  printf("PIB: %.2f\n", pib);
  printf("Pontos Turísticos: %d\n", numberOfTouristAttractions);
  printf("Densidade Populacional: %.2f hab/km²\n", populationDensity);
  printf("PIB per Capita: R$%.2f\n", pibPerCapita);

  printf("===========================================\n");

  printf("Carta: %d\n", card2); 
  printf("Estado: %c\n", state2);
  printf("Código da Carta: %s\n", cardCode2);
  printf("Cidade: %s\n", city2);
  printf("Número de habitantes: %lu\n", populationNumber2);
  printf("Área em Km²: %.2f km²\n", areaInKm2);
  printf("PIB: R$ %.2f\n", pib2); 
  printf("Pontos Turísticos: %d\n", numberOfTouristAttractions2);
  printf("Densidade Populacional: %.2f hab/km²\n", populationDensity2);
  printf("PIB per Capita: R$%.2f\n", pibPerCapita2);

  printf("===========================================\n");

  superPower = (double)populationNumber + areaInKm + pib + numberOfTouristAttractions + pibPerCapita + (1.0 / populationDensity);
  superPower2 = (double)populationNumber2 + areaInKm2 + pib2 + numberOfTouristAttractions2 + pibPerCapita2 + (1.0 / populationDensity2);



  printf("--- Duelo das cartas ---\n");

  printf("População: ");
  if( populationNumber > populationNumber2){
    printf("Carta %d - (%s) Venceu!\n", card, city);
    cardResult += 1;
  } else {
    if( populationNumber == populationNumber2){
      printf("Empate!! as duas cartas são iguais!\n");
    } else {
      printf("Carta %d - (%s) Venceu!\n", card2, city2);
      cardResult2 += 1;
    }
  }

  printf("Área em Km²: ");
  if( areaInKm > areaInKm2){
    printf("Carta %d - (%s) Venceu!\n", card, city);
    cardResult += 1;
  }  else {
    if( areaInKm == areaInKm2){
      printf("Empate!! as duas cartas são iguais!\n");
    } else {
      printf("Carta %d - (%s) Venceu!\n", card2, city2);
      cardResult2 += 1;
    }
  }

  printf("PIB: "); 
  if( pib > pib2){
    printf("Carta %d - (%s) Venceu!\n", card, city);
    cardResult += 1;
  } else {
    if( pib == pib2){
      printf("Empate!! as duas cartas são iguais!\n");
    } else {
      printf("Carta %d - (%s) Venceu!\n", card2, city2);
      cardResult2 += 1;
    }
  }

  printf("Pontos Turísticos: ");
  if( numberOfTouristAttractions > numberOfTouristAttractions2){
    printf("Carta %d - (%s) Venceu!\n", card, city);
    cardResult += 1;
  } else {
    if( numberOfTouristAttractions == numberOfTouristAttractions2){
      printf("Empate!! as duas cartas são iguais!\n");
    } else {
      printf("Carta %d - (%s) Venceu!\n", card2, city2);
      cardResult2 += 1;
    }
  }

  printf("Densidade Populacional: ");
  if( populationDensity < populationDensity2){
    printf("Carta %d - (%s) Venceu!\n", card, city);
    cardResult += 1;
  } else {
    if( populationDensity ==  populationDensity2 ){
      printf("Empate!! as duas cartas são iguais!\n");
    } else {
      printf("Carta %d - (%s) Venceu!\n", card2, city2);
      cardResult2 += 1;
    }
  }

  printf("PIB per Capita: ");
  if( pibPerCapita > pibPerCapita2){
    printf("Carta %d - (%s) Venceu!\n", card, city);
    cardResult += 1;
  } else {
    if( pibPerCapita ==  pibPerCapita2 ){
      printf("Empate!! as duas cartas são iguais!\n");
    } else {
      printf("Carta %d - (%s) Venceu!\n", card2, city2);
      cardResult2 += 1;
    }
  }
 
  printf("Super Poder: ");
  if( superPower > superPower2){
    printf("Carta %d - (%s) Venceu!\n", card, city);
    cardResult += 1;
  } else {
    if( superPower ==  superPower2 ){
      printf("Empate!! as duas cartas são iguais!\n");
    } else {
      printf("Carta %d - (%s) Venceu!\n", card2, city2);
      cardResult2 += 1;
    }
  }

  printf("--- Placar Final ---\n");
  printf("Carta %d - Pontos: %u\n", card, cardResult);
  printf("Carta %d - Pontos: %u\n", card2, cardResult2);

  printf("Resultado: ");
  if(cardResult > cardResult2){
    printf("Carta %d - (%s) Venceu!\n", card, city);
  } else {
    if(cardResult == cardResult2){
      printf("!!EMPATE!!");
    } else{
      printf("Carta %d - (%s) Venceu!\n", card2, city2);
    }
  }
  
return 0;
} 
