#include <stdio.h>
#include <stdlib.h>

//Ler um número N, some todos os números inteiros de 1 a N, e mostre o resultado obtido.

void main(){
		
	int num=0, soma=0;
	
	
	
	do{
		
		printf("Informe um valor numerico ( 0 ou menos para sair): ");
		scanf("%i", &num);
		fflush(stdin);
		soma += num;
		
	}while(num >= 1);
	
	printf("\n\nSoma total dos numeros: %i", soma);
	
	getchar();
}
	
	
	

	


