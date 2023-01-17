
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Game{
    private:
        int a[4];
    public:
        Game(){
            for(int i = 0; i < 4; i++){
                cin >> a[i];
            }
        }
        void print(){
            int cnt = 0;
            for(int j = 0; j < 4; j++){
                for(int i = j+1; i < 4; i++){
                    if( (a[i] ^ a[j]) == 0){
                        cnt++;
                        break;
                    }
                }
            }   
            if(cnt > 3){
                cout << 3; 
            }else{
                cout << cnt;
            }
        }

};

int main()
{
    Game p;
    p.print();
}
