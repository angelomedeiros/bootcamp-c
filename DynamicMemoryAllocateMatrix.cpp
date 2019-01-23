#include <stdio.h>
#include <new>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    int** matriz;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    matriz = (int**) new int[linhas];

    for ( int i = 0 ; i < linhas; i++ ) {
        matriz[i] = new int[colunas];
    }

    for ( int i = 0; i < linhas; i++ ) {
        for ( int j = 0; j < colunas; j++ ) {
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

//    delete matriz;
    printf("Valor (0,0) %d", matriz[0][0]);

    return 0;
}
