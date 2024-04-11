/* O(nLogn) */
/* Still need to get O(n) */

#include <algorithm>
#include <stdbool.h>
bool compare(int  a, int b){
    return (a < b);
}



class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int my_end = 0, my_beg = 0, i;
        vector<int> nums_cpy = nums;
        sort(nums_cpy.begin(), nums_cpy.end(), compare);
        for(i = 0; i < nums.size(); ++i){
            if(nums_cpy[i] != nums[i]){
                my_beg = i;
                break;
            }
        }
        for(i = nums.size() - 1; i >= 0; --i){
            if(nums_cpy[i] != nums[i]){
                my_end = i+1;
                break;
            }
        }
        return my_end - my_beg;
    }
};