#include <stdio.h>

/* 函数声明 */
int max(int num1, int num2);

/*
    如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的形式参数。

    形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。

    当调用函数时，有两种向函数传递参数的方式：

    调用类型	描述
    传值调用	该方法把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数不会影响实际参数。
    引用调用	通过指针传递方式，形参为指向实参地址的指针，当对形参的指向操作时，就相当于对实参本身进行的操作。

    
    默认情况下，C 使用传值调用来传递参数。一般来说，这意味着函数内的代码不能改变用于调用函数的实际参数。
*/
int main() {


    int a = 1;
    int b = 2;

    int ret;

    ret = max(a, b);

    printf( "Max value is : %d\n", ret);

    return 0;
}

/* 函数返回两个数中较大的那个数 */
int max(int num1, int num2) {
   /* 局部变量声明 */
   int result;
 
    if (num1 > num2) {
        result = num1;
    }
    else {
        result = num2;
    }

    return result; 
}