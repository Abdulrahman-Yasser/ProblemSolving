#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Funs{
    private :
        int value;
    public:
        Funs(int value_1){
            value = value_1;
        };
        int BCD_to_DECI(int value);
        int DECI_to_BCD(int value);
};

int Funs::BCD_to_DECI(int value){
    int a, b;
    a = value & 0x0f;
    b = (value >> 4) & 0x0f;
    b = b * 10;
    return a + b;
}

int Funs::DECI_to_BCD(int value){
    int ones, tens, result;
    tens = value / 10;
    ones = value % 10;
    result = ones | (tens << 4);
    return result;
}

int main(){
    Funs f(13);
    cout << f.DECI_to_BCD(13) << endl;
    cout << f.DECI_to_BCD(29) << endl;
    cout << f.BCD_to_DECI(0x13) << endl;
    cout << f.BCD_to_DECI(0x30) << endl;
}