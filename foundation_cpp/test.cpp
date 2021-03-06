#include <iostream>
using namespace std;

// 变量声明
// extern int a, b;
// extern int c;
// extern float f;
/*
变量声明向编译器保证变量以给定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。
变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。
当您使用多个文件且只在其中一个文件中定义变量时（定义变量的文件在程序连接时是可用的），
变量声明就显得非常有用。您可以使用 extern 关键字在任何地方声明一个变量
*/

// 定义常量
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

const int HEIGHT = 10;


// 函数声明
int func();

int main() {

    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << "Hello, world!" << endl;
    cout << "Hello, world!" << "\n";


    cout << c << endl;
 
    f = 70.0/3.0;
    cout << f << endl;


    // 函数调用
    int i = func();

    cout << "HEIGHT is " << HEIGHT << endl;

    return 0;
}


// 函数定义
int func()
{
    return 0;
}