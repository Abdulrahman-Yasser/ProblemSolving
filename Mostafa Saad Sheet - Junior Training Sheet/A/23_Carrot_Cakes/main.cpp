
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;

class Juicer{
    private:
        int n, t, k, d;
    public:
        Juicer(){
            cin >> n >> t >> k >> d;
        }
        void print(){
            float total_time = (float)(n * t) / (float)k;

            if(total_time > int(total_time)){
                total_time = int(total_time) + 1;
            }else{
                total_time = int(total_time);
            }

            float many_times = total_time / t;
            if(many_times > int(many_times)){
                many_times = int(many_times) + 1;
            }else{
                many_times = int(many_times);
            }

            total_time = many_times * t;
            
            int remaining_time = total_time - d;
            if(remaining_time > t){
                cout << "YES";
                return;
            }else{
                cout << "NO";
                return ;
            }
        }

};

int main()
{
    Juicer p;
    p.print();
}
