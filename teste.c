#include <stdio.h>
#include <stdlib.h>
/* my lib */
#include "libtools.h"

int main() {
    int num = get_int("Insira um número inteiro: ");
    float num_float = get_float("Insira um número de ponto flutuante: ");
    char name[50];
    get_string("Insira uma string: ", name, 50);

    printf("Inteiro: %d\n", num);
    printf("Float: %.2f\n", num_float);
    printf("String: %s\n", name);

    return 0;
}
