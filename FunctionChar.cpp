#include <stdio.h>

char returnCharX();

int main() {
    char a = returnCharX();

    printf("%c", a);

    return 0;
}

char returnCharX() {
    return 'x'; // ou, return 120
}
