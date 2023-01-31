
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Twins{
    private:
        int n;
        int* Ptr;
        int sum = 0;
    public:
        Twins(){
            cin >> n;
            Ptr = new int[n];
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
                sum += Ptr[i];
            }
        }
        void print(){
            int Bigger_sum = 0, cnt = 0;
            sort(Ptr, Ptr + n);
            for(int i = n-1; i >= 0; i--){
                Bigger_sum += Ptr[i];
                cnt++;
                if(Bigger_sum > sum / 2){
                    cout << cnt;
                    return;
                }
            }
        }
};

int main()
{
    Twins p;
    p.print();
}
