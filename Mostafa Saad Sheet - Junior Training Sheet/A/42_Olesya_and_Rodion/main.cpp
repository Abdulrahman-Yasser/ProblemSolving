
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
class Is_it_rated{
    private:
        int n;
        int *Ptr;
    public:
        Is_it_rated(){
            cin >> n;
            Ptr = new int[n * 2];
            for(int i = 0; i < n * 2; i++){
                cin >> Ptr[2*i];
                cin >> Ptr[2*i + 1];
            }
        }
        void print(){
            unsigned long long int q = pow(2, n + 1) - 1 ;
            if(marker == q){
                cout << "I become the guy.";
            }else{
                cout << "Oh, my keyboard!";
            }
        }
};

int main()
{
    Is_it_rated p;
    p.print();
}
