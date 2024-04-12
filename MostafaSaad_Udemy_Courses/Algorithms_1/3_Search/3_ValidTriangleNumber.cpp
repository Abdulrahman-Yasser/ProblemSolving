class Solution {
public:

    // int BinarySearch(vector<int>& nums, int first_side, int sec_side){
    //     int rslt = 0;
    //     int l = sec_side+1, r = nums.size()-1, m = -1, pos = -1;
    //     while(r >= l){
    //         m = (l + r) / 2;
    //         if(nums[first_side] + nums[sec_side] > nums[m]){
    //             l = m + 1;
    //             pos = m;
    //         }else{
    //             r = m - 1;
    //         }
    //     }
    //     return pos;
    // }

    // int triangleNumber(vector<int>& nums) {
    //     std::sort(nums.begin(), nums.end());
    //     int r = 0, result = 0;
    //     for(int i = 0; i < nums.size(); i++){
    //         for(int j = i+1; j < nums.size(); j++){
    //             r = BinarySearch(nums, i, j);
    //             if(r != -1){
    //                 result += r - j;
    //             }
    //         }
    //     }
    //     return result;
    // }

    int triangleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int r = 0, result = 0;

        if(nums.size() <= 3){
            if(nums.size() == 3){
                if(nums[0]+nums[1] > nums[2])
                    return 1;
                else
                    return 0;
            }else{
                return 0;
            }
        }

        for(int i = 0; i < nums.size() - 2; i++){
            int k = i + 2;
            for(int j = i+1; j < nums.size()-1 && nums[i] != 0; j++){
                while(k < nums.size() && nums[i]+nums[j] > nums[k]){
                    k++;
                }
                result += k-j-1;
            }
        }
        return result;
    }

};