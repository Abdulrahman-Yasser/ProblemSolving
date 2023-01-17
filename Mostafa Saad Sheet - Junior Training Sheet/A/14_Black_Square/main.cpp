
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Black_Square{
    private:
        int num[4];
        string AllTouches;
    public:
        Black_Square(){
            for(int i = 0; i < 4; i++){
                cin >> num[i];
            }
            cin >> AllTouches;
        }
        void print(){
            int i = 0, sum = 0;
            while(AllTouches[i] != '\0'){
                AllTouches[i] -= 48;
                sum += num[AllTouches[i]-1];
                i++;
            }
            cout << sum;
        }
};

int main()
{
    Black_Square p;
    p.print();
}
