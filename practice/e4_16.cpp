#include <iostream>

// 虚基类继承：class Base1:virtual public Base{}
class Base
{
public:
    Base()
    {
        a = 5;
        std::cout << "Base a=" << a << std::endl;
    }

protected:
    int a;
};

class Base1 : virtual public Base
{ // 继承虚基类
public:
    Base1()
    {
        a = a + 10;
        std::cout << "Base1 a=" << a << std::endl;
    }
};

class Base2 : virtual public Base
{
public:
    Base2()
    {
        a = a + 20;
        std::cout << "Base2 a=" << a << std::endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    Derived()
    {
        std::cout << "Derived a=" << a << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Derived obj;
    return 0;
}
