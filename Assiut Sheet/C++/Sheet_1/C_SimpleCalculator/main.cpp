// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class SimpleCalculator{
    private:
        int x, y;
    public:
        SimpleCalculator(){w
            std::cout << "Class Defined without any arguments, so it's empty.\nPlease enter your x and y\n";
            std::cin >> x;
            std::cin >> y;
        }
        SimpleCalculator(int a, int b){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            x = a;
            y = b;
        }
        void result(){
            std::cout << x << " + " << y << " = " << x + y << " \n";
            std::cout << x << " - " << y << " = " << x - y << " \n";
            std::cout << x << " * " << y << " = " << x * y << " \n";
        }
};

int main()
{
    SimpleCalculator z(5, 6), w;
    w.result();
    z.result();
}
