/*
本章将讲解 C 中的动态内存管理。C 语言为内存的分配和管理提供了几个函数。这些函数可以在 <stdlib.h> 头文件中找到。

1 void *calloc(int num, int size);
在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。所以它的结果是分配了 num*size 个字节长度的内存空间，并且每个字节的值都是0。

2 void free(void *address);
该函数释放 address 所指向的内存块,释放的是动态分配的内存空间。

3 void *malloc(int num);
在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。

4 void *realloc(void *address, int newsize);
该函数重新分配内存，把内存扩展到 newsize。
*/