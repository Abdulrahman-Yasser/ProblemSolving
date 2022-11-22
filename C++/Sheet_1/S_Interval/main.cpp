// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Interval{
    private:
        float a;
    public:
        Interval(){
            std::cout << "Class Defined without and arguments\n";
            do{
                std::cout << "Make sure it's between the range -1000 : 1000\n";
                cin >> a;
            }while(a < -1000 || a > 1000);
        }
        Interval(int i){
            a = i;
            while(a < -1000 || a > 1000){
                std::cout << "Make sure it's between the range -1000 : 1000\n";
                cin >> a;
            }
        }
        void print(){
            if(a <= 25){
                cout << "Interval [0, 25]";
            }else if(a <= 50){
                cout << "Interval [25, 50]";
            }else if(a <= 75){
                cout << "Interval [50, 75]";
            }else if(a <= 100){
                cout << "Interval [75, 100]";
            }else{
                cout << "Out of Intervals";
             }
        }
};

int main()
{
    Interval p;
    p.print();
}
