#include <stdio.h>
#include <stdlib.h>


//Fazer um programa que leia o valor das últimas 5 contas de luz, água e telefone. 
//Faça os cálculos e informe o valor total e o valor médio de cada conta.

void main (){
	
    int x= 1;
    float totl = 0, tota = 0, tott = 0;
    float medl=0, meda=0, medt=0;
    float conta;

    while ( x <= 5){
    	printf("Valor conta de Luz %i: ", x);
    	scanf("%f", &conta);
    	totl = totl + conta;
    	x++;	
	}
		
	x=1;
	while ( x <= 5){
    	printf("Valor conta de Agua %i:", x);
    	scanf("%f", &conta);
    	tota = tota + conta;
    	x++;
	}
	
	x=1;
	while ( x <= 5){
    	printf("Valor conta de Telefone %i:", x) ;
    	scanf("%f", &conta);
    	tott = tott + conta;
    	x++;
  	}
	
	
	
	medl = totl / 5;
	meda = tota / 5;
	medt = tott / 5;
	
	printf("\n\nTotal das contas de Luz: R$%5.2f", totl);
	printf("\nMedia das contas de Luz: R$%5.2f", medl);
	
	printf("\n\nTotal das contas de Agua: R$%5.2f", tota);
	printf("\nMedia das contas de Agua: R$%5.2f", meda);
	
	printf("\n\nTotal das contas de Telefone: R$%5.2f", tott);
	printf("\nMedia das contas de Telefone: R$%5.2f", medt);
   
   
    getchar();
}

	


