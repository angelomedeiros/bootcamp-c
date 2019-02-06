#include <iostream>
#define SIZE 9

using namespace std;

void printArray(int array[SIZE]);

int BinarySearch (int array[SIZE], int valueSought, int *positionValue);

int main() {
    int array[SIZE] = { 1, 23, 44, 56, 63, 72, 84, 90, 98 };
    int valueSought, positionValue;

    printArray(array);

    cout << "What number do you want to search? ";
    cin >> valueSought;

    if ( BinarySearch(array, valueSought, &positionValue) == 1 ) {
        cout << "The element was found at position " << positionValue;
    } else {
        cout << "Element not found";
    }

    return 0;
}

void printArray(int array[SIZE]) {
    for ( int i = 0; i < SIZE; i++ ) {
        cout << array[i] << " ";
    }
}

int BinarySearch(int array[SIZE], int valueSought, int *positionValue) {
    int left = 0;
    int right = SIZE - 1;

    while ( left <= right ) {
        int middle = ( left + right ) / 2;

        if ( array[middle] == valueSought ) {
            *positionValue = middle;
            return 1;
        }

        if ( array[middle] < valueSought ) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}
