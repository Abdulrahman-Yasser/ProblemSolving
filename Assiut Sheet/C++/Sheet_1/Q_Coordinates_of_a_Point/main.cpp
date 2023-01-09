// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Coordinates {
    private:
        float x, y;

    public:
        Coordinates (){
            std::cout << "Class Defined without and arguments, enter the coordinates for X & Y \n";
            do{
                cout << "Make sure the coordinates between -1000 and 1000\n";
                cin >> x >> y;
            }while(x < -1000 || x > 1000 || y < -1000 || y > 1000);
        }
        Coordinates (int a , int b){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            x = a;
            y = b;
            while(x < -1000 || x > 1000 || y < -1000 || y > 1000){
                cout << "Make sure the coordinates between -1000 and 1000\n";
                cin >> x >> y;
            }
        }
        void print(){
            if(x > 0 && y > 0){
                cout << "Q1";
            }else if(x > 0 && y < 0){
                cout << "Q4";
            }else if(x < 0 && y > 0){
                cout << "Q2";
            }else if(x < 0 && y < 0){
                cout << "Q3";
            }
        }
};

int main()
{
    Coordinates  p;
    p.print();
}
