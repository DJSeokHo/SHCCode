/*
引用头文件的语法

#include <file> 这种形式用于引用系统头文件。它在系统目录的标准列表中搜索名为 file 的文件。在编译源代码时，您可以通过 -I 选项把目录前置在该列表前。

#include "file" 这种形式用于引用用户头文件。它在包含当前文件的目录中搜索名为 file 的文件。在编译源代码时，您可以通过 -I 选项把目录前置在该列表前。
*/

#include <stdio.h>


/*
只引用一次头文件
如果一个头文件被引用两次，编译器会处理两次头文件的内容，这将产生错误。为了防止这种情况，标准的做法是把文件的整个内容放在条件编译语句中

#ifndef HEADER_FILE
#define HEADER_FILE

the entire header file file

#endif
*/
#ifndef HEADER_FILE
#define HEADER_FILE

#include "test.h"

#endif


int main(void) {

    test();

    return 0;
}

void test(void) {
    printf("go go go");
}
