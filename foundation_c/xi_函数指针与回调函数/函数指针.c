#include <stdio.h>


/*

    函数指针
    函数指针是指向函数的指针变量。

    通常我们说的指针变量是指向一个整型、字符型或数组等变量，而函数指针是指向函数。

    函数指针可以像一般函数一样，用于调用函数、传递参数。

    函数指针变量的声明：

*/

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {

    int (*pMax)(int, int) = max;

    int a = 13;
    int b = 7;
    int c = 15;
    int d;

    d = pMax(a, b);
    printf("max a b is %d\n", d);

    d = pMax(a, c);
    printf("max a c is %d\n", d);

    d = pMax(b, c);
    printf("max b c is %d\n", d);

    /* 与直接调用函数等价，d = max(max(a, b), c) */
    d = pMax(pMax(a, b), c); 
    printf("max a b c is %d\n", d);

    return 0;
}