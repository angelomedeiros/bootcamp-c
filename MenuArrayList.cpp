#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

struct pessoa {
    string rg;
    string name;
};

void addElementStart(pessoa *&pointerSequential ,int *sizeListSequential, string name, string rg);

void printListSequential(pessoa *listSequential, int sizeListSequential);

void clearScreen() {
    system("clear");
}

int main() {

    int chosenOption = 0;

    pessoa *pointerSequential;
    int sizeListSequential = 0;

    /*
    pessoa *exampleListSequential = new pessoa[2];

    exampleListSequential[0].name = "Angelo";
    exampleListSequential[0].rg = "123344-9";

    exampleListSequential[1].name = "Thalita";
    exampleListSequential[1].rg = "223311-6";

    pointerSequential = exampleListSequential; */

    while ( chosenOption < 10 ) {
        cout << "Options: \n";
        cout << "1 - Insert an element at the start of the list\n";
        cout << "2 - Insert an element at the end of the list\n";
        cout << "3 - Insert an element at the position N of the list\n";
        cout << "4 - Remove an element at the start of the list\n";
        cout << "5 - Remove an element at the end of the list\n";
        cout << "6 - Remove an element at the position N of the list\n";
        cout << "7 - Search an element with field RG\n";
        cout << "8 - Print the list\n";
        cout << "9 - Exit of the program\n";
        cout << "\nChoice an option and press the key ENTER: ";

        cin >> chosenOption;

        clearScreen();

        string name;
        string rg;

        switch ( chosenOption ) {
            case 1:
                cout << "Chosen option was the 1 - Insert an element at the start of the list\n";

                cout << "Enter a name: ";
                cin >> name;

                cout << "Enter a rg: ";
                cin >> rg;

                addElementStart(pointerSequential, &sizeListSequential, name, rg);

                break;
            case 2:
                cout << "Chosen option was the 2\n";
                break;
            case 3:
                cout << "Chosen option was the 3\n";
                break;
            case 4:
                cout << "Chosen option was the 4\n";
                break;
            case 8:
                cout << "Chosen option was the 8 - Print the list\n";
                printListSequential(pointerSequential, sizeListSequential);
                break;
        }
    }

    return 0;
}

void printListSequential(pessoa *listSequential, int sizeListSequential) {
    for (int count = 0; count < sizeListSequential; count++) {
        cout << count << " - " << listSequential[count].name << ", " << listSequential[count].rg << "\n";
    }
}

void addElementStart(pessoa *&pointerSequential, int *sizeListSequential, string name, string rg) {

    if ( *sizeListSequential == 0 ) {
        pessoa *aux = new pessoa[*sizeListSequential + 1];

        aux[0].name = name;
        aux[0].rg = rg;

        pointerSequential = aux;

    } else {
        pessoa *aux = new pessoa[*sizeListSequential + 1];

        aux[0].name = name;
        aux[0].rg = rg;

        for ( int count = 0; count < *sizeListSequential; count++ ) {
            aux[count+1].name = pointerSequential[count].name;
            aux[count+1].rg = pointerSequential[count].rg;
        }

        pointerSequential = aux;
    }

    *sizeListSequential = *sizeListSequential + 1;
}
