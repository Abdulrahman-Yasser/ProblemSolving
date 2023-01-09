// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Two_intervals{
    private:
        int l1 = 0, r1 = 0, l2 = 0, r2 = 0;
    public:
        Two_intervals(){
            std::cout << "Class Defined without and arguments\n";
            while(l1 >= r1){
                std::cout << "l1 can't be higher than r1, Please enter l1 and r1 ..\n";
                cin >> l1 >> r1;
            }
            while(l2 >= r2){
                std::cout << "l2 can't be higher than r2, Please enter l2 and r2 ..\n";
                cin >> l2 >> r2;
            }
        }
        Two_intervals(int a, int b, int c, int d){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            l1 = a;
            r1 = b;
            l2 = c;
            r2 = d;
            while(l1 >= r1){
                std::cout << "l1 is higher than r1, Please enter l1 and r1 ..\n";
                cin >> l1 >> r1;
            }
            while(l2 >= r2){
                std::cout << "l2 is higher than r2, Please enter l2 and r2 ..\n";
                cin >> l2 >> r2;
            }
        }
        void print(){
            if(r1 < l2){
                cout << -1;
                return;
            }
            if(r1 < r2){
                cout << r1 << " ";
            }else{
                cout << r2 << " ";
            }
            if(l1 < l2){
                cout << l2 << " ";
            }else{
                cout << l1 << " ";
            }
        }
};

int main()
{
    Two_intervals p;
    p.print();
}
