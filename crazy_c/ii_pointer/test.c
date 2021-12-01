#include <stdio.h>

int a = 0; // 全局变量分配在全局量区

int main() {

    // 变量分配在栈区
    int x = 6;
    int y = 'd';
    
    // & 取值的地址， * 取地址的值
    printf("%d %p %d\n", a, &a, *&a);
    printf("%d %p %d\n", x, &x, *&x);
    printf("%c %p %c", y, &y, *&y);

    return 0;
}