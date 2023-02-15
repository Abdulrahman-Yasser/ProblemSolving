
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
        string k;
    public:
        Dubstep(){
            cin >> k;
        }
        void print(){
            bool spaceFlag = false;
            for(int i = 0; i < k.length(); i++){
                if( k[i] == 'W' && k[i+1] == 'U' && k[i+2] == 'B' ){
                    i += 2;
                    if(spaceFlag){
                        cout << " ";
                        spaceFlag = false;
                    }
                    continue;
                }else{
                    cout << k[i];
                    spaceFlag = true;
                }
            }
        }
};

int main()
{
    Dubstep p;
    p.print();
}
