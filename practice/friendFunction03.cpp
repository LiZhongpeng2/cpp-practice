#include<iostream>
//友元函数全局访问另一个函数的全部成员
class Girl;
class Boy{
    public:
        Boy(std::string n, int a){
            name = n;
            age = a;
        }

        //在这里可以访问Girl中所有成员：
        //前提：在Girl中将Boy声明为友元函数
        void disp(Girl &);

    private:
        std::string name;
        int age;
};

class Girl {
    public:
        Girl(std::string n, int a){
            name = n;
            age = a;
        }

        //将Boy类声明为友元函数
        //Boy中的所有成员函数可以访问Girl中的成员
        friend Boy;

    private:
        std::string name;
        int age;
};

void Boy::disp(Girl &x){
    std::cout << "The boy's name is " << name << ", and his age is " <<age << "." << std::endl;
    std::cout << "The girl's name is " << x.name << ", and her age is " << x.age << "." <<std::endl;
}

int main(int argc, char const *argv[])
{
    Girl girl("Mary", 18);
    Boy boy("Tom", 19);
    boy.disp(girl);

    return 0;
}
