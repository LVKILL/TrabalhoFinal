#include <stdio.h>
#include "header.h"

void menuprincipal(){

	int funcao;
	printf("\n 1 - rodar programa de atendimento ");
	printf("\n 2 - rodar programa do cliente");
	printf("\n 5 - Fechar Programa ");
	printf("\n\n Escolha uma opcao: ");
	scanf("%d",&funcao);
	 switch(funcao){

	 	case 1:
	 	submenu1();
	 	break;


	 	case 2:
	 	submenu2();
	 	break;

	 	default:
			// se for escolhida a opção 5, ele pula o while utilizando continue para isso 
			if( escolha==5){
			continue;
			}
					// caso o usuário digite um numero acima de 5, ele irá informar que nao existe essa opção
			printf("\n\n Nenhuma opcao foi escolhida ");
			break;
		}
		if( escolha==5) printf("\n\n O Programa foi fechado");
	
}

			
	void submenu1(){
		int op; 
		printf("\n\n ----------------------- ");
		printf("\n 1 - Verifica Fila ");
		printf("\n 2 - Chamar senhas");
		printf("\n 5 - Fechar Programa ");
		printf("\n\n Escolha uma opcao: ");
		scanf("%d",&op);

	// estrutura switch
		switch (op) {
			case 1:	
			fila_imprime();///tem que  listar todas a senhas da fila
			break;
			
			case 2:
			fila_retira();//chamar funçao retira elemnto da fila e retira o primeiro elemento da fila e reordenar a fila
			break;
			// opção padrão
			default:

			if( escolha==5){
			continue;
			}
					// caso o usuário digite um numero acima de 5, ele irá informar que nao existe essa opção
			printf("\n\n Nenhuma opcao foi escolhida ");
			break;
		
		if( escolha==5) printf("\n\n O Programa foi fechado");
	}
}

	void submenu2(){
		int op; 
		printf("\n\n ----------------------- ");
		printf("\n 1 - Escolher senha normal ");
		printf("\n 2 - Escolher senha prioritaria");
		printf("\n 5 - Fechar Programa ");
		printf("\n\n Escolha uma opcao: ");
		scanf("%d",&op);

	// estrutura switch
		switch (op) {
			case 1:	
			fila_insere();
			break;
			
			case 2:
			fila_insere2();
			break;
			// opção padrão
			default:
			// se for escolhida a opção 5, ele pula o while utilizando continue para isso 
			if( escolha==5){
			continue;
					}
					// caso o usuário digite um numero acima de 5, ele irá informar que nao existe essa opção
			printf("\n\n Nenhuma opcao foi escolhida ");
			break;
			}
		if( escolha==5){
			continue;
			}
					// caso o usuário digite um numero acima de 5, ele irá informar que nao existe essa opção
			printf("\n\n Nenhuma opcao foi escolhida ");
			break;
		
		if( escolha==5) printf("\n\n O Programa foi fechado");
	}