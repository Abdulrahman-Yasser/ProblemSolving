
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Colorful_Stones{
    private:
        string stones, instructions;
    public:
        Colorful_Stones(){
            cin >> stones;
            cin >> instructions;
        }
        void print(){
            int x = 0;
            for(int i = 0; instructions[i] != '\0'; i++){
                if(stones[x] == instructions[i]){
                    x++;
                }
            }
            x++;
            cout << x;
        }

};

int main()
{
    Colorful_Stones p;
    p.print();
}
