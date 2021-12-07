#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() 
{
    char name[100];
    char* pDescription;

    strcpy(name, "Zara Ali");

    /* 动态分配内存, 两种方法都行 */
    // pDescription = (char *)malloc(200 * sizeof(char));
    pDescription = calloc(200, sizeof(char));

    if(pDescription == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else {
        strcpy(pDescription, "Zara ali a DPS student in class 10th");
    }

    printf("Name = %s\n", name);

    printf("Description: %s\n", pDescription);

}