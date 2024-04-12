class Solution {
public:
    int binarySearchRightLimit(vector<int>& nums, int target, int r, int l){
        int m;
        while(r >= l){
            m = (r + l) / 2;
            if(nums[m] == target){
                l = m + 1;
            }else if(nums[m] > target){
                r = m - 1;
            }

            if(nums[r] == target){
                return r;
            }
        }
        return r;
    }
    int binarySearchLeftLimit(vector<int>& nums, int target, int r, int l){
        int m;
        while(r >= l){
            m = (r + l) / 2;
            if(nums[m] == target){
                r = m - 1;
            }else if(nums[m] < target){
                l = m + 1;
            }

            if(nums[l] == target){
                return l;
            }
        }
        return l;
    }



    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result{-1, -1};
        int r = nums.size() - 1, l = 0;
        int m;
        int c = 0;
        while(r >= l){
            m = r + l / 2;
            if(nums[m] > target){
                r = m - 1;
            }else if(nums[m] < target){
                l = m + 1;
            }else{
                result[0] = binarySearchLeftLimit(nums, target, r, l);
                result[1] = binarySearchRightLimit(nums, target, r, l);
                return result;
            }
        }
        return result;
    }
};


class Solution {
public:
    int binarySearchLimit(vector<int>& nums, int target, bool TrueForRight){
        int m;
        int r = nums.size() - 1, l = 0;
        int limit = -1;
        while(r >= l){
            m = (r + l) / 2;
            if(nums[m] < target){
                l = m + 1;
            }else if(nums[m] > target){
                r = m - 1;
            }else{
                limit = m;
                if(TrueForRight == true){
                    l = m + 1;
                }else{
                    r = m - 1;
                }
            }
        }
        return limit;
    }



    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result{-1, -1};
        result[0] = binarySearchLimit(nums, target, false);
        result[1] = binarySearchLimit(nums, target, true);
        return result;
    }
};