// 1_Say_Hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Even_Odd_Positive_and_Negative{
    private:
        int a;
        int *Ptr;
    public:
        Even_Odd_Positive_and_Negative(){
            std::cout << "Class Defined without and arguments, so Enter the values \n";
            cin >> a;
            int b[a];
            for (int i = 0; i < a; i++){
                cin >> b[i];
            }
        }
        Even_Odd_Positive_and_Negative(int x){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            a = x;
        }
        void print(){
            static int q = 1;
            while(q <= a){
                if(q % 2 == 0){
                    cout << q << endl; 
                    q += 2;
                }else{
                    q++;
                }
            }
            q = 0;
        }
};

int main()
{
    Even_Odd_Positive_and_Negative p;
    p.print();
}
