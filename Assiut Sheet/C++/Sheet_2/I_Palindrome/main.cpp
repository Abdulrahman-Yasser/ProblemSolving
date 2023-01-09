// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class printer{
    private:
        int a, b;
    public:
        printer(){
            cout << "Class Defined without and arguments, Please enter a & b values \n";
            cin >> a;
            cin >> b;
        }
        printer(int x, int y){
            cout << "Class Defined with an argument, and it is saved ..\n";
            a = x;
            b = y;
        }
        void print(){
            if(a >= b){
                cout << "yes\n";
            }else{
                cout << "NO\n";
            }
        }
};

int main()
{
    printer p;
    p.print();
}
