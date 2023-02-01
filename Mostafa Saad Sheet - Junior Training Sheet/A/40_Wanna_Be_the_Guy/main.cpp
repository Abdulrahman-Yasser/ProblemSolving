
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
class Wanna_Be_the_Guy_64_num{
    private:
        int n, n_1, n_2;
        unsigned long long int marker = 0;
    public:
        Wanna_Be_the_Guy_64_num(){
            int temp;
            cin >> n;
            cin >> n_1;
            for(int i = 0; i < n_1; i++){
                cin >> temp;
                marker |= 1 << temp;
            }
            cin >> n_2;
            for(int i = 0; i < n_2; i++){
                cin >> temp;
                marker |= 1 << temp;
            }
            marker |= 1 << 0;
        }
        void print(){
            unsigned long long int q = pow(2, n + 1) - 1 ;
            if(marker == q){
                cout << "I become the guy.";
            }else{
                cout << "Oh, my keyboard!";
            }
        }
};

class Wanna_Be_the_Guy_100_num{
    private:
        int n;
        int n_1;
        int n_2;
        bool *marker ;
    public:
        Wanna_Be_the_Guy_100_num(){
            marker = new bool[n];
            int temp;
            cin >> n;
            cin >> n_1;
            for(int i = 0; i < n_1; i++){
                cin >> temp;
                marker[temp - 1] = true;
            }
            cin >> n_2;
            for(int i = 0; i < n_2; i++){
                cin >> temp;
                marker[temp - 1] = true;
            }
        }
        void print(){
            int i = 0;
            while(marker[i] && i < n){
                i++;
            }
            if(i == n){
                cout << "I become the guy.";
            }else{
                cout << "Oh, my keyboard!";
            }
        }
};

int main()
{
    Wanna_Be_the_Guy_100_num p;
    p.print();
}
