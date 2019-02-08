


#include <stdlib.h>

using namespace std;

struct person {
    string rg;
    string name;
    struct person *next;
};

void addStartLinkedList(person *&linkedPointer, string name, string rg);
void addEndLinkedList(person *&linkedPointer, string name, string rg);
void addSpecificPositionLinkedList(person *&linkedPointer, string name, string rg, int position);
void removeStartLinkedList(person *&linkedPointer);
void removeEndLinkedList(person *&linkedPointer);

void printLinkedList(person *linkedPointer);
int sizeLinkedList(person *linkedPointer);

void clearScreen() {
    system("clear");
}

int main() {

    int chosenOption = 1;

//    person *linkedPointer = new person;
    person *linkedPointer = (person *) malloc(sizeof(person));

    linkedPointer->name = "";
    linkedPointer->rg = "";
    linkedPointer->next = NULL;

//    person *newFirstValue = new person;
//
//    newFirstValue->name = "Angelo";
//    newFirstValue->rg = "112233-4";
//    newFirstValue->next = NULL;
//
//    person *newSecondValue = new person;
//    newSecondValue->name = "Thalita";
//    newSecondValue->rg = "221144-5";
//    newSecondValue->next = NULL;
//
//    newFirstValue->next = newSecondValue;
//
//    linkedPointer = newFirstValue;

    while ( chosenOption < 9 && chosenOption > 0 ) {
        cout << "Options: \n\n";
        cout << "Size of the linked list: " << sizeLinkedList(linkedPointer) << "\n\n";
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
                cout << "Chosen option was the 1 - Insert an element at the start of the linked list\n";

                cout << "Enter a name: ";
                cin >> name;

                cout << "Enter a rg: ";
                cin >> rg;

                addStartLinkedList(linkedPointer, name, rg);

                break;
            case 2:
                cout << "Chosen option was the 2 - Insert an element at the end of the linked list\n";

                cout << "Enter a name: ";
                cin >> name;

                cout << "Enter a rg: ";
                cin >> rg;

                if ( sizeLinkedList(linkedPointer) != 0 ) {
                    addEndLinkedList(linkedPointer, name, rg);
                } else {
                    addStartLinkedList(linkedPointer, name, rg);
                }

                break;
            case 3:
                cout << "Chosen option was the 3 - Insert an element at the specific position of the linked list\n";

                cout << "Enter a position: ";
                cin >> position;

                cout << "Enter a name: ";
                cin >> name;

                cout << "Enter a rg: ";
                cin >> rg;

                if ( position == 0 ) {
                    addStartLinkedList(linkedPointer, name, rg);
                } else if ( sizeLinkedList(linkedPointer) == position ) {
                    addEndLinkedList(linkedPointer, name, rg);
                } else {
                    addSpecificPositionLinkedList(linkedPointer, name, rg, position);
                }

                break;
            case 4:
                cout << "Chosen option was the 4 - Remove an element at the start of the linked list\n";
                removeStartLinkedList(linkedPointer);
                break;
            case 5:
                cout << "Chosen option was the 5 - Remove an element at the end of the linked list\n";

                if ( sizeLinkedList(linkedPointer) == 1 ) {
                    removeStartLinkedList(linkedPointer);
                } else {
                    removeEndLinkedList(linkedPointer);
                }

                break;
            case 8:
                printLinkedList(linkedPointer);
                break;
        }

    }

    return 0;
}

int sizeLinkedList(person *linkedPointer) {

    int size = 0;

    if ( linkedPointer->name == "" ) {
        return size;
    }

    person *aux = linkedPointer;

    while ( aux != NULL ) {
        aux = aux->next;
        size++;
    }

    return size;
}

void printLinkedList(person *linkedPointer) {

    if ( sizeLinkedList(linkedPointer) == 0 ) {
        cout << "Empty linked list!\n\n";
        return;
    }

    while ( linkedPointer != NULL ) {
        cout << "Name: " << linkedPointer->name << ", RG: " << linkedPointer->rg << "\n";
        linkedPointer = linkedPointer->next;
    }

    cout << "\n";
}

void addStartLinkedList(person *&linkedPointer, string name, string rg) {
    person *newLinkedList = new person;

    newLinkedList->name = name;
    newLinkedList->rg = rg;
    newLinkedList->next = linkedPointer;

    if ( linkedPointer->name == "" ) {
        newLinkedList->next = NULL;
    }

    linkedPointer = newLinkedList;
}

void addEndLinkedList(person *&linkedPointer, string name, string rg) {
    person *newLinkedList = new person;

    newLinkedList->name = name;
    newLinkedList->rg = rg;
    newLinkedList->next = NULL;

    person *aux = linkedPointer;

    while ( aux != NULL ) {
        if ( aux->next == NULL ) {
            aux->next = newLinkedList;
            return;
        }

        aux = aux->next;
    }

}

void addSpecificPositionLinkedList(person *&linkedPointer, string name, string rg, int position) {
    person *newLinkedList = new person;

    newLinkedList->name = name;
    newLinkedList->rg = rg;
    newLinkedList->next = NULL;

    person *aux = linkedPointer;

    int count = 0;

    while ( count <= position ) {

        if ( count == position - 1 ) {
            person *auxNext = new person;

            auxNext->next = aux->next;
            aux->next = newLinkedList;
            newLinkedList->next = auxNext->next;

            free(auxNext);
        }

        aux = aux->next;
        count++;
    }

}

void removeStartLinkedList(person *&linkedPointer){
    if ( linkedPointer->next == NULL ) {
        person *newLinkedList = new person;

        newLinkedList->name = "";
        newLinkedList->rg = "";
        newLinkedList->next = NULL;

        linkedPointer = newLinkedList;

        cout << "\nEmpty linked list!\n";
        return;
    }

    linkedPointer = linkedPointer->next;
}

void removeEndLinkedList(person *&linkedPointer){

    person *aux = new person;
    person *auxNext = new person;

    aux = linkedPointer;

    while ( aux->next != NULL ) {
        auxNext = aux;
        aux = aux->next;
    }

    auxNext->next = NULL;

}
