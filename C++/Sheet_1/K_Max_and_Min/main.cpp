// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class MinVsMax{
    private:
        int a[3];

    public:
        MinVsMax(){
            std::cout << "Class Defined without and arguments, so Enter the values \n";
            cin >> a[0] >> a[1] >> a[2];
        }
        MinVsMax(int x,int y,int z){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            a[0] = x;
            a[1] = y;
            a[2] = z;
        }
        void print(){
            int i, min = 100000, max = -100000;
            for(i = 0; i < 3; i++){
                if(min > a[i]){
                    min = a[i];
                }
                if(max < a[i]){
                    max = a[i];
                }
            }
            cout << min << " " << max ;
        }
};

int main()
{
    MinVsMax p;
    p.print();
}
