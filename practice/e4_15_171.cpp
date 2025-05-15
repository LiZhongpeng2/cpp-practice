#include <iostream>

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

calss Base1 : public Base
{
public:
    int b1;
    Base1()
    {
        a = a + 10;
        std::cout << "Base1 a=" << a << std::endl;
    }
};

class Base2:public Base{
    public:
        int b2;
        Base2(){
            a = a+20;
            std::cout << "Base2 a=" << a << std::endl;
        }
};

class Derived:public Base1, public Base2{
    public:
        int d;
        Derived(){
            std::cout << "Base1::a=" << Base1::a << std::endl; //不加作用域符号会产生二义性
            std::cout << "Base2::a=" << Base2::a << std::endl;
        }
};