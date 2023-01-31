
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Presents{
    private:
        int n;
        int *Ptr;
    public:
        Presents(){
            int temp_1, temp_2;
            cin >> n;
            Ptr = new int[n];
            for(int i = 0; i < n; i++){
                cin >> temp_2;
                Ptr[temp_2-1] = i+1;
            }
        }
        void print(){
            int i = 0, temp_1, cnt;
            for(i = 0; i < n; i++){
                cout << Ptr[i] << " ";
            }
        }
};

int main()
{
    Presents p;
    p.print();
}
