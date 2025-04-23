#include<iostream>

class Girl {
    public:
        Girl(std::string n, int d){
            name = n;
            age = d;
        }
        friend void disp(Girl &);

    private:
        std::string name;
        int age;
};

void disp(Girl &x){
    std::cout << "The girl's name is " << x.name << ", age is " << x.age << "." << std::endl;
}

int main(int argc, char const *argv[])
{

    std::string name;
    int age;

    //std::cin 默认将回车、空格、tab当作结束符
    //使用std::getline只有在按下回车时才结束
    //std::getline 只能读取std::string

    //先使用std::cin()再使用std::getline()需要先清除缓冲区的空格
    //std::cin.ignore()

    std::getline(std::cin, name);
    std::cin >> age;

    Girl girl(name, age);
    disp(girl);
    return 0;
}
