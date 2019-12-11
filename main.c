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
//#include "fila.h"

int main(int argc, char **argv){
	int op; 

	
	FILE *file;
	file = fopen("senhas.txt", "a");
	if(file == NULL){
		printf("Impossível abrir o arquivo de senhas!\n");
		return 0;
	}
	fprintf(file, "\n altera dados no arquivo");
	fwrite(f,sizeof(struct Fila),1,file);
	printf("%i " , PR);
	fclose(file);
 	
	return 0;
}

void menu{

	printf("\n\n ----------------------- ");
	printf("\n 1 - Opcao 1 ");
	printf("\n 2 - Opcao 2 ");
	printf("\n 3 - Opcao 3 ");
	printf("\n 4 - Opcao 4 ");
	printf("\n 5 - Fechar Programa ");
	printf("\n\n Escolha uma opcao: ");
	scanf("%d",&op);

// estrutura switch
	switch (op) {

		case 1:	
		printf("\n\n Opcao escolhida: 1 ");
		break;
		
		case 2:
		printf("\n\n Opcao escolhida: 2 ");
		break;


		case 3:
		printf("\n\n Opcao escolhida: 3 ");
		break;
		
		case 4:
		printf("\n\n Opcao escolhida: 4 ");
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

}

	if( escolha==5){
	printf("\n\n O Programa foi fechado");
	getch(); 

}

