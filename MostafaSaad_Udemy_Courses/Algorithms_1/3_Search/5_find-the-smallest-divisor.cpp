
#include <algorithm>
#include <stdbool.h>
#include <limits.h>
class Solution {
public:
    int round_dividing(int a, int on){
        if(a % on){
            return (a / on) + 1;
        }else{
            return a / on;
        }
    }

    int my_sum(vector<int>& nums, int dividing ) {
        int sum = 0;
        for(auto i = nums.begin(); i < nums.end(); ++i){
            sum += round_dividing(*i, dividing);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int r = *max_element(nums.begin(), nums.end());
        int l = 1, m = 0, ans = -1;
        while(r >= l){
            m = (r + l) / 2;
            if(my_sum(nums, m) <= threshold){
                ans = m;
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        return ans;
    }
};