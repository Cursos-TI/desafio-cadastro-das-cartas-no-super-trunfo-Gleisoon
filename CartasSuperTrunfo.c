#include <stdio.h>

int main(){

  int populacao01, populacao02;
  int numeros_pontos_turisticos01, numeros_pontos_turisticos02;
  float pib01, pib02;
  float area01, area02;
  char codigo01[4];
  char codigo02[4];
  char cidade01[50];
  char cidade02[50];
  char estado01[50];
  char estado02[50];
  
  printf("\nBem-vindo ao jogo de Super Trunfo\n");
  printf("Dados da Carta 01\n\n");

  printf("Estado:");
  scanf("%s", estado01);

  printf("Cidade:");
  scanf("%s", cidade01);

  printf("Codigo da carta:");
  scanf("%s", codigo01);

  printf("Area(km):");
  scanf("%f", &area01);

  printf("Populacao:");
  scanf("%d", &populacao01);

  printf("Pontos turisticos:");
  scanf("%d", &numeros_pontos_turisticos01);

  printf("Pib:");
  scanf("%f", &pib01);

 printf("\nDados das Carta 2\n\n");

 printf("Estado:");
  scanf("%s", estado02);

  printf("Cidade:");
  scanf("%s", cidade02);

  printf("Codigo da carta:");
  scanf("%s", codigo02);

  printf("Area(km):");
  scanf("%f", &area02);

  printf("Populacao:");
  scanf("%d", &populacao02);

  printf("Pontos turisticos:");
  scanf("%d", &numeros_pontos_turisticos02);

  printf("Pib:");
  scanf("%f", &pib02);


return 0;


}
