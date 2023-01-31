
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Even_Odds{
    private:
        long long int n;
        long long int Ptr;
    public:
        Even_Odds(){
            cin >> n;
            cin >> Ptr;
        }
        void print(){
            if(n % 2){
                // Odd
                if(Ptr <= (n / 2) + 1 ){
                    cout << (Ptr * 2) - 1;
                }else{
                    cout << (Ptr * 2) - (n + 1);
                }
            }else{
                // Even
                if(Ptr <= (n / 2) ){
                    cout << (Ptr * 2) - 1;
                }else{
                    cout << (Ptr * 2) - (n);
                }
            }
        }
};

int main()
{
    Even_Odds p;
    p.print();
}
