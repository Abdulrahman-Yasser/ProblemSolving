/* TIMUS 1100 */
#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class  PresidentsOffice{
    private:
        unsigned int n, m;
        char c;
        string *Office;
    public:
        PresidentsOffice(){
            cin >> n >> m >> c;
            Office = new string[n];
            for(int i = 0; i < n; i++){
                cin >> Office[i];
            }
        }
        int check(int i, int j){
        }
        void print(){
            int z;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(Office[i*n + j] == c){
                        z = check(i, j);
                    }
                }
            }
        }
};

int main()
{
    PresidentsOffice p;
    p.print();
}
