
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Mahmoud_and_Longest_Uncommon_Subsequence{
    private:
        string S1;
        string S2;
    public:
        Mahmoud_and_Longest_Uncommon_Subsequence(){
            cin >> S1 >> S2;
        }
        void print(){
            if(S1.compare( S2) == 0){
                cout << -1;
            }else if(S1.length() > S2.length()){
                cout << S1.length();
            }else{
                cout << S2.length();
            }
        }
};

int main()
{
    Mahmoud_and_Longest_Uncommon_Subsequence p;
    p.print();
}
