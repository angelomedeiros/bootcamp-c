#include <stdio.h>
#include <stdlib.h>

int* allocateArray(int sizeArray);

int main() {
    int *dynamicArray, sizeArray;

    printf("Enter the size of the array: ");
    scanf("%d", &sizeArray);

    // Pointer receives memory that has been allocated vector
    dynamicArray = allocateArray(sizeArray);

    for (int i = 0; i < sizeArray; i++) {
        dynamicArray[i] = -1;
    }


    for (int i = 0; i < sizeArray; i++) {
        printf("Valor na posição %d: %d\n", i, dynamicArray[i]);
    }

    free(dynamicArray);

    return 0;

}

int* allocateArray(int sizeArray) {
    // Auxiliary pointer
    int *aux;

    // Dynamic memory allocation
    aux = (int *) malloc(sizeArray * sizeof(int));

//    printf("sizeof(char): %d\n", sizeof(char));
//    printf("sizeof(int): %d\n", sizeof(int));
//    printf("sizeof(char): %d\n", sizeof(unsigned int));
//    printf("sizeof(float): %d\n", sizeof(float));
//    printf("sizeof(short): %d\n", sizeof(short));
//    printf("sizeof(long): %d\n", sizeof(long));
//    printf("sizeof(long long int): %d\n", sizeof(long long int));
//    printf("sizeof(double): %d\n", sizeof(double));
//    printf("sizeof(long double): %d\n", sizeof(long double));
//    printf("aux: %d\n", aux);

    // retorna o ponteiro que aponta para a primeira posição de memória do vetor alocado
    return aux;
}

/*
 * DynamicArray é um ponteiro e ele recebe a alocação
 * de memória através de allocateArray (ponteiro)
 *
 */
