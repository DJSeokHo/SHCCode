/*

当程序退出时，操作系统会自动释放所有分配给程序的内存，但是，建议您在不需要内存时，都应该调用函数 free() 来释放内存。

或者，您可以通过调用函数 realloc() 来增加或减少已分配的内存块的大小。让我们使用 realloc() 和 free() 函数
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() 
{
    char name[100];
    char* pDescription;

    strcpy(name, "Zara Ali");

    /* 动态分配内存, 两种方法都行 */
    // pDescription = (char *)malloc(30 * sizeof(char));
    pDescription = calloc(30, sizeof(char));

    if(pDescription == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else {
        strcpy(pDescription, "Zara ali a DPS student.");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", pDescription);


    /* 假设您想要存储更大的描述信息 */
    // pDescription = (char *)malloc(100 * sizeof(char));
    pDescription = calloc(100, sizeof(char));
    if(pDescription == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat(pDescription, "She is in class 10th");
    }


    printf("Name = %s\n", name);
    printf("Description: %s\n", pDescription);


    /* 使用 free() 函数释放内存 */
    free(pDescription);


    return 0;
}