#include <stdio.h>
#include <string>
#include <iostream> // Proximos conteúdos o stdio não será necessário

int main() {
    std::string nome;

    printf("Digite seu nome: ");

    std::cin >> nome;

    std::cout << "Nome: " + nome;

    return 0;
}
