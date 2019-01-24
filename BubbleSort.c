#include <stdio.h>
#define SIZE 10

void printArray(int v[SIZE]);
void bubbleSort(int array[SIZE]);

int main() {
    int array[SIZE] = {2,3,1,5,7,9,4,8,0,6};

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
        }
    }
}
