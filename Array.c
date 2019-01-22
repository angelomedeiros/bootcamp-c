#include <stdio.h>

void main(){
    int v[3], count;

    v[0] = 11;
    v[1] = 23;
    v[2] = 35;

    for (count = 0; count < 3; count++) {
        printf("Posição %d: %d\n", count, v[count]);
    }
}
