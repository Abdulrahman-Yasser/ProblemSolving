
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Snacktower{
    private:
        int n;
        int *Ptr;
        bool *NewLine_OrPrint;
    public:
        Snacktower(){
            cin >> n;
            Ptr = new int[n + 1];
            NewLine_OrPrint = new bool[n + 1];
            for(int i = 1; i <= n; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int c = n ;
            for(int i = 1; i <= n; i++){
                NewLine_OrPrint[Ptr[i]] = true;
                
                while(NewLine_OrPrint[c] == true && c > 0){
                    cout << c << " ";
                    c--;
                }
                cout << endl;
            }
        }
};

int main()
{
    Snacktower p;
    p.print();
}
