#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  int card, populationNumber, numberOfTouristAttractions;
  char state;
  char cardCode[5];
  char city[60];
  float areaInKm, pib;

  int card2, populationNumber2, numberOfTouristAttractions2;
  char state2;
  char cardCode2[5];
  char city2[60];
  float areaInKm2, pib2;

  printf("--- Crie as cartas para o Super Trunfo ---\n");

  printf("Digite o número da carta: \n");
  scanf("%d", &card);

  printf("Digite o estado: \n");
  scanf(" %c", &state);

  printf("Digite o código da carta: \n");
  scanf("%s", cardCode);

  getchar();

  printf("Digite o nome da cidade: \n");
  fgets(city, sizeof(city), stdin);
  city[strcspn(city, "\n")] = '\0';

  printf("Número de habitantes: \n");
  scanf("%d", &populationNumber);

  printf("Área da cidade em km²: \n");
  scanf("%f", &areaInKm);

  printf("Qual o PIB: \n");
  scanf("%f", &pib);

  printf("Quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numberOfTouristAttractions);

  printf("=========================================== \n");

  printf("--- Crie a segunda carta para o Super Trunfo ---\n");

  printf("Digite o número da carta:: \n");
  scanf("%d", &card2);
  
  printf("Digite o estado \n");
  scanf(" %c", &state2);

  printf("Digite o código da carta: \n");
  scanf("%s", cardCode2);

  getchar();

  printf("Digite o nome da cidade: \n");
  fgets(city2, sizeof(city2), stdin);
  city2[strcspn(city2, "\n")] = '\0';

  printf("Número de habitantes: \n");
  scanf("%d", &populationNumber2);

  printf("Área da cidade em km²: \n");
  scanf("%f", &areaInKm2);

  printf("Qual o PIB: \n");
  scanf("%f", &pib2);

  printf("Quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &numberOfTouristAttractions2);

  printf("=========================================== \n"); 
  printf("=== Resultados ===\n"); 

  printf("Carta: %d\n", card); 
  printf("Estado: %c\n", state);
  printf("Código da Carta: %s\n", cardCode);
  printf("Cidade: %s\n", city);
  printf("Número de habitantes: %d\n", populationNumber);
  printf("Área em Km²:%2.f km²\n", areaInKm);
  printf("PIB: %2.f\n", pib);
  printf("Pontos Turísticos: %d\n", numberOfTouristAttractions);


  printf("===========================================\n");

  printf("Carta: %d\n", card2); 
  printf("Estado: %c\n", state2);
  printf("Código da Carta: %s\n", cardCode2);
  printf("Cidade: %s\n", city2);
  printf("Número de habitantes: %d\n", populationNumber2);
  printf("Área em Km²:%2.f km²\n", areaInKm2);
  printf("PIB: R$ %2.f\n", pib2); 
  printf("Pontos Turísticos: %d\n", numberOfTouristAttractions2);

  
  

return 0;
} 
