//libtools.h
#ifndef LIBTOOLS_H
#define LIBTOOLS_H

#include <stdio.h>
#include <string.h>

// Func
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


// int
int get_int(const char *input) {
    int value;
    printf("%s", input);
    if (scanf("%d", &value) != 1) {
        printf("Erro: entrada inv�lida.\n");
        clear_input_buffer();
        return -1; // Valor inv�lido para sinalizar erro caso o usu�rio
    }              // digite um letra ao inv�s de n�mero
    clear_input_buffer();
    return value;
}

// float
float get_float(const char *input){
	float value;
	printf("%s", input);
	scanf("%f", &value);
	clear_input_buffer();
	return value;
}

//string
void get_string(const char *input, char *str, int length){
	printf("%s", input);
	fgets(str, length, stdin);
	//remove last caracter (null)
	size_t len = strlen(str)-1;
	if(str[len] == '\n'){
		str[len] = '\0';
	}
}

// Main menu
void exibirMenu() {
    printf("\n");
    printf("==========================================================\n");
    printf("||          Bem-vindo(a) ao GERENCIADOR DE ESTOQUES     ||\n");
    printf("==========================================================\n");
    printf("||                      [ MENU ]                        ||\n");
    printf("||------------------------------------------------------||\n");
    printf("|| (1) Adicionar produto                                ||\n");
    printf("|| (2) Remover produto                                  ||\n");
    printf("|| (3) Exibir produtos                                  ||\n");
    printf("|| (4) Ordenar lista para entrega                       ||\n");
    printf("|| (5) Sair                                             ||\n");
    printf("||------------------------------------------------------||\n");
    printf("==========================================================\n");
}

#endif




