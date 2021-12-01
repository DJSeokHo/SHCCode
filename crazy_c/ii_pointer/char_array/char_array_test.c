#include <stdio.h>


void fortune_cookie(char msg[]) {

    printf("Message reads: %s\n", msg);
    printf("Message 保存在 %p\n", msg);
    printf("Message occupies %i bytes\n", sizeof(msg)); // 这里是指 指针变量的大小，因为 car array 其实是个指针变量
}

int main() {

    char quote[] = "Cookies make you fat";

    printf("quote 保存在 %p\n", quote);

    // 传给函数的其实是指针
    fortune_cookie(quote);

    return 0;
}