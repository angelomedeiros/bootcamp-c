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
void addElementEnd(pessoa *&pointerSequential ,int *sizeListSequential, string name, string rg);
void addElementPositionSpecific(pessoa *&pointerSequential ,int *sizeListSequential, string name, string rg, int position);
void removeElementStart(pessoa *&pointerSequential ,int *sizeListSequential);
void removeElementEnd(pessoa *&pointerSequential ,int *sizeListSequential);
void removeElementSpecificPosition(pessoa *&pointerSequential ,int *sizeListSequential, int position);
string filterPessoaByRgReturnName(pessoa *&pointerSequential, int *sizeListSequential, string rg);

void printListSequential(pessoa *listSequential, int sizeListSequential);

void clearScreen() {
    system("clear");
}

int main() {

    int chosenOption = 1;

    pessoa *pointerSequential;
    int sizeListSequential = 0;

    /*
    pessoa *exampleListSequential = new pessoa[2];

    exampleListSequential[0].name = "Angelo";
    exampleListSequential[0].rg = "123344-9";

    exampleListSequential[1].name = "Thalita";
    exampleListSequential[1].rg = "223311-6";

    pointerSequential = exampleListSequential; */

    while ( chosenOption < 9 && chosenOption > 0 ) {
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

        int position;
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
                cout << "Chosen option was the 2 - Insert an element at the end of the list\n";

                cout << "Enter a name: ";
                cin >> name;

                cout << "Enter a rg: ";
                cin >> rg;

                if ( sizeListSequential == 0 ) {
                    addElementStart(pointerSequential, &sizeListSequential, name, rg);
                } else {
                    addElementEnd(pointerSequential, &sizeListSequential, name, rg);
                }

                break;
            case 3:
                cout << "Chosen option was the 3 - Insert an element at the position N of the list\n";

                cout << "Enter a name: ";
                cin >> name;

                cout << "Enter a rg: ";
                cin >> rg;

                cout << "Enter a position: ";
                cin >> position;

                if ( position == 0 ) {
                    addElementStart(pointerSequential, &sizeListSequential, name, rg);
                } else if ( position == sizeListSequential ) {
                    addElementEnd(pointerSequential, &sizeListSequential, name, rg);
                } else {
                    addElementPositionSpecific(pointerSequential, &sizeListSequential, name, rg, position);
                }

                break;
            case 4:
                cout << "Chosen option was the 4 - Remove an element at the start of the list\n";

                if ( sizeListSequential == 0 ) {
                    cout << "Empty list!";
                } else {
                    removeElementStart(pointerSequential, &sizeListSequential);
                }

                break;
            case 5:
                cout << "Chosen option was the 5 - Remove an element at the end of the list\n";

                if ( sizeListSequential == 0 ) {
                    cout << "Empty list!";
                } else {
                    removeElementEnd(pointerSequential, &sizeListSequential);
                }

                break;
            case 6:
                cout << "Chosen option was the 6 - Remove an element at the position N of the list\n";

                if ( sizeListSequential == 0 ) {
                    cout << "Empty list!\n";
                } else {

                    cout << "Enter a position: ";
                    cin >> position;

                    if ( position == 0 ) {
                        removeElementStart(pointerSequential, &sizeListSequential);
                    } else if ( position == sizeListSequential - 1 ) {
                        removeElementEnd(pointerSequential, &sizeListSequential - 1);
                    } else {
                        removeElementSpecificPosition(pointerSequential, &sizeListSequential, position);
                    }
                }

                break;
            case 7:
                cout << "Chosen option was the 7 - Search an element with field RG\n";

                if ( sizeListSequential == 0 ) {
                    cout << "Empty list!\n";
                } else {

                    cout << "Enter a rg: ";
                    cin >> rg;

                    cout << "The name corresponding to the rg is " << filterPessoaByRgReturnName(pointerSequential, &sizeListSequential, rg) << "\n";
                }

                break;
            case 8:
                cout << "Chosen option was the 8 - Print the list\n";

                if ( sizeListSequential == 0 ) {
                    cout << "Empty list!\n";
                } else {
                    printListSequential(pointerSequential, sizeListSequential);
                }

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

void addElementEnd(pessoa *&pointerSequential, int *sizeListSequential, string name, string rg) {

    pessoa *aux = new pessoa[*sizeListSequential + 1];

    for ( int count = 0; count < *sizeListSequential; count++ ) {
        aux[count].name = pointerSequential[count].name;
        aux[count].rg = pointerSequential[count].rg;
    }

    aux[*sizeListSequential].name = name;
    aux[*sizeListSequential].rg = rg;

    pointerSequential = aux;
    *sizeListSequential = *sizeListSequential + 1;
}

void addElementPositionSpecific(pessoa *&pointerSequential ,int *sizeListSequential, string name, string rg, int position) {

    pessoa *aux = new pessoa[*sizeListSequential + 1];

    for ( int count = 0; count < position; count++ ) {
        aux[count].name = pointerSequential[count].name;
        aux[count].rg = pointerSequential[count].rg;
    }

    aux[position].name = name;
    aux[position].rg = rg;

    for ( int count = position + 1; count < *sizeListSequential + 1; count++ ) {
        aux[count].name = pointerSequential[count - 1].name;
        aux[count].rg = pointerSequential[count -1 ].rg;
    }

    pointerSequential = aux;
    *sizeListSequential = *sizeListSequential + 1;
}

void removeElementStart(pessoa *&pointerSequential ,int *sizeListSequential) {
    pessoa *aux = new pessoa[*sizeListSequential - 1];

    for ( int count = 1; count < *sizeListSequential; count++ ) {
        aux[count - 1].name = pointerSequential[count].name;
        aux[count - 1].rg = pointerSequential[count].rg;
    }

    pointerSequential = aux;
    *sizeListSequential = *sizeListSequential - 1;
}

void removeElementEnd(pessoa *&pointerSequential ,int *sizeListSequential) {
    pessoa *aux = new pessoa[*sizeListSequential - 1];

    for ( int count = 0; count < *sizeListSequential -1; count++ ) {
        aux[count].name = pointerSequential[count].name;
        aux[count].rg = pointerSequential[count].rg;
    }

    pointerSequential = aux;
    *sizeListSequential = *sizeListSequential - 1;
}

void removeElementSpecificPosition(pessoa *&pointerSequential ,int *sizeListSequential, int position) {

    pessoa *aux = new pessoa[*sizeListSequential - 1];

    for ( int count = 0; count < position; count++ ) {
        aux[count].name = pointerSequential[count].name;
        aux[count].rg = pointerSequential[count].rg;
    }

    for ( int count = position; count < *sizeListSequential - 1; count++ ) {
        aux[count].name = pointerSequential[count + 1].name;
        aux[count].rg = pointerSequential[count + 1].rg;
    }

    pointerSequential = aux;
    *sizeListSequential = *sizeListSequential - 1;
}

string filterPessoaByRgReturnName(pessoa *&pointerSequential, int *sizeListSequential, string rg) {

    string name = "Name not found!";

    for ( int count = 0; count < *sizeListSequential; count++ ) {
        if ( pointerSequential[count].rg ==  rg ) {
            return pointerSequential[count].name;
        }
    }

    return name;

}
