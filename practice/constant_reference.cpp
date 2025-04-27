// Usage of constant reference
// example: const int &a

#include<iostream>

int add(const int &i, const int &j);

int main(int argc, char const *argv[])
{
    int a,b;
    std::cin >> a >> b;
    const int &pa = a;
    const int &pb = b;
    std::cout << a << "+" << b << "=" << add(pa, pb);
    return 0;
}

int add(const int &a, const int &b){
    return a+b;
}
