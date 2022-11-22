// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class chaaar{
    private:
        char input_char;

    public:
        chaaar(){
            std::cout << "Class Defined without and arguments, so Enter it's value\n";
            cin >> input_char;
        }
        chaaar(char a){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            input_char = a;
        }
        void print(){
            if(input_char <= 0x5a && input_char >= 0x41){
                cout << char(input_char + 0x20);
            }else if(input_char <= 0x7a && input_char >= 0x61){
                cout << char(input_char - 0x20);
            }
        }
};

int main()
{
    chaaar p;
    p.print();
}
