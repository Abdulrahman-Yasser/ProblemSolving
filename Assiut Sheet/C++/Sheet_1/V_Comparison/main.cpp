// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class mathmatical{
    private:
        int x;
    public:
        mathmatical(){
            cin >> x ;
        }
        mathmatical(int input_1){
            x = input_1;
        }
        int operator>(mathmatical m1){
            if (x > m1.x){
                return 1;
            }else{
                return 0;
            }
        }
        int operator<(mathmatical m1){
            if (x < m1.x){
                return 1;
            }else{
                return 0;
            }
        }
        int operator==(mathmatical m1){
            if (x == m1.x){
                return 1;
            }else{
                return 0;
            }
        }
};

int main()
{
    char op;
    int a, b;
    cout << "Enter the operation\n";
    cin >> a >> op >> b ;
    mathmatical p1(a);
    mathmatical p2(b);
    mathmatical p3(0);
    switch (op)
    {
    case '>':
        if(p1 > p2){
            cout << "Right\n";
        }else{
            cout << "wrong\n";
        }
        break;
    case '<':
        if(p1 < p2){
            cout << "Right\n";
        }else{
            cout << "wrong\n";
        }
        break;
    case '=':
        if(p1 == p2){
            cout << "Right\n";
        }else{
            cout << "wrong\n";
        }
        break;
    default:
        break;
    }
}
