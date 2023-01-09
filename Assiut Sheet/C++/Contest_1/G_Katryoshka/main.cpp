#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Katryoshka{
    private:
        unsigned int n, m ,k, result = 0;
    public:
        Katryoshka(){
            std::cout << "Class Defined without and arguments, Please enter the arguments\n";
            do{
                std::cout << "n : Eyes Number, Make sure the number is between 0:100 \n";
                cin >> n;
            }while(false);
            do{
                std::cout << "m : Mouthes Number, Make sure the number is between 0:100 \n";
                cin >> m;
            }while(false);
            do{
                std::cout << "k : Bodies Number, Make sure the number is between 0:100 \n";
                cin >> k;
            }while(false);
        }
        Katryoshka(int input_1, int input_2, int input_3){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            n = input_1;
            m = input_2;
            k = input_3;
        }
        void slow_calculate(){
            while(n >= 1 && m >= 1 && k >= 1){
                n -= 1;
                m -= 1;
                k -= 1;
                result += 1;
            }
            while(n >= 2 && k >= 1){
                n -= 2;
                k -= 1;
                result += 1;
            }
            cout << result;
        }
        void faster_calculate(){
            int min = m;
            if(min > n){
                min = n;
            }
            if(min > k){
                min = k;
            }
            n -= min;
            m -= min;
            k -= min;
            result += min;
            if(n >= 2 && k >= 1){
                n = n / 2;
                if(n > k){
                    n -= k;
                    result += k;
                    k -= k;
                }else{
                    k -= n;
                    result += n;
                    n -= n;
                }
            }
            cout << result;
        }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Katryoshka p1(a, b, c);
    p1.faster_calculate();
}
