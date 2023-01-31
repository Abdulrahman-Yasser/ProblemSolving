
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Lineland_Mail{
    private:
        int n;
        int *Ptr;
    public:
        Lineland_Mail(){
            cin >> n;
            Ptr = new int[n];
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int i = 0, max_1, max_2, min_1, min_2;
                max_1 = abs(Ptr[0]-Ptr[n-1]);
                min_1 = abs(Ptr[0]-Ptr[i+1]);
                cout << min_1 << " " << max_1 << endl;
            for(i = 1; i < n - 1; i++){
                max_1 = abs(Ptr[i]-Ptr[n-1]);
                max_2 = abs(Ptr[i]-Ptr[0]);
                min_1 = abs(Ptr[i]-Ptr[i-1]);
                min_2 = abs(Ptr[i]-Ptr[i+1]);
                min_1 < min_2 ? cout << min_1 << " " : cout << min_2 << " ";
                max_1 > max_2 ? cout << max_1 << " "  << endl: cout << max_2 << " " << endl;
            }
            max_1 = abs(Ptr[n-1]-Ptr[0]);
            min_1 = abs(Ptr[n-1]-Ptr[n-2]);
            cout << min_1 << " " << max_1 << endl;
        }
};

int main()
{
    Lineland_Mail p;
    p.print();
}
