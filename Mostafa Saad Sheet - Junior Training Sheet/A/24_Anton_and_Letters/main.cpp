
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;

class Anton_and_Letters{
    private:
        string letter;
        int b;
    public:
        Anton_and_Letters(){
            cin >> letter;
            b = 0;
        }
        void print(){
            int i = 0, cnt = 0;
            int l = letter.length();
            while(i < l){
                if(letter[i] == '{' || letter[i] == '}' || letter[i] == ',' || letter[i] == ' ' ){
                }else{
                    if(b & (1 << (letter[i]-97) ) ){
                    }else{
                        b |= (1 << (letter[i]-97) );
                        cnt++;
                    }
                }
                i++;
            }
            cout << cnt;
        }

};

int main()
{
    Anton_and_Letters p;
    p.print();
}
