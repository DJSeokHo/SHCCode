#include <stdio.h>
#include <float.h>

int main() {

    printf("int size is : %lu\n", sizeof(int));

    printf("float size is : %lu \n", sizeof(float));
    printf("float min is: %E\n", FLT_MIN );
    printf("float max: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );

    return 0;
}