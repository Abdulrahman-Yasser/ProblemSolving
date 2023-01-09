
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Team{
    private:
        int num, cnt = 3;
        int* Ptr;
    public:
        Team(){
            int i, j;
            cin >> num;
            Ptr = (int*)malloc(sizeof(int)*num*3);
            for(j = 0; j < num; j++){
                for(i = 0; i < cnt; i++){
                    cin >> Ptr[(j*cnt) + i];
                }
            }
        }
        void print(){
            int j, result = 0;
            for(j = 0; j < num; j++){
                if( (Ptr[(j*cnt)+0] & (Ptr[(j*cnt)+1] | Ptr[(j*cnt)+2]) ) || (Ptr[(j*cnt)+2] & (Ptr[(j*cnt)+0] | Ptr[(j*cnt)+1]) ) || (Ptr[(j*cnt)+1] & (Ptr[(j*cnt)+2] | Ptr[(j*cnt)+0]) )){
                    result++;
                }
            }
            cout << result;
        }
};

int main()
{
    Team p;
    p.print();
}
