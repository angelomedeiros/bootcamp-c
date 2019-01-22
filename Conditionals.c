#include <stdio.h>
#include <stdbool.h>

void main() {
    int number;
    char c = 'A';

    printf("Digite um número para saber se é par ou ímpar: ");
    scanf("%d", &number);

    if ( number % 2 == 0 ) {
        printf("%d é par", number);
    } else {
        printf("%d é ímpar", number);
    }

    printf("\ntrue %d\n", !!true);
    printf("false %d\n", !!false);
    printf("0 %d\n", !!0);
    printf("1 %d\n", !!1);
    printf("angelo %d\n", !!"angelo");
    printf("4 %d\n", !!4);
    printf("A %d", !!(c == 65));

}
