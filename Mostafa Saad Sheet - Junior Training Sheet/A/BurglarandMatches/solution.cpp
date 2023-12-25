
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Burglarand_and_Matches{
    private:
        int BagContainer;
        int num;
        int *Data;
    public:
        Burglarand_and_Matches(){
            cin >> BagContainer;
            cin >> num;
            Data = new int[num*2];
            for(int i = 0; i < num; i++){
                cin >> Data[i];
                cin >> Data[i + num/2];
            }
        }
        void print(){
            int i = 0, temp = 0, min = 0;
            int n = Ptr.size();
            for(i = 0; i < n; i+=2){
                if(! (Ptr[i] >= '0' && Ptr[i] <= '9')){
                    continue;
                }
                for(int j = i+2; j<n; j+=2){
                    if(Ptr[j] >= '0' && Ptr[j] <= '9'){
                        if(Ptr[i] > Ptr[j]){
                            temp = Ptr[i];
                            Ptr[i] = Ptr[j];
                            Ptr[j] = temp;
                        }else{
                        }
                    }
                }
            }
            cout << Ptr;
        }
};

int main()
{
    Burglarand_and_Matches p;
    p.print();
}
