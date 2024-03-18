/* Not working right */

#include <algorithm>
#include <stdbool.h>

bool compare(int a, int b){
    return a < b;
}


class Solution {
public:
    char hash[500];
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int temp = 0;
        int c = 0;
        for(int i = 0; i < dist.size(); i++){
            if(dist[i] < speed[i]){
                c = 1;
                hash[1] += 1;
                continue;
            }
            dist[i] = dist[i] / speed[i];
            hash[ dist[i] ] += 1;
        }
        for(int i = 1; i < 500; i++){
            c += hash[i];
            if(c > (i) && hash[i] > 0){
                c = i;
                break;
            }
        }
        return c;
    }
};