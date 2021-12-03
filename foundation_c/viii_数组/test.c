#include <stdio.h>

// 声明数组 type arrayName [ arraySize ];
// double balance[10];

// 初始化数组
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};

int main() {

    balance[4] = 50.0;
    printf("balance 4 is %f", balance[4]);


    int n[10]; /* n 是一个包含 10 个整数的数组 */

    /* 初始化数组元素 */         
    for(int i = 0; i < 10; i++) {
        n[i] = i + 100; /* 设置元素 i 为 i + 100 */
    }

    /* 输出数组中每个元素的值 */
    for(int i = 0; i < 10; i++) {
        printf("Element[%d] = %d\n", i, n[i]);
    }

    return 0;
}