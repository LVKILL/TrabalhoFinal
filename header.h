#include <stdio.h> 
#include <stdlib.h> 
#define N 50 

typedef struct fila{
	int n, inicio; //posição de retirada e posição de inserção 
	float vet[N]; 
}Fila; 


//função que cria a fila:
Fila* cria_fila(){
	Fila *f = (Fila*)malloc(sizeof(Fila));
	f->n = 0;
	f->inicio = 0;
	return f;
}

//função  para inserir senha na fila
void fila_insere(Fila *f, float v){
	if(f->n == N){ // fila ta cheia
		printf("Senha esgota . Volte outra hora! \n");
		return;
	}// caso contrario insere nova senha na fila
	f->vet[f->n] = v;
	f->n++;
}	
float fila_retira(Fila *f){
	float v;
	if(fila_vazia(f)){
		printf("A fila esta vazia.\n");
		retunr -1;
	}// retira o elemento da fila:
v = f->vet[f->inicio];
f->inicio++;
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
int fila_vazia (Fila *f){
	return(f->inicio == 5 || f->n == 0);
}

//liberar espaço do elemento removido
void fila_libera (Fila *f){
	free(f);
}

//mostra os elemntos da fila:
void fila_imprime (Fila *f){
	printf("Status da fila atual: \n");
	int i;
	for (i = f->inicio; i < f->n; i++){
		printf("%0.f\n", f->vet[i]);
	}
	printf("%s\n", );
	
}

