#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruta {
    string cor;
    string nome;
};

int main() {

    fruta *primeraFruta = new fruta;

    primeraFruta->cor = "Amarela";
    primeraFruta->nome = "Banana";

    cout << "Fruta: " << primeraFruta->nome << ", cor: " << primeraFruta->cor;

    fruta *cestaDeFrutas = new fruta[2];

    cestaDeFrutas[0].nome = "Uva";
    cestaDeFrutas[0].cor = "purple";

    cestaDeFrutas[1].nome = "Melancia";
    cestaDeFrutas[1].cor = "verde";

    for (int i = 0; i < 2; i++) {
        cout << "\nFruta: " << cestaDeFrutas[i].nome << ", cor: " << cestaDeFrutas[i].cor;
    }

    return 0;
}

