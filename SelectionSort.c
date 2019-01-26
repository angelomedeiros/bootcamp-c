#include <stdio.h>
#define SIZE 10

void printArray(int v[SIZE]);
void selectionSort(int array[SIZE]);

int main() {
    int array[SIZE] = {2,3,1,5,7,9,4,8,0,6};

    selectionSort(array);

    printArray(array);

    return 0;
}

void printArray(int v[SIZE]) {
    for (int i = 0; i < SIZE ; i++) {
        printf("%d ", v[i]);
    }
}

void selectionSort(int array[SIZE]) {
    int positionLowestValue = 0, aux;

    for (int i = 0; i < SIZE; i++) {
        positionLowestValue = i;

        for (int j = i + 1; j < SIZE; j++) {
            if ( array[j] < array[positionLowestValue] ) {
                positionLowestValue = j;
            }
        }

        if ( array[i] != array[positionLowestValue] ) {
            aux = array[i];
            array[i] = array[positionLowestValue];
            array[positionLowestValue] = aux;
        }
    }
}
