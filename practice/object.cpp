#include <iostream>
#include <string>

//对象的创建和使用，在一个类中使用另一个类

class Score
{
public:
    Score(float c = 0, float e = 0, float m = 0);
    void show();

private:
    float computer;
    float english;
    float mathematics;
};

Score::Score(float c, float e, float m)
{
    computer = c;
    english = e;
    mathematics = m;
}

void Score::show()
{
    std::cout << "\nComputer:" << computer << std::endl;
    std::cout << "English:" << english << std::endl;
    std::cout << "Math:" << mathematics << std::endl;
}

class Student
{
private:
    std::string name;
    std::string stu_no;
    Score score;

public:
    Student(std::string namee, std::string stu_noo, float s1, float s2, float s3);
    void show();
};

Student::Student(std::string namee, std::string stu_noo, float s1, float s2, float s3) : score(s1, s2, s3)
{
    name = namee;
    stu_no = stu_noo;
}

void Student::show()
{
    std::cout << "\nName:" << name << std::endl;
    std::cout << "No:" << stu_no << std::endl;
    score.show();
}

int main(int argc, char const *argv[])
{
    Student student1("Li xiaoming", "990201", 90, 80, 70 );
    Student student2("Zhang yongsheng", "08150202", 89, 88, 87);
    student1.show();
    student2.show();
    return 0;
}

