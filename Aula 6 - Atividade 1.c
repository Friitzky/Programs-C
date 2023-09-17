#include <stdio.h>
#include <stdlib.h>

//1- Num mesmo programa mostrar todos os números PARES de 1 a 10 utilizando FOR, 
//depois todos os números IMPARES de 1 a 10 utilizando WHILE e depois todos os números de 1 a 10 utilizando DO WHILE.

void main(){
		
	int x=0; 
	
	for(x=2; x<=10; x+=2){
		printf("%i\n", x);
	}
	
	system("pause");
	system("cls");
	
	x=-1;
	while (x <= 8){
		x += 2;
		printf("%i\n", x);
	}
	
	system("pause");
	system("cls");
	
	x=0;
	do{
		x += 1;
		printf("%i\n", x);
	}while(x <=9);
	
	system("pause");
	system("cls");
	
	
	
	
	
	
	
	
	
	
	
	

	
	
}


	


