
#include <string>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;

class TeamOlympiad{
    private:
        int n;
        int* Ptr;
        int FrequentArray[4] = {0, 0, 0, 0};
        int values[3] = {1, 2, 3};
    public:
        TeamOlympiad(){
            cin >> n;
            Ptr = new int[n];
            for (int i = 0; i < n; i++){
                cin >> Ptr[i];
                FrequentArray[Ptr[i]]++;
            }
        }
        void print(){
            int temp;
            int indexes[3];
            int min = INT32_MAX;
            /* Getting How many teams, then we will collect the team */
            for(int i = 1; i < 4; i++){
                if(min > FrequentArray[i]){
                    min = FrequentArray[i];
                }
            }
            cout << min << endl;

            /* Collecting the team */
            for(int i = 0; i < min; i++){
                for(int y = 0; y < 3; y++){
                    /* Getting a single number each time */
                    temp = 0;
                    while(Ptr[temp] != values[y]){
                        temp++;
                    }
                    Ptr[temp] = 0;
                    cout << ++temp << " ";
                }
                cout << endl;
            }
        }
};

int main()
{
    TeamOlympiad p;
    p.print();
}
