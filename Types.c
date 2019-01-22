#include <stdio.h>
#include <stdbool.h>

void main() {
    int i;
    float f;
    char c;
    bool b; // Lembrar de importar a lib stdbooll

    i = 10;
    f = 1.3;
    c = 'a';
    b = true;

    printf("O valor da variável i: %d\n", i);
    printf("O valor da variável f: %f\n", f);
    printf("O valor da variável c: %c\n", c);
    printf("O valor da variável b: %d\n", b);

    printf("Digite o novo valor de i: ");
    scanf("%d", &i);

    printf("Digite o novo valor de f: ");
    scanf("%f", &f);

    printf("Digite o novo valor de c: ");
    scanf(" %c", &c); // Lembrar de add o espaço para l

    printf("Digite o novo valor de b: ");
    scanf("%d", &b); // Lembrar de add o espaço para ler o char

    printf("O novo valor da variável i: %d\n", i);
    printf("O novo valor da variável f: %.2f\n", f);
    printf("O novo valor da variável c: %c\n", c);
    printf("O novo valor da variável c: %d\n", b);

}
