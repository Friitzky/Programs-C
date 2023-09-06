#include <stdio.h>
#include <stdlib.h>


//Fazer um programa que utilizando FOR leia e a acumule o preço de 5 produtos, depois utilizando WHILE leia e acumule o preço de mais 5 produtos. 
//Mostre o total do acumulador 1, acumulador 2 e da soma dos acumuladores.

void main (){
	
    int x=1, y=0; 
    float valor=0, tot1=0, tot2=0, tot=0;
    
    
    for(y=1; y<=5; y++){
    	printf("Informe valor do produto FOR %i: R$", y);
    	scanf("%f", &valor);
    	fflush(stdin);
    	
    	tot1 += valor;
	}
    
    
    while (x <=5){
    	printf("Informe valor do produto WHILE %i: R$", x);
    	scanf("%f", &valor);
    	fflush(stdin);
    	tot2 += valor;
    	x++;
    	
    	
	}
   
   	tot = tot1 + tot2;

	printf("\n\nValor total FOR: R$%.2f", tot1);
	printf("\n\nValor total WHILE: R$%.2f", tot2);
	printf("\n\nValor total: R$%.2f", tot);
	
   
    getchar();
}
	
	


