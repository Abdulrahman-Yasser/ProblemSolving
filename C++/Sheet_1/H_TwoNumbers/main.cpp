#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class TwoNumbers{
    private:
        float x;
        int ceil, floor, round;
    public:
        TwoNumbers(){
            std::cout << "Class Defined without and arguments, so Please enter the number\n";
            cin >> x;
        }
        TwoNumbers(float a){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            x = a;
        }
        void calculate(){
            floor = int(x);
            ceil = floor + 1;
            if(int((x - int(x))*10) >= 5){
                round = ceil;
            }else{
                round = floor;
            }
        }
        void print(){
            calculate();
            std::cout << "Floor " << floor << "\n";
            std::cout << "Ceil " << ceil << "\n";
            std::cout << "Round " << round << "\n";
        }
};

int main()
{
    TwoNumbers p;
    p.print();
}
