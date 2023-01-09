#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class LuckyNumber{
    private:
        int luk;
    public:
        LuckyNumber(){
            std::cout << "Class Defined without and arguments, Please enter the arguments\n";
            do{
                std::cout << "n : First Number, Make sure the number is between 0:100 \n";
                cin >> luk;
            }while(luk > 100 && luk < 0);
        }
        LuckyNumber(int input_1){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            luk = input_1;
        }
        void print(){
            int a, b;
            a = luk % 10;
            b = luk / 10;
            if(a % b == 0 || b % a == 0){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }
};

int main()
{
    int a;
    cin >> a;
    LuckyNumber p1(a);
    p1.print();
}
