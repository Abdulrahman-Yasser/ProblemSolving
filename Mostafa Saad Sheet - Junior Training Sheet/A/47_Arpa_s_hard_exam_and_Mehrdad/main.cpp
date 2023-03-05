
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
class  Arpa_s_hard_exam_and_Mehrdad_s{
    private:
        int n;
    public:
        Arpa_s_hard_exam_and_Mehrdad_s(){
            cin >> n;
            if(n == 0){
                cout << 1;
                return;
            }
            switch(n % 4){
                case 0:
                    cout << 6;
                    break;
                case 1:
                    cout << 8;
                    break;
                case 2:
                    cout << 4;
                    break;
                case 3:
                    cout << 2;
                    break;
            }
        }
        void print(){
        }
};

int main()
{
    Arpa_s_hard_exam_and_Mehrdad_s p;
    p.print();
}
