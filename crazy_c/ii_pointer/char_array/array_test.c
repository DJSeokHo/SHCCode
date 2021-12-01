#include <stdio.h>

int main() {

    int contestants[] = {1, 2, 3};

    int* choice = contestants;

    printf("choice address is %p\n", choice);
    printf("choice is %d\n", *choice);


    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;

    printf("%i", contestants[2]);

    return 0;
}