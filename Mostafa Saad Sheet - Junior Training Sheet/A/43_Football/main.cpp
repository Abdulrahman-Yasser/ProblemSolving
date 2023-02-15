
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
class Football{
    private:
        int n;
        string *Ptr;
        int score = 0;
        int index = 0;
    public:
        Football(){
            cin >> n;
            Ptr = new string[n];
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
                if(Ptr[i] == Ptr[0]){
                    score++;
                }else{
                    score--;
                    index = i;
                }
            }
        }
        void print(){
            if(score > 0){
                cout << Ptr[0];
            }else{
                cout << Ptr[index];
            }
        }
};

int main()
{
    Football p;
    p.print();
}
