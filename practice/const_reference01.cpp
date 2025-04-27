// A constant object does not permit modification operations as shown below. Consider the following declaration:
// In the `main` function: `Sample const a(10, 20);`
// If we write code like `a.setValue(30)` or `a.m = 40`, 
// these operations are not allowed in C++. 


#include<iostream>

class Sample{
    public:
        int m;
        Sample(int i, int j){
            m = i;
            n = j;
        };
        void setValue(int i){
            n = i;
        }
        void disp(){
            std::cout << "m=" << m << std::endl;
            std::cout << "n=" << n << std::endl;
        }

    private:
        int n;
};

int main(int argc, char const *argv[])
{
    Sample a(10,20);
    a.setValue(40);
    a.m = 30;
    a.disp();
    return 0;
}
