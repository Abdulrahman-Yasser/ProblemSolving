
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
class Dubstep{
    private:
        int n;
        string *Ptr;
        char q[2];
    public:
        Dubstep(){
            cin >> n;
            Ptr = new string[n];
            for(int i = 0; i < n; i++){
                cin >> Ptr[i];
            }
        }
        void print(){
            char char_1 = Ptr[0][0], char_2 = Ptr[0][1];
            if(char_1 == char_2){
                cout << "NO";
                return;
            }
            /* Checking if there is a different character in the middle */
            // for(int i = 0; i < n; i++){
            //     for(int j = 0; j < n; j++){
            //         if( Ptr[i][j] != char_1 && Ptr[i][j] != char_2 ){
            //             cout << "NO";
            //             return;
            //         }
            //     }
            // }
            /* Checking if the shape is not X */
            for(int i = 0; i < n; i++){
                if( Ptr[i][i] == char_1 && Ptr[i][abs(n-i-1)] == char_1 ){
                }else{
                    // cout << i << " " << abs(n-i-1) << " " << endl;
                    cout << "NO";
                    return;
                }
                for(int j = 0; j <= n/2; j++){
                    if(j == i || j == abs(n-i - 1)){
                        continue;
                    }
                    if( Ptr[i][j] == char_2 && Ptr[i][abs(n- j - 1)] == char_2){
                    }else{
                        // cout << i << " " << j << " " << abs(n- j - 1) << endl;
                        cout << "NO";
                        return;
                    }
                }
            }
            cout << "YES";
        }
};

int main()
{
    Dubstep p;
    p.print();
}
