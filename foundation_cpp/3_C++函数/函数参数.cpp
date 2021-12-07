/*
传值调用	该方法把参数的实际值赋值给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。
指针调用	该方法把参数的地址赋值给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
引用调用	该方法把参数的引用赋值给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。

默认情况下，C++ 使用传值调用来传递参数。
*/

// 参数的默认值
#include <iostream>
using namespace std;
 
int sum(int a, int b=20) {
    int result;

    result = a + b;

    return (result);
}
 
int main () {
    // 局部变量声明
    int a = 100;
    int b = 200;
    int result;

    // 调用函数来添加值
    result = sum(a, b);
    cout << "Total value is :" << result << endl;

    // 再次调用函数
    result = sum(a);
    cout << "Total value is :" << result << endl;

    return 0;
}