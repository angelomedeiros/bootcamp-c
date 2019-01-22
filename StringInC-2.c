#include <stdio.h>

int main() {
    char palavra[10], nome[10], sobrenomes[10];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("A palavra digitada foi: %s\n", palavra); // Não Lê espaços

//    fflush(stdin);
    __fpurge(stdin);

    printf("Digite seu nome: ");
    scanf("%s", nome);

//    fflush(stdin);
    __fpurge(stdin);
    printf("Seu nome é: %s", nome); // Corta a primeira letra

    printf("Digite seus sobrenomes: ");
    scanf("%[^\n]", sobrenomes);

    printf("Seu nome é: %s", sobrenomes); // Corta a primeira letra

}

