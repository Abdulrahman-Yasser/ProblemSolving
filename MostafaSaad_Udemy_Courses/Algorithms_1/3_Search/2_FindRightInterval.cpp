bool cmp(vector<int> a,  vector<int>b){
    return a[0] < b[0];
}

class Solution {
public:
    int BinarySearch(vector<vector<int>> &intervals, int target){
        int m = -1, r = intervals.size() - 1, l = 0, pos = -1;
        while(r >= l){
            m = (r + l) / 2;
            if(intervals[m][0] < target){
                l = m + 1;
            }else if(intervals[m][0] >= target){
                r = m - 1;
                pos = m;
            }
        }
        return pos;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int i;
        vector<int> result(intervals.size(), -1);
        vector<vector<int>> startings;


        for(i = 0; i < intervals.size(); ++i){
            startings.push_back({intervals[i][0], i});
        }

        std::sort(startings.begin(), startings.end());
        int val;
        for(i = 0; i < startings.size(); ++i){
            val = BinarySearch(startings, intervals[i][1]);
            if(val != -1){
                result[i] = startings[val][1];
            }
        }
        return result;
    }
};