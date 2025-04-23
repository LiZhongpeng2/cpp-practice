#include<iostream>

/*
a function can be defined as a frined function of two classes
*/

//Advance Statement
class Boy; 

//测试
class Girl {
    public:
        Girl(std::string n, int d);
        friend void disp(const Girl &, const Boy &);

    private:
        std::string name;
        int age;
};

Girl::Girl(std::string n, int a){
    name = n;
    age = a;
}

class Boy{
    public:
        Boy(std::string n, int a);
        friend void disp(const Girl& plg, const Boy& plb);

    private:
        std::string name;
        int age;
};

Boy::Boy(std::string n, int a){
    name = n;
    age = a;
}

void disp(const Girl& plg, const Boy& plb){
    std::cout << "The girl's name is " << plg.name << ", age is " << plg.age << std::endl;
    std::cout << "The boy's name is " << plb.name << ", age is " << plb.age << std::endl;
}

int main(int argc, char const *argv[])
{
    Girl g1("Li Mei",18);
    Boy b1("Wang Qiang",19);
    
    disp(g1,b1);
    return 0;
}


