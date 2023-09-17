#include <stdio.h>
#include <stdlib.h>

//Leia a quantidade de clientes a serem atendidos. Montar um laço que execute a quantidade de vezes lida. 
//Dentro desse laço leia quantos produtos o cliente pretende comprar. Dentro desse segundo laço ler e acumular o preço dos produtos. 
//Ao final mostrar o valor da compra e voltar a ler dados dos próximo cliente até que não tenha mais clientes.

void main(){
		
		int clientes=0, prod=0, x=1, y=1, z=0;
		float preco=0;
		
		//PRIMEIRO LAÇO
		
		while(x >=1){
			
		
			z++;
			
			printf("Cliente %i - Informe a quantidade de produtos a comprar:", z);
			scanf("%i", &prod);
			fflush(stdin);
			
			
			if(prod <=0){
				break;
			}
		
			
			
			float totpreco=0;
			
			
			//SEGUNDO LAÇO
		
			for(y=1; y <=prod; y++){
				
				printf("Digite o preco do produto %i: R$", y);
				scanf("%f", &preco);
				fflush(stdin);
				
				totpreco += preco;	
			}
			
			printf("O valor de compra do Cliente %i e: R$%.2f\n", x, totpreco);
		}		
		
		printf("\nPrograma encerrado....");
		
	getchar();
}
		
		
		
		
		
		
		
		

	
	
	

	


