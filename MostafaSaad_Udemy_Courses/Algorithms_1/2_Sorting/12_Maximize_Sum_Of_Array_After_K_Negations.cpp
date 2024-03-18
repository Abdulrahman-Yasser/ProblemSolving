
#include <algorithm>
#include <stdbool.h>

bool compare(int a, int b){
    return a < b;
}

int sum(vector<int>& nums){
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    return sum;
}

void print(vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int threshold = 0, my_sum = 0, i;
        sort(nums.begin(), nums.end(), compare);
        for(i = 0; i < nums.size() && nums[i] <= 0 ; i++);

        if(i > 0){
            threshold = i - 1;
        }

        for(i = 0; i <= threshold && k > 0; i++){
            nums[i] = 0 - nums[i];
            k--;
        }

        if(k % 2){
            if(threshold == nums.size()-1){
                nums[threshold] = 0 - nums[threshold];
            }else{
                if(abs( nums[threshold] ) < abs( nums[threshold + 1] )){
                    nums[threshold] = 0 - nums[threshold];
                }else{
                    nums[threshold+1] = 0 - nums[threshold+1];
                }
            }
            my_sum = sum(nums);
        }else{
            my_sum = sum(nums);
        }
        return my_sum;
    }
};