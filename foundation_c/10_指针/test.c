#include <stdio.h>


int main() {

    int value = 10;
    int* pValue = &value;

    printf("value address is %p\n", pValue);
    printf("value is %d\n", *pValue);
    printf("value is %d\n\n", value);



    int* p1 = &value;
    int** p2 = &p1;

    printf("var = %d\n", value);
    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n", *p1);
    printf("p2 = %p\n", p2);
    printf("**p2 = %d\n", **p2);

    return 0;
}