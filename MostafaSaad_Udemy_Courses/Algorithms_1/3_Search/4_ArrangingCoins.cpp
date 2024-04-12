//! cpp
class Solution {
public:
    bool doesItFit(int n, long long rows){
        long sum = rows * (rows + 1) / 2;
        return(n >= sum);
    }
    int arrangeCoins(int n) {
        int l = 0, r = n, ans = 0;
        while(r >= l){
            int m = (r + l) / 2;
            if( doesItFit(n, m) ){
                ans = m;
                l = m + 1;
            }else{
                r = m - 1;
            }
        }
        return ans;
    }
};