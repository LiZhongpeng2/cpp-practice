#include<iostream>
/*
继承的构造函数和析构函数执行顺序
*/
class Base{
    public:
        Base(int i){
            x = i;
            std::cout << "Constructing base class\n";
        }

        void show(){
            std::cout << "x=" << x << "\n";
        }

        ~Base(){
            std::cout << "Destructing base class\n";
        }
    private:
        int x;
};

class Derived:public Base{
    public:
        Derived(int i):Base(i),d(i){
            std::cout << "Constructing Derived class\n";
        }

        ~Derived(){
            std::cout << "Destructing Derived class\n";
        }
    private:
        Base d;
};

int main(int argc, char const *argv[])
{
    Derived obj(5);
    obj.show();
    return 0;
}
