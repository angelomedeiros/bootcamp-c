#include <stdio.h>
#define SIZE 10

void printArray(int v[SIZE]);
void mergeSort(int array[SIZE], int start, int end);

int main() {
    int array[SIZE] = {2,3,1,5,7,9,4,8,0,6};

    mergeSort(array, 0, SIZE - 1);

    printArray(array);

    return 0;
}

void printArray(int v[SIZE]) {
    for (int i = 0; i < SIZE ; i++) {
        printf("%d ", v[i]);
    }
}

void merge(int array[SIZE], int start, int middle, int end) {
    int i, j, k;
    int sizeAuxLeft = middle - start + 1;
    int sizeAuxRight = end - middle;

    int auxLeft[sizeAuxLeft], auxRight[sizeAuxRight];

    for (i = 0; i < sizeAuxLeft; i++) {
        auxLeft[i] = array[start + i];
    }

    for (j = 0; j < sizeAuxRight; j++ ) {
        auxRight[j] = array[middle + j + 1];
    }

    i = j = 0;
    k = start;

    while ( i < sizeAuxLeft && j < sizeAuxRight ) {
        if ( auxLeft[i] < auxRight[j] ) {
            array[k] =  auxLeft[i];
            i++;
        } else {
            array[k] = auxRight[j];
            j++;
        }
        k++;
    }

    while ( i < sizeAuxLeft ) {
        array[k] = auxLeft[i];
        i++;
        k++;
    }

    while ( j < sizeAuxRight ) {
        array[k] = auxRight[j];
        j++;
        k++;
    }

}

void mergeSort(int array[SIZE], int start, int end) {
    int middle = (int) ( start + end ) / 2;
    if ( start < end ) {
        mergeSort(array, start, middle);
        mergeSort(array, middle+1, end);
        merge(array, start, middle, end);
    }
}
