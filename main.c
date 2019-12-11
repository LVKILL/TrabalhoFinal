/*
 * main.c
 * 
 * Copyright 2019 Luis Reis <luisreis@debian440>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>
#include "header.h"

fila_cria();
fila_insere();
fila_retira();
fila_imprime();
fila_vazia();
fila_libera();


int main(int argc, char **argv){
	
	FILE *file;
	file = fopen("senhas.txt", "a");
	if(file == NULL){
		printf("Impossível abrir o arquivo de senhas!\n");
		return 0;
	}
	fprintf(file, "\n altera dados no arquivo");
	fwrite(f,sizeof(struct Fila),1,file);
	fclose(file);
 	return 0;
}
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
			fila_imprime();
			break;
			
			case 2:
			fila_retira();
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
			fila_retira();
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