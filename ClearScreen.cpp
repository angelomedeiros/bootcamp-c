#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

//using namespace std;

void printName();

int main() {

    printName();
    printf("\033[2J");

    return 0;
}

void printName() {
    std::cout << "Angelo Medeiros Nóbrega";
}

