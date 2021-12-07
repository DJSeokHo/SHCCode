/*
执行程序时，可以从命令行传值给 C 程序。这些值被称为命令行参数，它们对程序很重要，特别是当您想从外部控制程序，而不是在代码内对这些值进行硬编码时，就显得尤为重要了。

命令行参数是使用 main() 函数参数来处理的，其中，argc 是指传入参数的个数，argv[] 是一个指针数组，指向传递给程序的每个参数。

在终端输入 ./你的程序名 空格 参数 来执行编译好的程序，这个例子:
./命令行参数 "testing1 testing2"  
*/


#include <stdio.h>

int main(int argc, char *argv[])  
{
   if(argc == 2)
   {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if(argc > 2)
   {
      printf("Too many arguments supplied.\n");
   }
   else
   {
      printf("One argument expected.\n");
   }
}