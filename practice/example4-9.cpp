#include<iostream>
class Student{
    public:
        Student(int number1, std::string name1, float score1){
            number = number1;
            name = name1;
            score = score1;
        }

        void print(){
            std::cout << "No:" << number << std::endl;
            std::cout << "Name:" << name << std::endl;
            std::cout << "Score:" << score << std::endl;
        }
    protected:
        int number;
        std::string name;
        float score;
};

class UStudent:public Student{
    public:
        UStudent(int number1, std::string name1, float score1, int number2, std::string name2,
        float score2, int number3, std::string name3, float score3, std::string major1):Student(number1, name1, score1),
        auditor1(number2, name2, score2),auditor2(number3, name3, score3){
            major = major1;
        }

    void print(){
        std::cout << "Student:" << std::endl;
        Student::print();  //直接调用Student基类的public函数
        std::cout << "Major:" << major << std::endl; 
    }

    void print_auditor1(){
        std::cout << "auditor:" << std::endl;
        auditor1.print();
    }

    void print_auditor2(){
        std::cout << "auditor:" << std::endl;
        auditor2.print();
    }

    private:
        std::string major;
        Student auditor1;  //多个对象
        Student auditor2;
};

int main()
{
    UStudent stu(2001,"Zhang_Zhi",95,3001,"Wang_Da",70,3002,"Li_San",76,"IOT Engineering");
    stu.print();
    stu.print_auditor1();
    stu.print_auditor2(); 
        
    return 0;
} 
