#include <stdio.h>
#include <new>

int main() {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = new int[tamanho];

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
        printf("%d\n", vetor[i]);
    }

    free(vetor);

    return 0;
}
