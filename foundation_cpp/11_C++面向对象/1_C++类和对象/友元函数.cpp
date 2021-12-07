#include <iostream>
 
using namespace std;
 
/*
友元函数不属于这个类，在外部定义的话
友元函数有点类似于扩展这个类的方法。。。。
*/
class Box
{
    double width;
    public:
    friend void printWidth(Box box);
    void setWidth( double wid );
};
 
// 成员函数定义
void Box::setWidth( double wid )
{
    width = wid;
}
 
// 请注意：printWidth() 不是任何类的成员函数
void printWidth( Box box )
{
    /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
    cout << "Width of box : " << box.width <<endl;
}
 
// 程序的主函数
int main()
{
    Box box;
    
    // 使用成员函数设置宽度
    box.setWidth(10.0);
    
    // 使用友元函数输出宽度
    printWidth( box );
    
    return 0;
}