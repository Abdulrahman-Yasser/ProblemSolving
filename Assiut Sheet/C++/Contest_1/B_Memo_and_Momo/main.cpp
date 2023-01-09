#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Memo_and_Momo{
    private:
        unsigned long long int a = 0, b = 0, k = 0;

    public:
        Memo_and_Momo(){
            std::cout << "Class Defined without and arguments, Please enter the arguments\n";
            do{
                std::cout << "a : Memo Number, Make sure the number is between 1:10^18 \n";
                cin >> a;
            }while(false);
            do{
                std::cout << "b : Momo Number, Make sure the number is between 1:10^18 \n";
                cin >> b;
            }while(false);
            do{
                std::cout << "K : division number, Make sure the number is between 1:10^18 \n";
                cin >> k;
            }while(false);
        }
        Memo_and_Momo(int input_1, int input_2, int input_3){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            a = input_1;
            b = input_2;
            k = input_3;
        }
        void print(){
            if(a % k == 0 && b % k == 0){
                cout <<"Both";
            }else if(a % k == 0){
                cout <<"Memo";
            }else if(b % k == 0){
                cout <<"Momo";
            }else{
                cout <<"No one";
            }
        }
};

int main()
{
    Memo_and_Momo p;
    p.print();
}
