#include <iostream>

class Base
{
public:
    void setxy(int xx, int yy)
    {
        x = xx;
        y = yy;
    }

    void showxy()
    {
        std::cout << "x=" << x << std::endl;
        std::cout << "y=" << y << std::endl;
    }

private:
    int x;

protected:
    int y;
};

// 公有继承
class Derived : public Base
{
public:
    void setxyz(int m, int n, int l)
    {
        setxy(m, n);
        z = l;
    }

    void showxyz()
    {
        // std::cout << "x=" << x <<std::endl; //错的，不可以直接访问
        // std::cout << "y=" << y << std::endl; //正确，可以直接访问protected成员
        showxy();
        std::cout << "z=" << z << std::endl;
    }

private:
    int z;
};