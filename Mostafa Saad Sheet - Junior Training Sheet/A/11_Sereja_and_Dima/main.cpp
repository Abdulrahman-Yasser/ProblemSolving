
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
            int Dima = 0, Sereja = 0,cnt = 0, LeftMost = 0, RightMost = num-1;
            for(int i = 0; i < num; i++){
                if(cnt % 2){
                    // Dima turn
                    if(Ptr[RightMost] >= Ptr[LeftMost]){
                        Dima += Ptr[RightMost]; 
                        RightMost--;
                     }else{
                        Dima += Ptr[LeftMost];
                        LeftMost++;
                     }
                }else{
                    // Sereja turn
                    if(Ptr[RightMost] >= Ptr[LeftMost]){
                        Sereja += Ptr[RightMost]; 
                        RightMost--;
                     }else{
                        Sereja += Ptr[LeftMost];
                        LeftMost++;
                     }
                }
                cnt++;
            }
            cout << Sereja << " " << Dima;
        }
};

int main()
{
    Magnets p;
    p.print();
}
