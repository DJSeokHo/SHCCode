#include <stdio.h>

int main() {

    int value = 10; // 定义一个变量

    int* pValue; // 定义一个指针变量

    pValue = &value; // 指针变量指向变量的地址，&取地址

    int newValue = *pValue; // &取值，赋值给newValue

    printf("value is %d, address is %p, newValue is %d", value, pValue, newValue);

    return 0;
}