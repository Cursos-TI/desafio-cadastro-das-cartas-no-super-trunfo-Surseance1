#include <stdio.h>

int main () {

 //Área para definição das variaveis para armazenamento

 char estado1[5], estado2[5];
 char códigocarta1[20], códigocarta2[50];
 char nomecidade1[50], nomecidade2[50];
 int população1, população2;
 float área1, área2;
 float pib1, pib2;
 int pontosturísticos1, pontosturísticos2;

 //Área para exibição das cidades

 printf("Digite a letra do estado da primeira carta de 'A a H' \n");
 scanf("%s", estado1);

 printf("Digite a letra do estado da segunda carta de 'A a H' \n");
 scanf("%s", estado2);

 printf("Digite o código da primeira carta \n");
 scanf("%s", códigocarta1);

 printf("Digite o código da segunda carta \n");
 scanf("%s", códigocarta2);

 printf("Digite o nome da cidade da primeira carta \n");
 scanf("%s", nomecidade1);

 printf("Digite o nome da cidade da segunda carta \n");
 scanf("%s", nomecidade2);

 printf("Digite a população da cidade da primeira carta \n");
 scanf("%d", &população1);

 printf("Digite a população da cidade da segunda carta \n");
 scanf("%d", &população2);

 printf("Informe a área em km² da cidade da primeira carta \n");
 scanf("%f", &área1);

 printf("Informe a área em km² da cidade da segunda carta \n");
 scanf("%f", &área2);

 printf("Informe o PIB da cidade da primeira carta \n");
 scanf("%f", &pib1);

 printf("Informe o PIB da cidade da segunda carta \n");
 scanf("%f", &pib2);

 printf("Digita a quantidade de pontos turísticos existentes na cidade da primeira carta \n");
 scanf("%d", &pontosturísticos1);

 printf("Digita a quantidade de pontos turísticos existentes na cidade da segunda carta \n");
 scanf("%d", &pontosturísticos2);


 //Exibição das cartas para o usuário

 printf("\nInformações da primeira carta \n"); 
 printf("Estado: %s\n", estado1);
 printf("Código: %s\n", códigocarta1);
 printf("Nome da Cidade: %s\n", nomecidade1);
 printf("População: %d\n", população1);
 printf("Área: %.0fkm²\n", área1);
 printf("Pib: %.0f Milhões de Reais\n", pib1);
 printf("Pontos Turísticos da cidade: %d\n", pontosturísticos1);

 printf("\nInformações da segunda carta \n"); 
 printf("Estado: %s\n", estado2);
 printf("Código: %s\n", códigocarta2);
 printf("Nome da Cidade: %s\n", nomecidade2);
 printf("População: %d\n", população2);
 printf("Área: %.0fkm²\n", área2);
 printf("Pib: %.0f Milhões de Reais\n", pib2);
 printf("Pontos Turísticos da cidade: %d\n", pontosturísticos2);


 return 0;


}
