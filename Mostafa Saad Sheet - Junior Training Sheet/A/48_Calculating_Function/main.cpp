
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

/*
    a solution for less than 64 number 
*/
class  Calculating_Function{
    private:
        unsigned long long int n;
    public:
        Calculating_Function(){
            cin >> n;
            if(n % 2){
                cout << (signed long long int)(n+1) / 2 * -1;
            }else{
                cout << (unsigned long long int)n/2;
            }
        }
        void print(){
        }
};

int main()
{
    Calculating_Function p;
    p.print();
}
