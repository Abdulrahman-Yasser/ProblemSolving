#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Interval_Sweep{
    private:
        unsigned int even, odd;
        unsigned l = 6, r = 10;
    public:
        Interval_Sweep(){
            std::cout << "Class Defined without and arguments, Please enter the arguments\n";
            do{
                std::cout << "a : Even Number, Make sure the number is between 0:100 \n";
                cin >> even;
            }while(even > 100);
            do{
                std::cout << "b : Odd Number, Make sure the number is between 0:100 \n";
                cin >> odd;
            }while(odd > 100 );
        }
        Interval_Sweep(int input_1, int input_2, int input_3){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            even = input_1;
            odd = input_2;
        }
        void print(){
            if(even - odd == 1 || even - odd == -1){
                if((r-l) % 2 == 0){
                    if(even == ((r-l)/2) + 1 && odd == ((r-l)/2)){
                        cout << "YES";
                        return;
                    }
                }else{
                    if(even == ((r-l)/2) + 1 && odd == ((r-l)/2) + 1){
                        cout << "YES";
                        return;
                    }
                }
            }
            cout << "NO";
        }
};

int main()
{
    Interval_Sweep p;
    p.print();
}
