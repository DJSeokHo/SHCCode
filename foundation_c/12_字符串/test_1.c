#include <stdio.h>
#include <string.h>

/*
    1	strcpy(s1, s2);
    复制字符串 s2 到字符串 s1。

    2	strcat(s1, s2);
    连接字符串 s2 到字符串 s1 的末尾。

    3	strlen(s1);
    返回字符串 s1 的长度。

    4	strcmp(s1, s2);
    如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。

    5	strchr(s1, ch);
    返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
    
    6	strstr(s1, s2);
    返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
*/
int main () {
    char str1[] = "coding";
    char *str2 = "with";
    char *str3 = "cat";
    
    printf("str1 is %s, len is %lu\n", str1, strlen(str1));
    printf("str2 is %s, len is %lu\n", str2, strlen(str2));

    /* 复制 str2 到 str1 */
    // strcpy(str1, str2);
    // printf("str1 is: %s\n", str1);
 
    char str4[80];
    /* 连接 str1 和 str2 */
    strcpy(str4, str1);
    strcat(str4, str2);
    strcat(str4, str3);
    printf("str4 is: %s\n", str4);
    printf("str4 len is: %lu\n", strlen(str4));
 
    return 0;
}