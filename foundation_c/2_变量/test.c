#include <stdio.h>

// 函数外定义变量
int x;
int y;

int add_two_number() {

    // 给外部变量 x 和 y 赋值
    x = 1;
    y = 2;

    return x + y;
}

int main() {

    int result;

    result = add_two_number();

    printf("result is %d", result);

    return 0;
}