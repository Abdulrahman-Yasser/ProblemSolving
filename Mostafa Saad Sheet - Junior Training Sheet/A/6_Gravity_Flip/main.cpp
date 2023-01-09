
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Team{
    private:
        int index = 0, num[5][5];
    public:
        Team(){
            int i, j;
            for(j = 0; j < 5; j++){
                for(i = 0; i < 5; i++){
                    cin >> num[j][i];
                    if(num[j][i] == 1){
                       index = abs(i - 2) + abs(j - 2);
                    }
                }
            }
        }
        void print(){
            cout << index;
        }
};

int main()
{
    Team p;
    p.print();
}
