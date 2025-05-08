#include<iostream>

//多继承使用规则
//类的本质也是一种类型声明，需要加;

class X{
    public:
        void setX(int x1){
            a = x1;
        }
        void showX(){
            std::cout << "a=" << a << std::endl;
        }

    private:
        int a;
};

class Y{
    public:
        void setY(int y1){
            b = y1;
        }
        void showY(){
            std::cout << "b=" << b << std::endl;
        }
    private:
        int b;
};

class Z:public X, private Y{ 
    public:
        void setZ(int x, int y){
            c = x;
            setY(y);
        }
        void showZ(){
            showY();
            std::cout << "c=" << c << std::endl;
        }
    private:
        int c;
};

int main(int argc, char const *argv[])
{
    Z obj;
    obj.setX(3);
    obj.showX();
    obj.setZ(6, 8);
    obj.showZ();
    return 0;
}
