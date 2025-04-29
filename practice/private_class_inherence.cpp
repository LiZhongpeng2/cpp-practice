#include <iostream>
//Derived 派生
// 定义基类，后让Derived私有继承它 -> class Derived:private Base{}
class Base
{
public:
    void setx(int xx)
    {
        x = xx;
    }
    void showx()
    {
        std::cout << x << std::endl;
    }

private:
    int x;
};

class Derived : private Base
{
public:
    void setxy(int n, int m)
    {
        setx(n); // 基类的setx()在派生类中为私有成员，可以在派生类成员函数中直接访问
        y = m;
    }

    void showxy()
    {
        showx(); // 可以直接访问public函数但是不能直接访问私有成员。 std::cout << x 不可以
        std::cout << y << std::endl;
    }
private:
    int y;
};

int main(int argc, char const *argv[])
{
    Derived obj;
    obj.setxy(20,30);
    obj.showxy();
    return 0;
}
