/* Gerenciador de Estoque
 *
 * Estrutura de Dados I
 *
 * Gabriel Sales Gerardo
 * João Pedro da Costa Reis
 * Matheus Sousa Marinho
 * 
 * Gerenciador v1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include "libtools.h"

// Estrutura do produto
typedef struct Produto{
	int ID;
	int distancia; // Distancia ate o destinatario
	int data_entrega; 
	struct Produto *prox;
}Produto;

// Informações sobre a Lista de Produtos
typedef struct Lista{
	struct Produto *inicio;
	struct Produto *fim;
}Lista;

/*Pointers auxiliares*/
Produto *aux;
Produto *anterior;

/* malloc para a Lista */
Lista* criarLista(){
	Lista *lista = (Lista*)malloc(sizeof(Lista));
	if(lista != NULL){
		lista->inicio = NULL;
		lista->fim = NULL;
	return lista;
}

/* malloc para os Produtos na Lista */
void adicionarProduto(Lista *l){
	Produto *novo = (Produto*)malloc(sizeof(Produto));
	get_int("Insira ID do produto: ");	//get(ID);
	
	if(l->inicio == NULL){
		l->inicio = novo;
		novo->prox = NULL;
		l->fim = novo;
	}else{
		novo->prox = l->inicio;
		l->inicio = novo;
	}
}

void compararProdutos(Lista *l){

}

void ordenarProdutos(Lista *l){

}

void exibirProdutos(Lista *l){
	while (aux != NULL){
		int i = 0;
		printf("Produto [i]:\n
				ID: %d", aux->ID->num);
		aux = aux->prox;
	}
}

int main(void){
	printf("Bem vindo ao Gerenciador de stoqueEstoque");
	printf("\n\n");
	Lista *lista = (Lista*)malloc(sizeof(Lista));
	adicionarProduto(lista);
	exibirProdutos(lista);

	return 0;
}


