#include <stdio.h>
#define SIZE 10

void printArray(int v[SIZE]);
void quickSort(int array[SIZE], int start, int end);

int main() {
    int array[SIZE] = {2,3,1,5,7,9,4,8,0,6};

    quickSort(array, 0, SIZE );

    printArray(array);

    return 0;
}

void printArray(int v[SIZE]) {
    for (int i = 0; i < SIZE ; i++) {
        printf("%d ", v[i]);
    }
}

void quickSort(int array[SIZE], int start, int end) {
    int left, right, pivo, middle, aux;

    left = start;
    right = end;

    middle = (int) (right + left) / 2;
    pivo = array[middle];

    while ( right > left ) {
        while ( array[left] < pivo ) {
        left = left + 1;
        }

        while ( array[right] > pivo ) {
            right = right - 1;
        }

        if ( left <= right ) {
            aux = array[left];
            array[left] = array[right];
            array[right] = aux;

            left++;
            right--;
        }
    }

    if ( start < right ) {
        quickSort(array, start, right);
    }

    if ( left < end ) {
        quickSort(array, left, end);
    }

}

