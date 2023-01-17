
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Police_Recruits{
    private:
        int num;
        int* Ptr;
    public:
        Police_Recruits(){
            cin >> num;
            Ptr = (int*)malloc(sizeof(int) * num);
            for(int i = 0; i < num; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int crimes = 0, Officers = 0;
            for(int i = 0; i < num; i++){
                if(Ptr[i] > 0){
                    Officers += Ptr[i];
                }else{
                    Officers--;
                    if(Officers < 0){
                        crimes++;
                        Officers = 0;
                    }
                }
            }
            cout << crimes;
        }
};

int main()
{
    Police_Recruits p;
    p.print();
}
