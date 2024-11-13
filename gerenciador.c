/* Gerenciador de Estoque
 *
 * Estoque.c
 *
 */

#include <stdio.h>
#include <stdlib.h>

// Estrutura do produto
typedef struct Produto{
	int ID;
	int distancia; // Distancia ate o destinatario
	int data_entrega; 
	struct Produto *prox;
}Produto;

// Informações sobre a Lista de Produtos
typedef struct Lista{
	struct Produto *primeiro;
	struct Produto *ultimo;
}Lista;

/*Pointers auxiliares*/
Produto *aux;
Produto *anterior;

/* malloc para a Lista */
Lista* criarLista(){
	Lista *lista = (Lista*)malloc(sizeof(Lista));
	if(lista != NULL){
		lista->primeiro = NULL;
		lista->ultimo = NULL;
	return lista;
}

/* malloc para os Produtos na Lista */
void adicionarProduto(Lista *l){
	Produto *novo = (Produto*)malloc(sizeof(Produto));
	//get(ID);
	//get(dist);
	//get(data);
}

void compararProdutos(Lista *l, Produto *p){

	return 0;
}

void ordenarProdutos(Lista *l, Produto *p){

	return 0;
}

int main(void){
	printf("Bem vindo ao Gerenciador de stoqueEstoque");
	
	return 0;
}


