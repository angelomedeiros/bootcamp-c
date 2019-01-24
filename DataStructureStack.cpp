#include <iostream>
#define SIZE 10

using namespace std;

void push(int vetor[SIZE], int valor, int *topo);
int pop(int vetor[SIZE], int *topo);

int main() {
    int vetor[SIZE] = {};
    int topo = -1;

    push(vetor, 5, &topo);
    push(vetor, 6, &topo);
    push(vetor, 7, &topo);
    push(vetor, 2, &topo);
    push(vetor, 2, &topo);
    push(vetor, 8, &topo);
    push(vetor, 5, &topo);
    push(vetor, 6, &topo);
    push(vetor, 7, &topo);
    push(vetor, 2, &topo);
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";
    cout << "Item removido: " << pop(vetor, &topo) << "\n";

    for (int i = 0; i < SIZE; i++) {
        cout << "Posição" << i << ": " << vetor[i] << "\n";
    }

    return 0;
}

void push(int vetor[SIZE], int valor, int *topo) {
    if ( *topo == SIZE - 1 ) {
        cout << "Full Stack\n";
    } else {
        vetor[*topo + 1] = valor;
        *topo = *topo + 1;
    }
}

int pop(int vetor[SIZE], int *topo) {
    int aux = vetor[*topo];
    if ( *topo == -1 ) {
        cout << "Empty Stack\n";
    } else {
        vetor[*topo] = 0;
        *topo = *topo - 1;
    }
    return aux;
}

