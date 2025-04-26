#include <iostream>

//析构函数：~ClassName(){} 用于程序调用结束后释放资源

class A
{
public:
    // 构造函数
    A(int x1, float y1)
    {
        std::cout << "Constructing A..." << std::endl;
        x = x1;
        y = y1;
    }

    void show()
    {
        std::cout << "x=" << x << "y=" << y << std::endl;
    }

    // 析构函数
    ~A()
    {
        std::cout << "Destructing A..." << std::endl;
    }

private:
    int x;
    float y;
};

class B
{
public:
    // 初始化列表
    B(int x1, float y1, int z1) : a(x1, y1)
    {
        std::cout << "Constructing B..." << std::endl;
        z = z1;
    }

    void show()
    {
        a.show();
        std::cout << "z=" << z << std::endl;
    }

    ~B()
    {
        std::cout << "Destructing B..." << std::endl;
    }

private:
    A a;
    int z;
};

int main(int argc, char const *argv[])
{
    B b(1, 2, 3);
    b.show();
    return 0;
}
