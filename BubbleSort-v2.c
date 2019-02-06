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
    int aux, stop, end;

    end = SIZE - 1;

    do {
        stop = 0;
        for (int m = 0; m < end; m++ ) {
            if (array[m] > array[m+1]) {
                aux = array[m];
                array[m] = array[m+1];
                array[m+1] = aux;
                stop = m;
            }
            // Visualizar o processo de ordenação
            // printf("%d -  ", m);
            // printArray(array);
            // printf("\n");
        }
        end--;
    } while ( stop != 0 );
}
