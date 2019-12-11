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
#include "menu.h"
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
	fwrite(Fila *fi=fila_cria);
	fwrite(h.f_name, h.last, h.s,h.g ,sizeof(struct Fila),1,oput);
	fclose(file);
 	return 0;
}
