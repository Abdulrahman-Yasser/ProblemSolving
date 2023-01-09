// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class AgeInDays{
    private:
        unsigned int days;

    public:
        AgeInDays(){
            std::cout << "Class Defined without and arguments, Please enter how many days\n";
            cin >> days;
            while (days > 1000000)
            {
                cout << "Please make sure the range from 0 : 1000000\n";
                cin >> days;
            }
        }
        AgeInDays(int a){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            days = a;
            while (days > 1000000)
            {
                cout << "Please make sure the range from 0 : 1000000\n";
                cin >> days;
            }
        }
        void print(){
            int result;
            std::cout << "Years : " << days/365 << "\n";
            result = days % 365;
            std::cout << "Months : " << result/30 << "\n";
            result = result % 30;
            std::cout << "Days : " << result << "\n";
        }
};

int main()
{
    AgeInDays p;
    p.print();
}
