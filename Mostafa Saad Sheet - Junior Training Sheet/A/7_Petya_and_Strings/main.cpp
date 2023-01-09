
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Petya_and_Strings{
    private:
        string Str_1, Str_2;
    public:
        Petya_and_Strings(){
            int min = 0;
            int i;
            cin >> Str_1;
            cin >> Str_2;
        }
        void print(){
            int i, j, cnt = 0;
            for(i = 0; Str_1[i] != '\0'; i++){
                if( (Str_1[i] - Str_2[i] == 0 ) || ( abs(Str_1[i] - Str_2[i]) == 32) ){

                }else{
                    if(Str_1[i] >= 97 && Str_2[i] >= 97){
                    }else if(Str_1[i] <= 90 && Str_2[i] <= 90 ){
                    }else{
                        if(Str_1[i] < Str_2[i]){
                            Str_1[i] += 32;
                        }else{
                            Str_2[i] += 32;
                        }
                    }
                    if(Str_1[i] > Str_2[i]){
                        cout << 1;
                        return;
                    }else{
                        cout << -1;
                        return;
                    }
                }
            }
            cout << 0;
        }
};

int main()
{
    Petya_and_Strings p;
    p.print();
}
