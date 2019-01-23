#include <stdio.h>
#include <string.h>

typedef struct endereco {
    char rua[255];
    int numero;
} endereco_alias;

struct pessoa {
    int idade;
    char nome[255];
    char sexo;
    endereco_alias address; // ou endereco
};

int main() {

    struct pessoa angelo;

    angelo.idade = 23;
    angelo.sexo = 'm';
    strcpy(angelo.nome, "Angelo Medeiros Nóbrega");
    angelo.address.numero = 130;
    strcpy(angelo.address.rua, "Alberto Lustosa");

    printf("%d %c %s\n", angelo.idade, angelo.sexo, angelo.nome);
    printf("%d %s", angelo.address.numero, angelo.address.rua);

    return 0;
}
