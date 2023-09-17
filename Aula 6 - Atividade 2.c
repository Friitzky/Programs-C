#include <stdio.h>
#include <stdlib.h>

//Perguntar ao usuário quantos alunos tem na sala de aula. Em seguida, através de um laço/looping, 
//entrar com duas notas de prova de todos os alunos da sala, um por vez, fazendo o cálculo e mostrando a média do aluno. 
//Durante o cálculo acumular a média de todos os alunos e ao final do cálculo de média de todos os alunos, mostrar a média da turma.

void main(){
		
	int alunos=0, x=0;
	float meda=0, medsala=0, nota1=0, nota2=0, totnotas=0;
	
	printf("Informe a quantidade de alunos na sala: ");
	scanf("%i", &alunos);
	
	for(x=1; x <= alunos; x++){
		
		printf("Informe a primeira nota do aluno %i:", x);
		scanf("%f", &nota1);
		
		printf("Informe a segunda nota do aluno %i: ", x);
		scanf("%f", &nota2);
		
		meda = (nota1 + nota2) / 2;
		printf("\nMedia do aluno %i: %.2f  \n\n", x, meda);
		
		totnotas += meda;
	}
	
	medsala = totnotas / alunos;
	printf("\nMedia total da sala: %.2f", medsala);
	
	getchar();
}
	
	
	

	


