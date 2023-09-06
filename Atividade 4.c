#include <stdio.h>
#include <stdlib.h>


//Leia o preço de 8 produtos, faça o cálculo e informe o valor a pagar. 
//Acesse a forma de pagamento 1 – para a vista desconto de 10% ou 2 para a prazo acréscimo de 15%. Em caso de opção invalidada, mostre uma mensagem e cancele a execução do programa.

void main (){
	
    int x=1, op=0;
    float valor=0, tot=0, vp=0;
    
    while (x <=8){
    	printf("Informe valor do produto %i: R$", x);
    	scanf("%f", &valor);
    	fflush(stdin);
    	x++;
    	
    	tot += valor;
	}
   
	printf("\n\nFormas de pagamento");
	printf("\n\n[1] - A vista - Desconto de 10%%");
	printf("\n[2] - A prazo - Acrescimo de 15%%");
	printf("\n\nEscolha a forma de pagamento: ");
	scanf("%i", &op);
	fflush(stdin);
	
	
	switch (op){
	
		case 1: 
			vp = tot - (tot * 0.10);
		break;
		
		case 2:
			vp = tot + (tot * 0.15) ;
		break;
		
		default:
			printf("\nOpcao invalida");
			system("pause");
		break;
	}

	
	printf("\n\nValor total: R$%.2f", tot);
	printf("\nValor a pagar: R$%.2f", vp);
   
    getchar();
}
	
	


