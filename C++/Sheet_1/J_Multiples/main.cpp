// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Multibly{
    private:
        int a, b;
    public:
        Multibly(){
            std::cout << "Class Defined without and arguments, so please enter the two numbers a & b\n";
            cin >> a;
            cin >> b;
        }
        Multibly(int a, int b){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
        }
        void print(){
            if(a % b > 0){
                std::cout << "No Multiples \n";
            }else{
                std::cout << "Multiples\n";
            }
        }
};

int main()
{
    Multibly m;
    m.print();
}
