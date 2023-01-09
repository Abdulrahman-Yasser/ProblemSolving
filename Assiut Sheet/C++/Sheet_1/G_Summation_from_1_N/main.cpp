// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Summ{
    private:
        int a;

    public:
        Summ(){
            cout << "Class Defined without and arguments, so Please enter the number \n";
            cin >> a;
        }
        Summ(int x){
            cout << "Class Defined with an argument, and it is saved ..\n";
            a = x;
        }
        int RecursiveCalculate(int x){
            if(x == 0){
                return 0;
            }
            return x + RecursiveCalculate(x - 1);
        }
        int IterativeCalculate(int x){
            int i, j = 0;
            for(i = 0; i <= x; i++){
                j = j + i;
            }
            return j;
        }
        void print(){
            cout << IterativeCalculate(a);
        }
};

int main()
{
    Summ p;
    p.print();
}
