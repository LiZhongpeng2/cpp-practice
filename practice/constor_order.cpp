// 派生类与基类的构造函数和析构函数的执行顺序
#include <iostream>
class Base
{
public:
    // 构造函数
    Base()
    {
        std::cout << "Constructing base class\n";
    }

    // 析构函数
    ~Base()
    {
        std::cout << "Destructing base class\n";
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Constructing derived class" << std::endl;
    }

    ~Derived()
    {
        std::cout << "Deconstructing derived class" << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    //创建派生类的时候会自动进行基类的public的构造函数，对基类的成员进行初始化。
    Derived obj;
    return 0;
}
