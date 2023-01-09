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
        int num;
        int *Ptr;
    public:
        Even_Odd_Positive_and_Negative(){
            std::cout << "Class Defined without and arguments, so Enter the values \n";
            cin >> num;
            Ptr = (int*)malloc(sizeof(int)*num);
            for (int i = 0; i < num; i++){
                cin >> Ptr[i];
            }
        }
        Even_Odd_Positive_and_Negative(int x){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            num = x;
        }

        void print(){
            int even = 0, odd = 0, pos = 0, neg = 0, i;
            for(i = 0; i < num; i++){
                if(Ptr[i] % 2){
                    odd++;
                }else{
                    even++;
                }
                if(Ptr[i] > 0){
                    pos++;
                }else if(Ptr[i] < 0){
                    neg++;
                }
            }
            cout << "Even: " << even << endl;
            cout << "Odd: " << odd << endl;
            cout << "Positive: " << pos << endl;
            cout << "Negative: " << neg << endl;
        }
};

int main()
{
    Even_Odd_Positive_and_Negative p;
    p.print();
}
