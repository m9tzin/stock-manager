/* Gerenciador de Estoque
 *
 * Estrutura de Dados I
 *
 * Gabriel Sales Gerardo
 * João Pedro da Costa Reis
 * Matheus Sousa Marinho
 * 
 * Gerenciador v1.0
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "libtools.h"

// Estrutura do produto
typedef struct Produto{
	int ID;
	int distancia;
	int data_entrega; 
	struct Produto *prox;
}Produto;

typedef struct Lista{
	struct Produto *inicio;
	struct Produto *fim;
}Lista;

// Pointers aux
Produto *aux;
Produto *anterior;

Lista* criarLista(){
	Lista *lista = (Lista*)malloc(sizeof(Lista));
	if(lista != NULL){
		lista->inicio = NULL;
		lista->fim = NULL;
	}
	return lista;
}

void adicionarProduto(Lista *l){
	Produto *novo = (Produto*)malloc(sizeof(Produto));
	if(novo == NULL){
		printf("Erro de alocação.");
	}
	// Dados do Produto
	novo->ID = get_int("Insira ID do produto: ");	//get(ID);
	novo->distancia = get_int("Insira a distancia a percorrer (em km): ");	//get(dist);
	novo->data_entrega = get_int("Insira a data de entrega no formato DDMMAAA: ");	//get(data_entrega);

	if(l->inicio == NULL){
		l->inicio = novo;
		novo->prox = NULL;
		l->fim = novo;
	}else{
		novo->prox = l->inicio;
		l->inicio = novo;
	}
}

Produto *anterior;

void removerProduto(Lista *l){
	int find;
	int num;
	if(l->inicio == NULL){
		printf("Nenhum produto foi cadastrado.\n");
	}else{
		num = get_int("Insira o ID do produto a ser removido: ");
		aux = l->inicio;
		anterior = NULL;
		find = 0;
		
		while(aux != 0 && aux->ID != num){
			anterior = aux;
			aux = aux->prox;
	}
		if(aux != NULL){
			if(anterior == NULL){
				l->inicio = aux->prox;
			}else{
				anterior->prox = aux->prox;
			}

			if (aux->prox == NULL){
				l->fim = anterior;
			}
		}else{
			printf("\nProduto não encontrado.\n");
		}
		free(aux);
	}
}

void compararProdutos(Lista *l){

}

void ordenarProdutos(Lista *l){

}

void exibirProdutos(Lista *l){
	int i = 0;
	aux = l->inicio;
	if(aux == NULL){
		printf("\nNenhum produto foi cadastrado.");
		return;
	}
	while (aux != NULL){
		printf("\n");
		printf("Produto [%d]:\n", i);
		printf("ID: %d\n", aux->ID);
		printf("Distância: %d\n", aux->distancia);
		printf("Data de entrega: %d\n", aux->data_entrega);
		aux = aux->prox;
		i++;
	};
}

int main(void){
	printf("-------- Bem vindo(a) ao GERENCIADOR DE ESTOQUES ---------");
	printf("\n\n");
	Lista *lista = (Lista*)malloc(sizeof(Lista));
	if(lista == NULL){
		printf("Erro de alocação.");
	}
	int opc;
	do{	
		printf("\n");
		printf("-------[MENU]-------\n");
		printf(" (1) Adicionar produto\n (2) Remover produto\n (3) Exibir produtos\n (4) Sair\n");
		printf("-------------\n");
		opc = get_int("Insira uma opção:\n ");	
			switch(opc){
				case 1: 
					adicionarProduto(lista);
					break;
				case 2: 
					removerProduto(lista);
					break;
				case 3: 
					printf("-----[PRODUTOS CADASTRADOS]------\n");
					exibirProdutos(lista);
					printf("\n\n");
					break;
				case 4: 
					break;
			}
		}while(opc != 4);

	return 0;
}


