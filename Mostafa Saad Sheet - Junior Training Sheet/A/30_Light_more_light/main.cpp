
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Light_more_light{
    private:
        int n;
        int *Ptr;
    public:
        Light_more_light(){
            cin >> n;
            Ptr = new int[n];
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int i = 0, temp_1, cnt;
            for(i = 0; i < n; i++){
                temp_1 = (int)sqrt(Ptr[i]);
                if(temp_1 * temp_1 == Ptr[i]){
                    cout << "NO" << endl;
                }else{
                    cout << "YES" << endl;
                }
            }
        }
};

int main()
{
    Light_more_light p;
    p.print();
}
