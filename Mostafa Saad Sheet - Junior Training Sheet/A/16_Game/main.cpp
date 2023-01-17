
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Game{
    private:
        int num;
        int* Ptr;
    public:
        Game(){
            cin >> num;
            Ptr = (int*)malloc(sizeof(int) * num * 2);
            for(int i = 0; i < num; i++){
                cin >> Ptr[i*2];
                cin >> Ptr[i*2 + 1];
            }
        }
        void print(){
            int i = 0, cnt = 0, temp = 0;
            for(i = 0; i < num; i++){
                for(int j = 0; j < num ; j++){
                    if(i == j){
                        continue;
                    }
                    if(Ptr[i*2] == Ptr[j*2 + 1]){
                        cnt++;
                    }
                }
            }
            cout << cnt;
        }
};

int main()
{
    Game p;
    p.print();
}
