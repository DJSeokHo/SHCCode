#include <stdlib.h>  
#include <stdio.h>

/*
    函数指针作为某个函数的参数
    函数指针变量可以作为某个函数的参数来使用的，回调函数就是一个通过函数指针调用的函数。

    简单讲：回调函数是由别人的函数执行时调用你实现的函数。
*/

// 回调函数
void function_test(void (*p_on_finished)(void)) {
    printf("test\n");
    p_on_finished();
}
 
// 获取随机值
void on_finished(void) {
    printf("finished");
}



int main() {

    function_test(on_finished);

    return 0;
}