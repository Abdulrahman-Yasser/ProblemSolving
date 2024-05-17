#include <algorithm>

int search_binary(vector<int>& heaters, int target){
    int r = heaters.size()-1, l = 0, m = 0;
    int my_min = 2147483647;
    while(r >= l){
        m = (r + l) / 2;
        if(heaters[m] < target){
            l = m + 1;
        }else if(heaters[m] > target){
            r = m - 1;
        }else{
            return 0;
        }
        if( my_min > abs(heaters[m] - target)) {
            my_min = abs(heaters[m] - target);
        }
    }
    return my_min;
}

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int the_minimum_distance = 0, min_in_general = 0;
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        for(auto i = houses.begin(); i < houses.end(); ++i){
            the_minimum_distance = search_binary(heaters, *i);
            if(the_minimum_distance > min_in_general){
                min_in_general = the_minimum_distance;
            }
        }
        return min_in_general;
    }
};