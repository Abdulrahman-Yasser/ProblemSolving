// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class one_to_N{
    private:
        int a;

    public:
        one_to_N(){
            std::cout << "Class Defined without and arguments, so Enter the values \n";
            cin >> a;
        }
        one_to_N(int x){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            a = x;
        }
        void print(){
            static int q = 1;
            while(q <= a){
                cout << q++ << endl; 
            }
            q = 0;
        }
};

int main()
{
    one_to_N p;
    p.print();
}
