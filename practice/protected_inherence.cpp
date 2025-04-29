#include <iostream>

class Base
{
public:
    int z;
    void setx(int xx)
    {
        x = xx;
    }

    int getx()
    {
        return x;
    }
private:
    int x;
protected:
    int y;
};

//保护继承
class Derived:protected Base{
    public:
        int p;
        void setall(int a, int b, int c, int d, int e, int f);
        void show();

    private:
        int m;
    protected:
        int n;
};

void Derived::setall(int a, int b, int c, int d, int e, int f){
    // x = a;  //错误的，在派生类中不可以直接访问
    setx(a);   //正确
    y = b;
    z = c;
    m = d;
    n = e;
    p = f;
};

void Derived::show(){
    // std::cout << "x=" << x << std::endl;  //错误的，不可以直接访问
    std::cout << "x=" << getx() << std::endl;
    std::cout << "y=" << y << std::endl;
    std::cout << "z=" << z << std::endl;
    std:: cout << "m=" << m << std::endl;
    std:: cout << "n=" << n << std::endl;
}

