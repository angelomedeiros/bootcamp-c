#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

void clearScreen() {
    system("clear");
}

struct pessoa {
    string rg;
    string name;
};

void printListSequential(pessoa *listSequential, int sizeListSequential);

int main() {

    int chosenOption = 0;

    pessoa *pointerSequential;
    int sizeListSequential;

    pessoa *exampleListSequential = new pessoa[2];

    exampleListSequential[0].name = "Angelo";
    exampleListSequential[0].rg = "123344-9";

    exampleListSequential[1].name = "Thalita";
    exampleListSequential[1].rg = "223311-6";

    pointerSequential = exampleListSequential;

    printListSequential(pointerSequential, 2);

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
    }

    return 0;
}

void printListSequential(pessoa *listSequential, int sizeListSequential) {
    for (int count = 0; count < sizeListSequential; count++) {
        cout << count << " - " << listSequential[count].name << ", " << listSequential[count].rg << "\n";
    }
}
