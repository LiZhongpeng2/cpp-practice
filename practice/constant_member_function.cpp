// We can define both const member functions and ordinary member functions.
// They will be overloaded when we use ordinary class variables and constant class variables in the `main` function.

#include<iostream>
class Date{
    public:
        Date(int y, int m, int d);
        void showDate();
        void showDate() const; //define a const member function
        
    private:
        int year;
        int month;
        int day;
};

Date::Date(int y, int m, int d):year(y), month(m), day(d){};
void Date::showDate(){
    std::cout << "showDate1" << std::endl;
    std::cout << year << "." << month << "." << day << std::endl;
}

void Date::showDate() const{
    std::cout << "showDate2" << std::endl;
    std::cout << year << "." << month << "." << day << std::endl;
}

int main(int argc, char const *argv[])
{
    Date date1(1998, 4, 28);
    date1.showDate();
    
    const Date date2(2002, 11, 14);
    date2.showDate();
    return 0;
}
