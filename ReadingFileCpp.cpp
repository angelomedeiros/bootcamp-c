#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream input("teste.js");

    string textoLido;

    for (string linha; getline(input, linha);) {
        textoLido += linha;
    }

    cout << textoLido;

    // Limpa o arquivo
//    ofstream arquivo;
//
//    arquivo.open("teste.js");
//
//    arquivo << "";
//
//    arquivo.close();
    // =================== //

    return 0;
}
