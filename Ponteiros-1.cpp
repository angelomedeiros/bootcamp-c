#include <stdio.h>

int main() {
    int a = 20;

    printf("valor da variável a: %d \n", a);

    printf("Endereço da variável a: %d\n", &a);

    // Variáveis armazenam valores
    int b = 10;

    // Ponteiros armazenam posiçoes da memória
    int *ponteiro;

    // Lê-se: Ponteiro recebendo posição na memmóri da variável b
    ponteiro = &b;

    // Lê-se: Conteúdo apontado por b
    *ponteiro = 33;

    printf("Valor da variável b: %d", b);

}
