// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Float_Or_Integer{
    private:
        float x;

    public:
        Float_Or_Integer(){
            std::cout << "Class Defined without and arguments, so Please4 enter your value\n";
            cin >> x;
        }
        Float_Or_Integer(int a){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            x = a;
        }
        void print(){
            int var = int(x);
            if(float(x - var) > 0){
                cout << "Float " << var << " " << x - var << endl;
            }else{
                cout << "int " << var << endl;
            }
        }
};

int main()
{
    Float_Or_Integer p;
    p.print();
}
