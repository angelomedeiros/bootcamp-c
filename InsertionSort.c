#include <stdio.h>
#define SIZE 10

void printArray(int v[SIZE]);
void insertSort(int array[SIZE]);

int main() {
    int array[SIZE] = {2,3,1,5,7,9,4,8,0,6};

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
    int m, aux;
    for (int n = 1; n < SIZE; n++) {
        aux = array[n];
        m = n - 1;

        while ((m >= 0) && aux < array[m]) {
            array[m+1] = array[m];
            m--;
        }

        array[m + 1] = aux;
    }
}
