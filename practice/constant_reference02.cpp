// If we declare a "constant" variable in our class,
// we can only initialize it in the constructor, like Date::Date(int y) : year(y)
// and must using the member initializer list.

#include<iostream>

class Date{
    public:
        Date(int y, int m, int d );
        void showdate();

    private:
        const int year;
        const int month;
        const int day;
};

Date::Date(int y, int m, int d):year(y), month(m), day(d){
}

void Date::showdate(){
    std::cout << year << "." << month << "." << day <<std::endl;
}

int main(int argc, char const *argv[])
{
    int a,b,c;
    std::cin >> a >> b >> c;
    Date date(a,b,c);
    date.showdate();
    return 0;
}
