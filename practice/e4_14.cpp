#include<iostream>
using namespace std;
class X{
    public:
        X(int aa){
            std::cout << "Constructing class X." << std::endl;
            a = aa;
        }
        int getX(){
            return a;
        }

        ~X(){
            std::cout<< "Destructing class X." << std::endl;
        }
    private:
        int a;
};

class Y{
    public:
        Y(int yy){
            std::cout << "Constructing class Y." << std::endl;
            y = yy;
        }
        int getY(){
            return y;
        }
        ~Y(){
            std::cout << "Destructing class Y." << std::endl;
        }
    private:
        int y;
};

class Z:public X, private Y{
    public:
        Z(int aa, int bb, int cc):X(aa), Y(bb){
            std::cout << "Constructing class Z." << std::endl;
            c = cc;
        }
        int getZ(){
            return c;
        }
        int getY(){
            return Y::getY();
        }
        ~Z(){
            std::cout << "Destructing class Z." << std::endl;
        }

    private:
        int c;
};




