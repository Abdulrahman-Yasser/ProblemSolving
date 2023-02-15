
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

/*
    a solution for less than 64 number 
*/
class Brain_Photos{
    private:
        int n;
        int m;
        bool colored = false;
    public:
        Brain_Photos(){
            char temp;
            cin >> n;
            cin >> m;
            for(int i = 0; i < n*m; i++){
                cin >> temp;
                /* once it will detect other color than W and B it will not check again */
                if(! colored){
                    if(temp == 'W' || temp == 'B' || temp == 'G'){
                    }else{
                        colored = true;
                    }
                }
            }
        }
        void print(){
            if(colored){
                cout << "#Color";
            }else{
                cout << "#Black&White";
            }
        }
};

int main()
{
    Brain_Photos p;
    p.print();
}
