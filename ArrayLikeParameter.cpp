#include <stdio.h>

void printArray(int *a, int s);
void changeArray(int *a, int s);

int main() {

    int v[3] = {1, 2, 3};

    printArray(v, 3);
    changeArray(v, 3);
    printArray(v, 3);

    return 0;
}


void printArray(int *a, int s) {
    for (int i  = 0; i < s; i++) printf("%d\n", a[i]);
}

void changeArray(int *a, int s) {
    for (int i = 0; i < s; i++) a[i]++;
}
