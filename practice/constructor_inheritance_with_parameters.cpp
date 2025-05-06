#include<iostream>
#include<string>

/*
带参数的基类被继承时，在继承类中如何初始化参数：参数列表
*/
class Student{
    public:
        Student(int number1, std::string name1, float score1){
            number = number1;
            name = name1;
            score = score1;
        }
        void print(){
            std::cout << "number:" << number << std::endl;
            std::cout << "name:" << name << std::endl;
            std::cout << "score:" << score << std::endl;
        }
    protected:
        int number;
        std::string name;
        float score;
};

class UStudent:public Student{ //公有派生类
    public:
        UStudent(int number1, std::string name1, float score1, std::string major1)
        :Student(number1, name1, score1){ //实参，不是形参，调用基类构造函数
            major = major1;
        }

        void print1(){
            print();
            std::cout << "major" << major << std::endl;
        }
    private:
        std::string major;
};

int main(int argc, char const *argv[])
{
    float number;
    std::string name;
    float score;
    std::string major;
    std::cin >> number >> name >> score >> major;

    UStudent student(number, name, score,major);
    student.print1();
    return 0;
}
