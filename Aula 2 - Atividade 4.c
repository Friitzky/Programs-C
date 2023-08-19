#include <stdio.h>
#include <stdlib.h>

void main (){
	
	int op=0;
	char cargo[100];
	float salario=0, nsala= 0;
	
	printf("Informe seu salario: R$");
	scanf("%f", &salario);
	printf("[1] - Analista de sistemas\n");
	printf("[2] - Programador\n");
	printf("[3] - Operador de sistemas\n\n");
	printf("\n\nInforme seu cargo: ");
	scanf("%i", &op);
	fflush(stdin);
	
	if(op == 1){
		
		nsala= salario + 100 + ( salario * 0.10);
		printf("\nCargo: Analista de sistemas");
		printf("\nSalario: R$%.2f", salario);
		printf("\nNovo salario: R$%.2f\n", nsala);
		
	}
	else if(op == 2){
		nsala= salario + 200 + ( salario * 0.15);
		printf("\nCargo: Programador");
		printf("\nSalario: R$%.2f", salario);
		printf("\nNovo salario: R$%.2f\n", nsala);
		
	}
	else if(op == 3){
		nsala= salario + 50 + ( salario * 0.25);
		printf("\nCargo: Operador de sistemas");
		printf("\nSalario: R$%.2f", salario);
		printf("\nNovo salario: R$%.2f", nsala);
		
	}
	else{
		system("cls");
		system("exit");
		
	}

	
}


