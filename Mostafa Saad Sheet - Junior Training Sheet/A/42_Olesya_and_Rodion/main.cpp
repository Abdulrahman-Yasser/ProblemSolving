
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
        int t;
        char *Ptr;
    public:
        Is_it_rated(){
            cin >> n;
            Ptr = new char[n];
            cin >> t;
        }
        void print(){
            if(t != 10){
                Ptr[0] = t + 48;
                for(int i = 1; i < n - 1; i++){
                    Ptr[i] = '0';
                }
                Ptr[n-1] = t + 48;
                for(int i = 0; i < n; i++){
                    cout << Ptr[i];
                }
            }else if(t == 10 && n > 1){
                for(int i = 0; i < n - 1; i++){
                    Ptr[i] = '1';
                }
                Ptr[n-1] = '0';
                for(int i = 0; i < n; i++){
                    cout << Ptr[i];
                }
            }else{
                cout << -1;
            }
        }
};

int main()
{
    Is_it_rated p;
    p.print();
}
