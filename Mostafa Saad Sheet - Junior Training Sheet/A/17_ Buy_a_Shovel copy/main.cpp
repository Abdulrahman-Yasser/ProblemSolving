
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Game{
    private:
        int k;
        int r;
    public:
        Game(){
            cin >> k >> r;
        }
        void print(){
            int price = k;
            while(( (price - r) % 10) != 0 && ( (price % 10) != 0) ){
                price += k;
            }
            cout << (price / k);
        }
};

int main()
{
    Game p;
    p.print();
}
