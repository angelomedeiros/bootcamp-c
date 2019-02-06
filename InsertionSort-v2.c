#include <stdio.h>
#define SIZE 10

void printArray(int v[SIZE]);
void insertSort(int array[SIZE]);

int main() {
    int array[SIZE] = {10,9,8,7,6,5,4,3,2,1};

    insertSort(array);

    printArray(array);

    return 0;
}

void printArray(int v[SIZE]) {
    for (int i = 0; i < SIZE ; i++) {
        printf("%d ", v[i]);
    }
}

void insertSort(int array[SIZE]) {
    int n, aux;
    for (int m = 1; m < SIZE; m++) {
        aux = array[m];
        for ( n = m; ( n > 0 ) && ( aux < array[n - 1] ); n-- ) {
            array[n] = array[n - 1];
        }
        array[n] = aux;
    }
}
