#include <iostream>
 
using namespace std;


class Line {

    public:

        // 这是构造函数
        Line(double length) {
            cout << "Object is being created with defalut value " << length << endl;
            this->length = length;
        }

        // 这是构造函数
        Line() {
            cout << "Object is being created" << endl;
        }

        // 析构函数
        ~Line(void) {
            cout << "Object is being deleted" << endl;
        }

        void setLength(double length) {
            this->length = length;
        }
        double getLength(void) {
            return length;
        }
    
    
    private:
        double length;


};

int main() {

    // 定义类实例
    Line line;
 
    // 设置长度
    line.setLength(6.0); 
    cout << "Length of line : " << line.getLength() <<endl;

    Line line1(8.0);
    cout << "Length of line : " << line1.getLength() <<endl;
    
    return 0;
}