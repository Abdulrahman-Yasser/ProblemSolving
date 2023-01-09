
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
class Anton_and_Danik{
    private:
        int Limak, Bob;
    public:
        Anton_and_Danik(){
            cin >> Limak >> Bob;
        }
        void print(){
            int i = 0;
            while(Limak <= Bob){
                i++;
                Limak *= 3;
                Bob *= 2;
            }
            cout << i;
        }
};

int main()
{
    Anton_and_Danik p;
    p.print();
}
