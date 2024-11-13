/* Library */
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
int get_int(const char *input){
	int value;
	printf("%s", input);
	scanf("%d", &value);
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

#endif




