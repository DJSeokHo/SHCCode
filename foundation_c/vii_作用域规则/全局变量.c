#include <stdio.h>
 
/* 全局变量声明 */
int g;


// 在程序中，局部变量和全局变量的名称可以相同，但是在函数内，如果两个名字相同，会使用局部变量值，全局变量不会被使用。
int f = 20;

int main () {
    /* 局部变量声明 */
    int a, b;

    /* 实际初始化 */
    a = 10;
    b = 20;
    g = a + b;

    printf ("value of a = %d, b = %d and g = %d\n", a, b, g);


    /* 局部变量声明 */
    int f = 10;

    printf ("value of f = %d\n", f);
    return 0;
}