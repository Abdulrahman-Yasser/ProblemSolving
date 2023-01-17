
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Die_Roll{
    private:
        int y, w;
        string DieRollProps[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    public:
        Die_Roll(){
            cin >> y >> w ;
        }
        void print(){
            int prop = 0;
            if(y > w){
                prop = (6 - y );
            }else{
                prop = (6 - w );
            }
            cout << DieRollProps[prop];
        }

};

int main()
{
    Die_Roll p;
    p.print();
}
