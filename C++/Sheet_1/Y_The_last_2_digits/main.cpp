// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class The_last_2_digits{
    private:
        int a[4] = {0, 0, 0, 0};
    public:
        The_last_2_digits(){
            std::cout << "Class Defined without and arguments\n";
            for(int i = 0; i < 4; i++){
                while(a[i] < 2 || a[i] > 1000000000){
                    std::cout << "Make sure the  range is between 2 and 1000000000 ..\n";
                    cin >> a[i];
                }
            }
        }
        The_last_2_digits(int input[4]){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            for(int i = 0; i < 4; i++){
                a[i] = input[i];
                while(a[i] < 2 || a[i] > 1000000000){
                    std::cout << "Make sure the  range is between 2 and 1000000000 ..\n";
                    cin >> a[i];
                }
            }
        }
        void print(){
            int x = 1, y = 1, i;
            for(i = 0; i < a[1]; i++){
                x = x * a[0];
            }
            for(i = 0; i < a[3]; i++){
                y = y * a[2];
            }
            if(x > y){
                cout  << "YES";
            }else{
                cout << "NO";
            }
        }
};

int main()
{
    The_last_2_digits p;
    p.print();
}
