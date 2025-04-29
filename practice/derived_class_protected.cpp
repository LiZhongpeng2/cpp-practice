#include <iostream>

class Base
{
public:
    void seta(int aa)
    {
        a = aa;
    }

    void showa()
    {
        std::cout << "a=" << a << std::endl;
    }

protected: // 声明为protected
    int a;
};

class Derive1 : private Base
{
public:
    void setab(int sa, int sb)
    {
        a = sa; // 正确的。a在派生类中为私有成员，派生类成员函数可以访问
        b = sb;
    }

    void showab()
    {
        std::cout << "a=" << a << std::endl;
        std::cout << "b=" << b << std::endl;
    }

protected:
    int b;
};

class Derive2 : private Derive1
{
public:
    void setabc(int a, int b, int cc)
    {
        setab(a, b); // 可以直接访问，但是如果直接访问Base里面的a成员是不行的
        c = cc;
    }

    void showabc()
    {
        // std::cout << a << std::endl; //不可以，a在类Derive2中为不可直接访问对象
        // std::cout << "b=" << b << std::endl; // 可以，b在类derive2中为为私有成员
        showab();  //可以，直接访问私有成员Derive1中的成员函数
        std::cout << "c=" << c << std::endl;
    }
private:
    int c;
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
