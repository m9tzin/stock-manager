/* Gerenciador de Estoque
 *
 * Estoque.c
 *
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dia;
	int mes;
	int ano;
}Data;

struct Produto{
	int ID;
	int data_entrega;
};

typedef struct Produto Produto;

struct Lista{
	struct Produto *primeiro;
	struct Produto *ultimo;
};

typedef struct Lista Lista;


int main(void){
	return 0;
}


