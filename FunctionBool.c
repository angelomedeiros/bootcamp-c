#include <stdio.h>
#include <stdbool.h>

bool returnBool();

int main() {
    bool a = returnBool();

    printf("%d", a);

    return 0;
}

bool returnBool() {
    return true;
}


