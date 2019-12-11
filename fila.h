#include <stdio.h> 
#include <stdlib.h> 
#define N 50 

typedef struct{
	int inicio, fim; //posição de retirada e posição de inserção 
	float vet[N]; 
}Fila; 


//função que cria a fila:
Fila* cria_fila(void){
	Fila* f = (Fila*)malloc(sizeof(Fila));
	f->inicio = f->fim = 0; 
	return f;
}

//função  para inserir senha na fila
void insere_fila(Fila* f, float v){
// fila cheia : incrementa(fim) == inicio
		printf("Senha esgota . Volte outra hora! \n");
		exit(1);
	}// caso contrario insere nova senha na fila
	f->vet[f->fim] = v;
	f->fim = incrementa(f->fim);
}	
float retira_fila(Fila *f){
	float v;
	if(vazia(f){
		printf("A fila esta vazia.\n");
		exit(1);
	}// retira o elemento da fila:
	v = f->vet[f->inicio];
	f->inicio = incrementa(f->inicio);
	retunr v;
}

//função que incrementa o vetor da fila:
int incrementa(int i){
	if(i == N-1) //verifica se o tamanha da fila foi atigindo
		return 0;
			else 
			return i+1; incrementa o tamanho
}

// fila vazia: inicio == fim
int vazia (Fila* f){
	return (f->inicio == f-> fim);
}

//liberar espaço do elemento removido
void libera (Fila* f){
	free(f);
}

//mostra os elemntos da fila:
void imprime (Fila* f){
	int i;
	for (i = f->inicio; i!=fim; i=incrementa(i)){
		printf("%f\n", f->vet[i]);
	}
}

