#include <stdio.h>
#include <stdlib.h>


//Leia o valor de 3 contas de luz, some todas as contas e calcule um acréscimo de 15%, informe o valor total e o valor a pagar com acréscimo.

void main (){
	
    int x=1;
    float valor=0, tot=0, vp=0;
    
    while (x <=3){
    	printf("Informe valor da conta %i: R$", x);
    	scanf("%f", &valor);
    	fflush(stdin);
    	x++;
    	
    	tot += valor;
	}
   
		vp = (tot + (tot * 0.15));
		
		printf("\n\nValor total: R$%.2f", tot);
		printf("\nValor a pagar com juros: R$%.2f", vp);
   
    getchar();
}
	
	


