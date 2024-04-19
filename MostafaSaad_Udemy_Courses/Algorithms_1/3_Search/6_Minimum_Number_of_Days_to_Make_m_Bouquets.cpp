class Solution {
public:
    int is_it_ok(vector<int>&bloomDay, int target, int k, int m){
        int result = 0;
        int total_sequence = 0;
        for(int i = 0; i < bloomDay.size(); ++i){
            if(bloomDay[i]-target <= 0){
                total_sequence++;
            }else{
                result += total_sequence/k;
                if(result >= m){
                    return result;
                }
                total_sequence = 0;
            }
        }
        return result + total_sequence/k;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < (unsigned long)m*k){
            return -1;
        }
        int max = *max_element(bloomDay.begin(), bloomDay.end());
        int min = 1, pos = -1, mid = 0;
        while(min <= max){
            mid = (max + min) / 2;
            
            if(is_it_ok(bloomDay, mid, k, m) >= m){
                pos = mid;
                max = mid - 1;
            }else{
                min = mid + 1;
            }
        }
        int result = 2147483647;
        for(int i = 0; i < bloomDay.size(); ++i){
            if(bloomDay[i] >= pos){
                if(bloomDay[i] < result){
                    result = bloomDay[i];
                }
            }
        }
        return result;
    }
};