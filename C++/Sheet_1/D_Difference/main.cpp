// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Difference{
    private:
        int a, b, c, d, z;
    public:
        Difference(){
            std::cout << "Class Defined without any arguments, so it's empty.\nPlease enter a, b, c and d\n";
            std::cin >> a >> b >> c >> d;
        }
        Difference(const Difference &dif){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            a = dif.a;
            b = dif.b;
            c = dif.c;
            d = dif.d;
        }
        int calculate(){
            z = ((a * b) - (c * d));
            return z;
        }
        void print(){
//            calculate();
//            cout << "Difference = " << z;
            cout << "Difference = " << calculate();
        }
};

int main()
{
    Difference def;
    def.print();
}
