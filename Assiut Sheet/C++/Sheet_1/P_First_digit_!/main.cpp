// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class First_digit{
    private:
        int x;

    public:
        First_digit(){
            std::cout << "Class Defined without and arguments, Please enter the integer, make sure the value between 1000 : 9999 \n";
            do{
                std::cout << "make sure the value between 1000 : 9999 \n";
                cin >> x;
            }while(x < 1000 || x > 9999);
        }
        First_digit(int a){
            x = a;
            while(x < 1000 || x > 9999){
                std::cout << "Enter the right value of x \n";
                cin >> x;
            }
        }
        void print(){
            if((x / 1000) % 2){
                std::cout << "ODD\n";
            }else{
                std::cout << "EVEN\n";
            }
        }
};

int main()
{
    First_digit p;
    p.print();
}
