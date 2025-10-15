#include <stdio.h>

int main (){
	char estado1, estado2;
	char codigo1[3], codigo2[3];
	char cidade1[50], cidade2[50];
	int populacao1, populacao2;
	float area1, area2;
	float pib1, pib2;
	int pontos1, pontos2;
	float densidad1 = area1 / populacao1, densidad2 = area2 / populacao2;
	float pibcap1 = pib1/populacao1, pibcap2 = pib2 / populacao2;

	printf("Carta 1:");
	printf("Estado: %s\n",estado1);
	printf("Codigo: %s\n",codigo1);
	printf("Cidade: %s\n",cidade1);
	printf("Populacao: %d\n",populacao1);
	printf("Area: %f\n",area1);
	printf("PIB: %f\n",pib1);
	printf("Pontos: %d\n",pontos1);
	printf("Densidade: %f\n",densidad1);
	printf("PIB x cap: %f\n",pibcap1);

	printf("Carta 2:");
	printf("Estado: %s\n",estado2);
	printf("Codigo: %s\n",codigo2);
	printf("Cidade: %s\n",cidade2);
	printf("Populacao: %d\n",populacao2);
	printf("Area: %f\n",area2);
	printf("PIB: %f\n",pib2);
	printf("Pontos: %d\n",pontos2);
	printf("Densidade: %f\n",densidad2);
	printf("PIB x cap: %f\n",pibcap2);


}