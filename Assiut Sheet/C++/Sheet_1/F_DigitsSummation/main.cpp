// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class DigitSum{
    private:
        int a, b;

    public:
        DigitSum(){
            std::cout << "Class Defined without and arguments, so Please enter the digits a & b ...\n";
            std::cin >> a;
            std::cin >> b;
        }
        DigitSum(int x, int y){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            a = x;
            b = y;
        }
        int calculate(){
            return (a % 10)+(b % 10);
        }
        void print(){
            std::cout << calculate();
        }
};

int main()
{
    DigitSum p;
    p.print();
}
