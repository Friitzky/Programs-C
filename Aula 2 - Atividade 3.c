#include <stdio.h>
#include <stdlib.h>

void main (){
	
	int op=0, qntd=0, opp=0;
	float vp=0, vt=0, vpg=0, troco=0;
	
	
	printf("[1] - Calabresa - R$48,00\n");
	printf("[2] - Quatro queijos - R$52,00\n");
	printf("[3] - Frango com catupiry - R$68,00\n\n");
	printf("\n\nInforme o sabor da pizza: ");
	scanf("%i", &op);
	fflush(stdin);
	printf("Informe a quantidade desejada: ");
	scanf("%i", &qntd);
	fflush(stdin);
	
	if(op == 1){
		vt= 48 * qntd;
		printf("\nSabor escolhido: Calabresa");
		printf("\nQuantidade escolhida: %i", qntd);
		printf("\nValor total: R$%.2f\n\n", vt);
		
	}
	else if(op == 2){
		vt= 52 * qntd;
		printf("\nSabor escolhido: Quatro queijos");
		printf("\nQuantidade escolhida: %i", qntd);
		printf("\nValor total: R$%.2f\n\n", vt);
		
	}
	else if(op == 3){
		vt= 68 * qntd;
		printf("\nSabor escolhido: Frango com catupiry");
		printf("\nQuantidade escolhida: %i", qntd);
		printf("\nValor total: R$%.2f\n\n", vt);
		
	}
	else{
		printf("\nOpcao invalida");
		system("cls");
		system("exit");
	}

	printf("\n[1] - Pagamento a vista - desconto de 10%%\n");
	printf("[2] - Pagamento debito - sem desconto\n");
	printf("[3] - Pagamento credio - juros de 15%%\n");
	printf("\n\nInforme a opcao de pagamento: ");
	scanf("%i", &opp);
	fflush(stdin);
	
	switch (opp){
		
		case 1:
			vp= vt - ( vt * 0.10);
		break;
		
		case 2:
			vp= vt;
		break;
		
		case 3:
			vp= vt + ( vt * 0.15);
		break;
		
		default:
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


