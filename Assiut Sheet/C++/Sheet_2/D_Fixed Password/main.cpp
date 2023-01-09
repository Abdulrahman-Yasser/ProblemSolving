// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Fixed_Password{
    private:
        int pass;
    public:
        Fixed_Password(){
            std::cout << "Class Defined without and arguments, so Enter the values \n";
            cin >> pass;
        }
        Fixed_Password(int x){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            pass = x;
        }
        void print(){
            int test_pass;
            do{
                cin >> test_pass;
                if(test_pass > 999 && test_pass < 10000){
                    if(test_pass == pass){
                        cout << "Correct" << endl;
                        break;
                    }else{
                        cout << "Wrong" << endl;
                    }
                }
            }while(1);
        }
};

int main()
{
    Fixed_Password p;
    p.print();
}
