#include<iostream>

/*
Friend Function：
1.突破类封装限制、允许外部函数访问私有成员的特权函数，它不属于类，却能进去你家翻抽屉
2.类内定义，类外调用；
3.友元函数是普通函数，不是类的成员；
4.所以不需要对象调用，也没有 this 指针；
5.但它可以访问类的私有和保护成员。
-----------
friend void showSecret(const A& a); // 声明友元
*/
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
