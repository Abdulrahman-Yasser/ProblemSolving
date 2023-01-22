
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class TeamOlympiad_2{
    private:
        int n;
        int* Ptr[3];
        int FrequentArray[3] = {0, 0, 0};
        int values[3] = {1, 2, 3};
    public:
        TeamOlympiad_2(){
            int temp;
            cin >> n;
            Ptr[0] = new int[n];
            Ptr[1] = new int[n];
            Ptr[2] = new int[n];
            for (int i = 0; i < n; i++){
                cin >> temp;
                Ptr[temp-1][FrequentArray[temp-1]] = i+1;
                FrequentArray[temp-1]++;
                /* Svae the number's index in it's array */
            }
        }
        void print(){
            int min = INT32_MAX;
            /* Getting How many teams, then we will collect the team */
            for(int i = 0; i < 3; i++){
                if(min > FrequentArray[i]){
                    min = FrequentArray[i];
                }
            }
            cout << min << endl;

            /* Collecting the team */
            for(int i = 0; i < min; i++){
                cout << Ptr[2][i] << " " << Ptr[1][i] << " " << Ptr[0][i]  << endl;
            }
        }
};

int main()
{
    TeamOlympiad_2 p;
    p.print();
}
