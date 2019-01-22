#include <stdio.h>
#include <string>
#include <iostream> // Proximos conteúdos o stdio não será necessário

using namespace std;

int main() {
    string nome;

    printf("Digite seu nome: ");

    cin >> nome;

    cout << "Nome: " + nome;

    return 0;
}

