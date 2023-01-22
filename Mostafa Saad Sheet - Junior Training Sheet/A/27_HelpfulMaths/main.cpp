
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class WayTooLong{
    private:
        string Ptr;
        set <char>Container;
    public:
        WayTooLong(){
            cin >> Ptr;
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
    WayTooLong p;
    p.print();
}
