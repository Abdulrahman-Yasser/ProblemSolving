// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Comparison{
    private:
        char input_char[20];

    public:
        Comparison(){
            std::cout << "Class Defined without and arguments, so it's noname\n";
            strcpy(input_char, "no name");
        }
        Comparison(char a[]){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            strcpy(input_char, a);
        }
        void set_inputChar(){
            std::cin >> input_char;
        }
        char *get_inputChar(){
            return input_char;
        }
        void print(){
            std::cout << "Hello " << input_char << "\n";
        }
};

int main()
{
    printer p;
    p.set_inputChar();
    p.print();
}
