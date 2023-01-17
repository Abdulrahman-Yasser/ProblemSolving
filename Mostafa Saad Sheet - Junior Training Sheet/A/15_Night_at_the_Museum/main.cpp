
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
class Black_Square{
    private:
        string Name;
    public:
        Black_Square(){
            cin >> Name;
        }
        void print(){
            int i = 0, sum = 0, temp = 0;
            char b = 'a';
            while(Name[i] != '\0'){
                temp = abs(Name[i] - b);
                if(temp < 13 ){
                    sum += temp;
                }else{
                    sum += (26 - temp);
                }
                b = Name[i];
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
