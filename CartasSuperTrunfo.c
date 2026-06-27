#include <stdio.h>

int main(){

	//Início do Jogo Triunfo
	//Declaração de variáveis das duas cartas
	//Carta 01
	char estd1; // representação da primeira letra do estado (A à H)
	char codc1[4]; // cod da carta
	char cid1[20]; // nome da cidade
	int hab1; // numero de habitantes
	float area1; // tamanho da cidade em km^2
	float pib1; // pib da cidade
	int ntur1; // numero de lugares turisticos na cidade
	//Carta 02
	char estd2; 
	char codc2[4]; 
	char cid2[20]; 
	int hab2; 
	float area2; 
	float pib2; 
	int ntur2; 

	printf("Seja bem-vindo ao Super Trunfo \n");
	printf("Para comecar vamos cadastrar duas cartas\n");
	printf("\n");
	printf("Carta 01 \n");
	printf("Digite a primeira letra do estado escolhido: \n"); // "printf" para imprimir texto
	scanf("%c", &estd1); // "scanf" para receber dados

	printf("Digite o codigo da carta, a primeira letra do estado escolhido mais um numero de 01 a 04 (exemplo B01): \n");
	scanf("%s", &codc1); // especificador de formato como "%s" para receber como string (mais de um caractere)

	printf("Digite o nome da cidade:\n");
	scanf("%s", &cid1);	

	printf("Digite o numero de habitantes da cidade:\n");
	scanf("%d", &hab1);

	printf("Digite a area da cidade escolhida:\n");
	scanf("%f", &area1);

	printf("Digite o pib da cidade:\n");
	scanf("%f", &pib1);

	printf("Digite o numero de pontos turisticos da cidade:\n");
	scanf("%d", &ntur1);

	printf("\n");
	printf("Carta 02 \n");
	printf("Digite a primeira letra do estado escolhido: \n");
	scanf(" %c", &estd2);

	printf("Digite o codigo da carta, a primeira letra do estado escolhido mais um numero de 01 a 04 (exemplo B02): \n");
	scanf("%s", &codc2);

	printf("Digite o nome da cidade:\n");
	scanf("%s", cid2);	

	printf("Digite o numero de habitantes da cidade:\n");
	scanf("%d", &hab2);

	printf("Digite a area da cidade escolhida:\n");
	scanf("%f", &area2);

	printf("Digite o pib da cidade:\n");
	scanf("%f", &pib2);

	printf("Digite o numero de pontos turisticos da cidade:\n");
	scanf("%d", &ntur2);

	 printf("\n");
	 printf("Carta 01\n"
		"Estado: %c\n"
		"Codigo: %s\n"
		"Nome da Cidade: %s\n"
		"Populacao: %d\n"
		"Area: %f km\n"
		"PIB: %f\n"
		"Numero de Pontos Turisticos: %d\n",
		estd1, codc1 , cid1, hab1, area1, pib1, ntur1); 

	printf("\n");
	printf("Carta 02\n"
		"Estado: %c\n"
		"Codigo: %s\n"
		"Nome da Cidade: %s\n"
		"Populacao: %d\n"
		"Area: %f km\n"
		"PIB: %f\n"
		"Numeros de Pontos Turisticos: %d\n",
		estd2, codc2 , cid2, hab2, area2, pib2, ntur2); 


return 0;

}

