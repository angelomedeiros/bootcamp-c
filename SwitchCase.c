#include <stdio.h>

void main() {
    int i = 3;

    switch (i) {
        case 1:
            printf("Valor 1");
            break;
        case 2:
        case 3:
            printf("Valor 2 ou 3");
            break;
        default:
            printf("Valor fora do range [1,2]");
            break;
    }
}
