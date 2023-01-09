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
        mathmatical operator+(mathmatical m1){
            mathmatical m2(0);
            m2.x = x + m1.x;
            return m2;
        }
        mathmatical operator-(mathmatical m1){
            mathmatical m2(0);
            m2.x = x - m1.x;
            return m2;
        }
        mathmatical operator*(mathmatical m1){
            mathmatical m2(0);
            m2.x = x * m1.x;
            return m2;
        }
        mathmatical operator/(mathmatical m1){
            mathmatical m2(0);
            m2.x = x / m1.x;
            return m2;
        }
        void print(){
            cout << x;
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
    case '+':
        p3 = p1 + p2;
        break;
    case '-':
        p3 = p1 - p2;
        break;
    case '*':
        p3 = p1 * p2;
        break;
    case '/':
        p3 = p1 / p2;
        break;
    default:
        break;
    }
    p3.print();
}
