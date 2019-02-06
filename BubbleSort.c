#include <stdio.h>
#define SIZE 10

void printArray(int v[SIZE]);
void bubbleSort(int array[SIZE]);

int main() {
    int array[SIZE] = {10,9,8,7,6,5,4,3,2,1};

    bubbleSort(array);

    printArray(array);

    return 0;
}

void printArray(int v[SIZE]) {
    for (int i = 0; i < SIZE ; i++) {
        printf("%d ", v[i]);
    }
}

void bubbleSort(int array[SIZE]) {
    int aux;

    for (int n = 0; n < SIZE; n++) {
        for (int m = n + 1; m < SIZE; m++ ) {
            if (array[n] > array[m]) {
                aux = array[n];
                array[n] = array[m];
                array[m] = aux;
            }
            printf("%d | %d -  ", n, m);
            printArray(array);
            printf("\n");
        }
    }
}
