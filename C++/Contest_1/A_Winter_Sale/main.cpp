#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class WinterSale{
    private:
        float x = 0, p = 0;

    public:
        WinterSale(){
            std::cout << "Class Defined without and arguments, Please enter the arguments\n";
            do{
                std::cout << "x : percentage, Make sure the number is between 1:99 \n";
                cin >> x;
            }while(x > 99 || x < 1);
            do{
                std::cout << "P : Price after the sale, Make sure the number is between 1:4000 \n";
                cin >> p;
            }while(p > 4000 || p < 1);
        }
        WinterSale(int input_1, int input_2){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            x = input_1;
            p = input_2;
            while(x > 99 || x < 1){
                std::cout << "x : percentage, Make sure the number is between 1:99 \n";
                cin >> x;
            }
            while(p > 4000 || p < 1){
                std::cout << "P : Price after the sale, Make sure the number is between 1:4000 \n";
                cin >> p;
            }
        }
        void print(){
            cout << float(100 * p / (100 - x));
        }
};

int main()
{
    WinterSale p;
    p.print();
}
