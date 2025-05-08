#include<iostream>
#include<string>

/*
当基函数和派生函数 的函数 使用同一个 变量名 时：
调用的是派生函数的函数
同时可以使用Student::functionName()的形式继承
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

class UStudent:private Student{  //私有继承 基类的public和protected在派生类中变成private,原private在派生类无法访问
    public:
        UStudent(int number1, std::string name1, float score1, std::string major1):
        Student(number1, name1, score1){
            major = major1;
        }

        void print(){
            /*
            因为类名冲突，需要加作用域符号
            如果类名不冲突，不用加
            */
            Student::print();  //继承父类同名函数  

            std::cout << "major:" << major << std::endl;
        }
    private:
        std::string major;
};

int main(int argc, char const *argv[])
{
    UStudent student(22116, "Zhang Zhi", 95, "Computer Science");
    student.print();
    return 0;
}
