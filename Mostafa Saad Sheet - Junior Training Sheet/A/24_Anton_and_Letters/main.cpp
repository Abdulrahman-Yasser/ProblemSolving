
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class Anton_and_Letters{
    private:
        string letter;
        set <char>Container;
        int b;
    public:
        Anton_and_Letters(){
            getline(cin,letter);
        }
        void print(){
            int i = 0, cnt = 0;
            while(letter[i] != '}'){
                if(letter[i] == '{' || letter[i] == '}' || letter[i] == ',' || letter[i] == ' ' ){
                }else{
                    Container.insert(letter[i]);
                }
                i++;
            }
            cout << Container.size();
        }
};

int main()
{
    Anton_and_Letters p;
    p.print();
}
