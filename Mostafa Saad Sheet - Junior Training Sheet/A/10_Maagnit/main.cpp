
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Magnets{
    private:
        int num;
        int* Ptr;
    public:
        Magnets(){
            cin >> num;
            Ptr = (int*)malloc(sizeof(int) * num);
            for(int i = 0; i < num; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int cnt = 1;
            static int flag = 0;
            for(int i = 0; i < num-1; i++){
                if(Ptr[i] != Ptr[i+1]){
                    cnt++;
                }
            }
            if(num == 1){
                cnt = 1;
            }
            cout << cnt;
        }
};

int main()
{
    Magnets p;
    p.print();
}
