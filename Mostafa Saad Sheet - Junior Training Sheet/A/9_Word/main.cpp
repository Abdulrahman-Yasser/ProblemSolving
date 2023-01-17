
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Word{
    private:
        string Name;
    public:
        Word(){
            cin >> Name;
        }
        void print(){
            int i = 0, cnt = 0;
            while(Name[i] != '\0'){
                /* If it's small Character */
                if(Name[i] <= 90){
                    cnt++;
                }else if(Name[i] <= 122){
                    cnt--;
                }
                i++;
            }
            i = 0;
            if(cnt <= 0){
                while(Name[i] != '\0'){
                /* The word will be Small*/
                    if(Name[i] <= 90){
                        Name[i] += 32;
                    }else if(Name[i] <= 122){
                    }
                    i++;
                }
            }else{
                /* The word will be Capital*/
                while(Name[i] != '\0'){
                    if(Name[i] <= 90){
                    }else if(Name[i] <= 122){
                        Name[i] -= 32;
                    }
                    i++;
                }
            }
            cout << Name;
        }
};

int main()
{
    Word p;
    p.print();
}
