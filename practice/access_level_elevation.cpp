#include<iostream>

class A{
    public:
        A(int x1){
            x = x1;
        }
        void print(){
            std::cout << "x=" << x << std::endl;
        }
    private:
        int x;
};

class B:private A{
    public:
        B(int x1, int y1):A(x1){
            y = y1;
        }
        using A::print;  //类型提升 access level elevation
    private:
        int y;
};

int main(int argc, char const *argv[])
{
    B b(10, 20);
    b.print();
    return 0;
}
