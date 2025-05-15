#include <iostream>

// 虚基类继承：class Base1:virtual public Base{}
//构造函数执行顺序
class Base
{
public:
    Base(int sa)
    {
        a = sa;
        std::cout << "Constructing Base" << std::endl;
    }

private:
    int a;
};

class Base1 : virtual public Base
{ // 继承虚基类
public:
    Base1(int sa, int sb):Base(sa)
    {
        b = sb;
        std::cout << "COnstructing Base1" << std::endl;
    }

private:
    int b;
};

class Base2 : virtual public Base
{
public:
    Base2(int sa, int sc):Base(sa)
    {
        c = sc;
        std::cout << "Construcing Base2" <<std::endl;
    }
private:
    int c;
};

class Derived : public Base1, public Base2
{
public:
    Derived(int sa, int sb, int sc, int sd):Base(sa),
            Base1(sa, sb), Base2(sa,sc)
    {
        d = sd;
        std::cout << "Constructing Derived" << std::endl;
    }

private:
    int d;
};

int main(int argc, char const *argv[])
{
    Derived obj(2,4,6,8);
    return 0;
}
