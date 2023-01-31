
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Pangram{
    private:
        int n;
        char* Ptr;
    public:
        Pangram(){
            cin >> n;
            Ptr = new char[n];
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int q = 0;
            if(n < 26){
                cout << "NO";
                return;
            }
            for(int i = 0; i < n; i++){
                if(Ptr[i] >= 65 && Ptr[i] <= 90){
                    Ptr[i] += 32;
                }
                q |= (1 << (Ptr[i] - 97));
            }
            if(q == 67108863){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }
};

int main()
{
    Pangram p;
    p.print();
}
