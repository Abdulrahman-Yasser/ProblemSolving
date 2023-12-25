#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class SumOfDigits{
    private :
        string n;
    public:
        SumOfDigits(){
            cin >> n;
        }
        void print(void){
            int temp = 100, result = 0, cnt = 0, i = 0;
            if(n.length() <= 1){
                cout << 0;
                return;
            }
            while(temp >= 10){
                temp = 0;
                for(int i = 0; i < n.length(); i++){
                    temp += (n[i]-48);
                }
                result++;
                if(temp >= 10){
                    n = to_string(temp);
                }
            }
            cout << result;
        }
    };

int main(){
    SumOfDigits p;
    p.print();
}