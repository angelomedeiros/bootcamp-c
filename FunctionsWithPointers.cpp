#include <stdio.h>

void increasesByTen(int *i);
int returnsAddingTen(int i);

int main() {
    int a = 10;
    printf("%d\n", &a);
    increasesByTen(&a);
    printf("a %d", a);
    printf("a+10 %d", returnsAddingTen(a));
    return 0;
}


int returnsAddingTen(int i) {
    printf("i: %d\n", i);
    printf("&i: %d\n", &i);
    return i + 10;
}

void increasesByTen(int *i) {
    printf("*i: %d\n", *i);
    printf("i: %d\n", i);
    printf("&i: %d\n", &i);
    *i = *i + 10;
}
