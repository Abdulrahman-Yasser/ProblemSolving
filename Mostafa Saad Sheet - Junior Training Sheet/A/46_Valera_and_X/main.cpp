
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
class Dubstep{
    private:
        int n;
        string *Ptr;
    public:
        Dubstep(){
            cin >> n;
            Ptr = new string[n];
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            char char_1 = Ptr[0][0], char_2 = Ptr[0][1];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if( Ptr[i][j] 
                }
            }
        }
};

int main()
{
    Dubstep p;
    p.print();
}
