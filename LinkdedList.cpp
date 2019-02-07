#include <iostream>
#include <new>

using namespace std;

struct node {
    int numericalValue;
    struct node *next;
};

int main() {
    node *pointerLinked;

    node *newFisrtValue = new node;

    newFisrtValue->numericalValue = 13;
    newFisrtValue->next = NULL;

    pointerLinked = newFisrtValue;

    node *newSecondValue = new node;

    newSecondValue->numericalValue = 20;
    newSecondValue->next = NULL;

    pointerLinked->next = newSecondValue;

    while ( pointerLinked != NULL ) {
        cout << "Value: " << pointerLinked->numericalValue << "\n";
        pointerLinked = pointerLinked->next;
    }


    return 0;
}
