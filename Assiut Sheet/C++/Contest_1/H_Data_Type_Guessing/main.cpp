#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

class DataType{
    private:
        int n, m ,k;
        double result;
    public:
        DataType(){
            std::cout << "Class Defined without and arguments, Please enter the arguments\n";
            do{
                std::cout << "n : First Number, Make sure the number is between 0:100 \n";
                cin >> n;
            }while(false);
            do{
                std::cout << "m : Second Number, Make sure the number is between 0:100 \n";
                cin >> m;
            }while(false);
            do{
                std::cout << "k : Third Number, Make sure the number is between 0:100 \n";
                cin >> k;
            }while(false);
        }
        DataType(int input_1, int input_2, int input_3){
            std::cout << "Class Defined with an argument, and it is saved ..\n";
            n = input_1;
            m = input_2;
            k = input_3;
        }
        void print(){
            result = double(n) * m / k;
            if(result - int(result) > 0){
                cout << "Double";
            }else if(result > 2147483647){
                cout << "long long";
            }else{
                cout << "int";
            }
        }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    DataType p1(a, b, c);
    p1.print();
}
