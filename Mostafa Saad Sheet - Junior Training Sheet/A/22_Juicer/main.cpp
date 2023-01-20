
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;

class Juicer{
    private:
        int n, b, d;
        int* Ptr;
    public:
        Juicer(){
            cin >> n >> b >> d;
            Ptr = (int*)malloc(sizeof(int) * n );
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int sum = 0,i = 0, cnt = 0;
            for(i = 0; i < n; i++){
                if(Ptr[i] <= b){
                    sum += Ptr[i];
                 }else{
                    continue;
                 }
                if(sum > d){
                    sum = 0;
                    cnt++;
                }
            }
            cout << cnt;
        }

};

int main()
{
    Juicer p;
    p.print();
}
