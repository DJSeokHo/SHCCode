#include <iostream>
 
using namespace std;
 
int main( )
{
    char str[] = "Hello C++";
    cout << "Value of str is : " << str << endl;

    // char name[50];
    // cout << "请输入您的名称： ";
    // cin >> name;
    // cout << "您的名称是： " << name << endl;

    char str_err[] = "Unable to read....";
    cerr << "Error message : " << str_err << endl;
    clog << "Error message : " << str << endl;
}