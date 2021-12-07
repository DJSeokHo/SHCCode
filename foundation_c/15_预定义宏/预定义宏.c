#include <stdio.h>

/*

__DATE__	当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
__TIME__	当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
__FILE__	这会包含当前文件名，一个字符串常量。
__LINE__	这会包含当前行号，一个十进制常量。
__STDC__	当编译器以 ANSI 标准编译时，则定义为 1。

*/

// 预处理器运算符
#define  message_for(a, b) printf(#a " and " #b ": We love you!\n")

// 参数化的宏
#define MY_SQUARE(x) ((x) * (x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
    
int main() {
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );

    message_for(Carole, Debra);
    
    printf("2 square is %d\n", MY_SQUARE(2));
    printf("Max between 20 and 10 is %d\n", MAX(10, 20));  

    return 0;
}