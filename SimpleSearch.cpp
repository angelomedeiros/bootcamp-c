#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

using namespace std;

void printArray(int array[SIZE]);
int SimpleSearch(int array[SIZE], int valueSought, int *positionValue);

int main() {

    int array[SIZE] = { 1, 23, 44, 56, 63, 72, 84, 90, 98 };
    int valueSought;
    int positionValue;

    printArray(array);

    cout << "What number do you want to search? ";
    cin >> valueSought;

    if ( SimpleSearch(array, valueSought, &positionValue) == 1 ) {
        cout << "The element was found at position " << positionValue;
    } else {
        cout << "Value not found!";
    }

    return 0;
}

void printArray(int array[SIZE]) {
    for ( int i = 0; i < SIZE; i++ ) {
        cout << array[i] << " ";
    }
}

int SimpleSearch(int array[SIZE], int valueSought, int *positionValue) {
    bool elementWasFound = false;

    for ( int i = 0; i < SIZE; i++ ) {
        if ( array[i] ==  valueSought ) {
            elementWasFound = true;
            *positionValue = i;
        }
    }

    if ( elementWasFound ) {
        return 1;
    } else {
        return -1;
    }
}
