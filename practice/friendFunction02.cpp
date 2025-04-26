#include<iostream>
#include<string>

//成员函数声明为友元函数
class Girl;
class Boy {
    public:
        Boy(std::string n, int a){
            name = n;
            age = a;
        }

        void disp(Girl &);

    private:
        std::string name;
        int age;
};

class Girl{
    public:
        Girl(std::string n, int a){
            name = n;
            age = a;
        }
        //类Boy的成员函数为Girl的友元函数
        friend void Boy::disp(Girl &);

    private:
        std::string name;
        int age;
};

void Boy::disp(Girl &x){
    std::cout << "The boy's name is " << name << ", age is " << age << std::endl;
    std::cout << "The girl's name is " << x.name << ", age is " << x.age << std::endl; 
}

int main(int argc, char const *argv[])
{
    Boy b1("Wang Qiang", 19);
    Girl g1("Li Mei", 18);
    b1.disp(g1);
    return 0;
}


