#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

//using namespace std;

void displaySuccessor(int i);

int main() {

    displaySuccessor(22);

    return 0;
}

void displaySuccessor(int i) {
    std::cout << "The successor of " << i << " is " << i + 1;
}

