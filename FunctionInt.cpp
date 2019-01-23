#include <stdio.h>

int returnTen();
float returnFloat();

int main() {
    int a = returnTen();
    float b = returnFloat();

    printf("%d\n", a);
    printf("%f", b);


    return 0;
}

int returnTen() {
    return 10;
}

float returnFloat() {
    return 10.9;
}
