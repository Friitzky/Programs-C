#include <stdio.h>
#include <stdlib.h>

//Leia a quantidade de clientes a serem atendidos. Montar um laço que execute a quantidade de vezes lida. 
//Dentro desse laço leia quantos produtos o cliente pretende comprar. Dentro desse segundo laço ler e acumular o preço dos produtos. 
//Ao final mostrar o valor da compra e voltar a ler dados dos próximo cliente até que não tenha mais clientes.

void main(){
		
		int clientes=0, prod=0, x=1, y=1;
		float preco=0;
		
		
		printf("Informe a quantidade de clientes a serem atendidos: ");
		scanf("%i", &clientes);
		fflush(stdin);
		
		for(x=1; x <= clientes; x++){
			
			printf("Clientes %i - Informe a quantidade de produtos a comprar:", x);
			scanf("%i", &prod);
			fflush(stdin);
			
			
			float totpreco=0;
			
			for(y=1; y <=prod; y++){
				
				printf("Digite o preco do produto %i: R$", y);
				scanf("%f", &preco);
				fflush(stdin);
				
				totpreco += preco;	
			}
			
			printf("O valor de compra do Cliente %i e: R$%.2f\n", x, totpreco);
		}		
		
}
		
		
		
		
		
		
		
		

	
	
	

	


