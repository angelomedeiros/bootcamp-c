#include <stdio.h>
#include <time.h>

void main() {
    srand((unsigned)time(NULL));

    int n03 = rand() % 3;
    printf("%d\n", n03); // range [0,2]

    int n17 = (rand() % 7) + 1;
    printf("%d", n17);
}
