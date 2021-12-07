#include <stdio.h>

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

/*
定义常量
在 C 中，有两种简单的定义常量的方式：

使用 #define 预处理器。
使用 const 关键字。
*/

int main() {

    const int CONST_LENGTH = 10;
    const int CONST_WIDTH  = 5;
    const char CONST_NEWLINE = '\n';

    int area;
  
    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
    printf("value of area : %d", area);


    int constArea;
  
    constArea = CONST_LENGTH * CONST_WIDTH;
    printf("%c", CONST_NEWLINE);
    printf("value of area : %d", constArea);
    printf("%c", CONST_NEWLINE);
    printf("value of area : %d", constArea);

    return 0;
}