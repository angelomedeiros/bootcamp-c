#include <stdlib.h>
#include <stdio.h>
#define SIZE 3

void printArray(int *array, int sizeArray);

int* allocateArray(int sizeArray);

int main() {
    int array[SIZE] = { 2, 3, 5 };
    int sizeArray;

    printArray(array, 3);

    printf("What is the size of array? ");
    scanf("%d", &sizeArray);

    int *arrayReadAtTheTime;

    arrayReadAtTheTime = allocateArray(sizeArray);

    for ( int count = 0; count < sizeArray; count++ ) {
        scanf("%d", &arrayReadAtTheTime[count]);
    }

    printArray(arrayReadAtTheTime, sizeArray);

    return 0;
}

void printArray(int *array, int sizeArray) {
    for ( int count = 0; count < sizeArray; count++ ) {
        printf("%d ", array[count]);
    }
}

int* allocateArray(int sizeArray) {
    int* aux;
    aux = (int *) malloc(sizeArray * sizeof(int));

    return aux;
}
