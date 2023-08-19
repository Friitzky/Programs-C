#include <stdio.h>
#include <stdlib.h>

void main (){
	
	int op=0, diarias=0, opp=0;
	float vt=0, vp=0, vpg=0, troco=0;
	
	printf("[1] - Quarto Standard - R$200,00 a diaria\n");
	printf("[2] - Quarto Luxo - R$400,00 a diaria\n");
	printf("[3] - Quarto Standard - R$800,00 a diaria\n");
	printf("\n\nEscolha o quarto: ");
	scanf("%i", &op);
	fflush(stdin);
	
	printf("Informe a quantidade de dias: ");
	scanf("%i", &diarias);
	
	switch (op){
		
		case 1:
			vt = 200 * diarias;
			printf("\n\nQuarto escolhido: Quarto Standard");
			printf("\nDiarias contratadas: %i", diarias);
			printf("\nValor a pagar: R$%.2f", vt);
		break;
		
		case 2:
			vt = 400 * diarias;
			printf("\n\nQuarto escolhido: Quarto Luxo");
			printf("\nDiarias contratadas: %i", diarias);
			printf("\nValor a pagar: R$%.2f", vt);
		break;
		
		case 3:
			vt = 800 * diarias;
			printf("\n\nQuarto escolhido: Quarto Super Luxo");
			printf("\nDiarias contratadas: %i", diarias);
			printf("\nValor a pagar: R$%.2f", vt);
		break;
		
		default:
			printf("Opcao invalida!");
			system("cls");
			system("exit");
	}
	
	printf("\n\n[1] - A vista - desconto de 15%%\n");
	printf("[2] - A prazo - juros de 25%%\n");
	printf("[3] - 2x - juros de 30%%\n");
	printf("\n\nEscolha opcao de pagamento: ");
	scanf("%i", &opp);
	fflush(stdin);
	
	if (opp == 1){
		vp = vt - ( vt * 0.15);
	}
	else if( opp == 2){
		vp = vt + (vt *0.25);
	}
	else if (opp == 3){
		vp= vt + ( vt * 0.30) / 2;
	}
	else{
		printf("\nOpcao invalida");
		system("cls");
		system("exit");
	}
	
	printf("\nValor a pagar: R$%.2f", vp);
	
	printf("\n\nInforme a quantida paga: R$");
	scanf("%f", &vpg);
	fflush(stdin);
	
	if ( vpg > vp){
		troco = vpg - vp;
		printf("Troco: R$%.2f", troco);
	}
	else{
		printf("Opcao invalida");
		system("cls");
		system("exit");
	}
	
	getchar();
}


