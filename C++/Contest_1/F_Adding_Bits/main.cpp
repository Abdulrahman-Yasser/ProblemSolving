#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Adding_Bits{
    private:
        unsigned int a;
    public:
        Adding_Bits(){
            std::cout << "Class Defined without and arguments, Please enter the arguments\n";
            do{
                std::cout << "a : Even Number, Make sure the number is between 0:100 \n";
                cin >> a;
            }while(false);
        }
        Adding_Bits(int input_1){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            a = input_1;
        }
        void print(){
            cout << a;
        }
        Adding_Bits operator+(Adding_Bits b){
            Adding_Bits c(0);
            c.a = b.a ^ this->a;
            return c;
        }
};

int main()
{
    Adding_Bits p1(6), p2(9), p3(0);
    p3 = p1 + p2;
    p3.print();
}
