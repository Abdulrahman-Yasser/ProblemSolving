
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Stones_on_the_Table{
    private:
        int num;
        char* Ptr;
    public:
        Stones_on_the_Table(){
            cin >> num;
            Ptr = (char*)malloc(sizeof(char) * num);
            for(int i = 0; i < num; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            int cnt = 0;
            for(int i = 0; i < num-1; i++){
                if(Ptr[i] == Ptr[i+1]){
                    cnt++;
                }
            }
            cout << cnt;
        }
};

int main()
{
    Stones_on_the_Table p;
    p.print();
}
