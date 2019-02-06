#include <stdlib.h>
#include <stdio.h>
#include <new>

#define SIZE 3

void printArray(int *array, int sizeArray);

int main() {
    int array[SIZE] = { 2, 3, 5 };
    int sizeArray;

    printArray(array, 3);

    printf("What is the size of the array? ");
    scanf("%d", &sizeArray);

    int *arrayReadAtTheTime = new int[sizeArray];

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
