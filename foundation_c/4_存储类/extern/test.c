#include <stdio.h>
 
int count; // 声明
extern void write_extern(); // 声明
 
int main() {
   count = 5;
   write_extern();
}