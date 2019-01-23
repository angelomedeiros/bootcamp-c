#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream> // comentar essa linha para ver o que acontece

using namespace std;

int main() {
    int c;

    FILE *file;

    file = fopen("teste.js", "r");

    if (file) {
        while ((c = getc(file)) != EOF) {
            printf("%c", c);
        }
        fclose(file);
    }


    return 0;
}

