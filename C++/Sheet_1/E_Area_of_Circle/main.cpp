// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
using namespace std;
class Circle{
    private:
        double R;

    public:
        Circle():R(0){
            std::cout << "Class Defined without and arguments, so please enter it's value\n";
            std::cin >> R;
        }
        Circle(int a){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            R = a;
        }
        double calculate(){
            return (R * R * 22 / 7);
        }
        void print(){
            std::cout << setprecision(9) << calculate() ;
        }
};

int main()
{
    Circle p;
    p.print();
}
