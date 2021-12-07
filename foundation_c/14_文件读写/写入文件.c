#include <stdio.h>


int main() {

    FILE *pFile = NULL;

    pFile = fopen("test.txt", "w+");
    fprintf(pFile, "this is test\n");
    fputs("This is testing for fputs...\n", pFile); // 函数 fputc() 把参数 c 的字符值写入到 fp 所指向的输出流中。如果写入成功，它会返回写入的字符，如果发生错误，则会返回 EOF。
    fclose(pFile);

    return 0;
}