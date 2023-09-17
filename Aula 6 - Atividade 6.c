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

			
			float totpreco=0;
			int z=0;
			
			while(y >= 1){
				
				z++;
				printf("Cliente %i - Digite o preco do produto %i: R$", x, z);
				scanf("%f", &preco);
				fflush(stdin);
				
				if(preco <=0){
					break;
				}
				
				totpreco += preco;	
			}
			
			printf("O valor de compra do Cliente %i e: R$%.2f\n", x, totpreco);
		}		
	
	printf("\nPrograma Encerrado...");
	getchar();	
}
		
		
		
		
		
		
		
		

	
	
	

	


