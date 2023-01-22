
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class FreeIceCream{
    private:
        int n;
        string* Ptr;
        set <char>Container;
    public:
        FreeIceCream(){
            cin >> n;
            Ptr = new string[n];
            for (int i = 0; i < n; i++){
                cin >> Ptr[i];
            }
        }
        operator+ {

        }
        void print(){
            int i = 0, cnt = 0;
            for(i = 0; i < n; i++){
                if(Ptr[i].size() > 10){
                    cout << Ptr[i][0] << Ptr[i].size() - 2 << Ptr[i][Ptr[i].size() - 1] << endl;
                }else{
                    cout << Ptr[i] << endl;
                }
            }
        }
};

int main()
{
    FreeIceCream p;
    p.print();
}
