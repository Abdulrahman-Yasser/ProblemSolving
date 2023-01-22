
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class NewPass{
    private:
        int l, c;
        int save;
    public:
        NewPass(){
            cin >> l >> c;
        }
        void print(){
            char* ptr = new char[l];
            char temp;
            for(int i = 0; i < l; i++){
                temp =  (rand() % 25)+97;
                if(save & 1 << (temp-97)){
                    i--;
                }else{
                    save |= 1 << (temp-97);
                    ptr[i] = temp;
                }
            }
        }
};

int main()
{
    NewPass p;
    p.print();
}
