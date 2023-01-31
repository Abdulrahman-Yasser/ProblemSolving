
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Keyboard{
    private:
        char Direction;
        string Ptr;
        char Keyboard_Alpha[57] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
        char keyboard_index[57] = {11 , 25 , 23 , 13 , 2  , 14 , 15 , 16 , 7  , 17 , 18 , 19 , 27 , 26 , 8  , 9  , 0  , 3  , 12 , 4  , 6  , 24 , 1  , 22 , 5  , 21};
//                                {a  ,  b ,  c ,  d , e  , f  , g  , h  , i  ,  j , k  , l  , m  , n  , o  ,  p , q  , r  , s  , t  , u  , v  , w  , x  , y  , z , , , . , / , ;}
    public:
        Keyboard(){
            cin >> Direction;
            cin >> Ptr;
            keyboard_index[53] = 28;    // , = 44
            keyboard_index[51] = 29;    // . = 46
            keyboard_index[50] = 30;    // / = 47
            keyboard_index[38] = 20;    // ; = 59
        }
        void print(){
            for(int i = 0; i < Ptr.length(); i++){
                if(Direction == 'R'){
                    cout << Keyboard_Alpha[keyboard_index[abs(Ptr[i] - 97)] - 1];
                }else if(Direction == 'L'){
                    cout << Keyboard_Alpha[keyboard_index[abs(Ptr[i] - 97)] + 1];
                }
            }
        }
};

int main()
{
    Keyboard p;
    p.print();
}
