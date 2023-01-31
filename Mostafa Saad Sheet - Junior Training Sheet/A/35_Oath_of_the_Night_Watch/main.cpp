
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Oath_of_the_Night_Watch{
    private:
        int n;
        long long int *Ptr;
        int cnt = 0;
        long long int max = 0, min = INT64_MAX;
    public:
        Oath_of_the_Night_Watch(){
            cin >> n;
            Ptr = new long long int[n];
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
                if(Ptr[i] < min){
                    min = Ptr[i];
                }
                if(Ptr[i] > max){
                    max = Ptr[i];
                }
            }
        }
        void print(){
            for(int i = 0; i < n; i++){
                if(Ptr[i] < max && Ptr[i] > min){
                    cnt++;
                }
            }
            cout << cnt;
        }
};

int main()
{
    Oath_of_the_Night_Watch p;
    p.print();
}
