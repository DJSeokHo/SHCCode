#include <stdio.h>


void func1(void);

static int count = 10;        /* 全局变量 - static 是默认的 */
static int thingy = 5;
/*
    static 存储类指示编译器在程序的生命周期内保持局部变量的存在，
    而不需要在每次它进入和离开作用域时进行创建和销毁。
    因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
    static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
    全局声明的一个 static 变量或方法可以被任何函数或方法调用，只要这些方法出现在跟 static 变量或方法同一个文件中。
*/
int main() {

    while (count--) {

        func1();
    }

    return 0;
}

void func1(void) {
    
    thingy++;
    printf("thingy is %d, count is %d\n", thingy, count);

}