#include <stdio.h>

int main (){
//declaracion carta 1
	char estado1[3] = "";
	char codigo1[3] ="AA0";
	char cidade1[50] ="Fortaleza";
	unsigned long int populacao1=2000000;
	float area1=5000000;
	float pib1=300;
	int pontos1=200;
	float densidad1 = area1 / populacao1;
	float pibcap1 = pib1/populacao1;
	float superpoder1=populacao1+area1+pib1+pontos1+densidad1+pibcap1;

//declaracion carta2
	char estado2[3] ="";
	char codigo2[3]="AA2";
	char cidade2[50]="Eusebio";
	unsigned long int populacao2=150000;
	float area2=300000;
	float pib2=100;
	int pontos2=10;
	float densidad2 = area2 / populacao2;
	float pibcap2 = pib2 / populacao2;
	float superpoder2=populacao2+area2+pib2+pontos2+densidad2+pibcap2;


//muestra informacao carta1
	printf("Carta 1:\n");
	printf("Estado: %s\n",estado1);
	printf("Codigo: %s\n",codigo1);
	printf("Cidade: %s\n",cidade1);
	printf("Populacao: %d\n",populacao1);
	printf("Area: %f\n",area1);
	printf("PIB: %f\n",pib1);
	printf("Pontos: %d\n",pontos1);
	printf("Densidade: %f\n",densidad1);
	printf("PIB x cap: %f\n",pibcap1);

//mostra informacao carta2
	printf("Carta 2:\n");
	printf("Estado: %s\n",estado2);
	printf("Codigo: %s\n",codigo2);
	printf("Cidade: %s\n",cidade2);
	printf("Populacao: %d\n",populacao2);
	printf("Area: %f\n",area2);
	printf("PIB: %f\n",pib2);
	printf("Pontos: %d\n",pontos2);
	printf("Densidade: %f\n",densidad2);
	printf("PIB x cap: %f\n",pibcap2);


//desafio comparacion


	printf("POPULACAO: %d\n", populacao1 > populacao2);
	printf("AREA:%d\n", area1 > area2);
	printf("PIB:%d\n", pib1 > pib2);
	printf("PONTOS:%d\n", pontos1 > pontos2);
	printf("DENSIDAD:%d\n", densidad1 > densidad2);
	printf("PIB X CAP:%d\n", pibcap1>pibcap2);
	printf("SUPER PODER:%d\n", superpoder1>superpoder2);


	int habilidad;
	printf("ingrese el numero de la habilidad elegida: \n");
	scanf("%d", &habilidad);
	switch (habilidad)
	{
	case 1:
		printf("la opcion elegida es 1");
		break;
	case 2:
		printf("la opcion elegida es 2");
		break;
	case 3:
		printf("la opcion elegida es 3");
		break;
	case 4:
		printf("la opcion elegida es 4");
		break;
	default:
	break;
 }

char *test1 = "Calor";
printf("%c asterisco\n", *test1);

char test2 = "Calor";
printf("%s sin asterisco \n", test2);

	return 0;
}